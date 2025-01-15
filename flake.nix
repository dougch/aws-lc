{
  description = "AWS-LC is a general-purpose cryptographic library";

  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixos-22.11";

  outputs = { self, nix, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let pkgs = nixpkgs.legacyPackages.${system};
      in rec {
        packages.aws-lc-fips = pkgs.stdenv.mkDerivation {
          src = self;
          name = "aws-lc-fips";
          inherit system;
          nativeBuildInputs = [ pkgs.ninja pkgs.cmake pkgs.perl ];
          cmakeFlags = [ "-GNinja" "-DDISABLE_GO=ON" "-DCMAKE_BUILD_TYPE=relwithdebinfo"];
          checkPhase = ''
            ninja run_minimal_tests
          '';
        };
        formatter = pkgs.nixfmt;
        packages.default = packages.aws-lc-fips;
        packages.aws-lc-fips-test = packages.aws-lc-fips.overrideAttrs
         (finalAttrs: previousAttrs: {
            doCheck = true;
            });
      });
}


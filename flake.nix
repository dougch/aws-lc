{
  description = "AWS-LC is a general-purpose cryptographic library";

  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixos-22.11";

  outputs = { self, nix, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let pkgs = nixpkgs.legacyPackages.${system};
      in rec {
        packages.aws-lc-fips2022 = pkgs.stdenv.mkDerivation {
          src = self;
          name = "aws-lc-fips";
          inherit system;
          nativeBuildInputs = [ pkgs.ninja pkgs.cmake pkgs.perl pkgs.go ];
          cmakeFlags = [ "-GNinja"
                         "-DBUILD_SHARED_LIBS=1"
                         "-DCMAKE_BUILD_TYPE=relwithdebinfo"
                         "-DFIPS=1"];
          buildPhase = ''
            # Workaround a bug where the value of $HOME is set to
            # non-writable /homeless-shelter dir
            # see https://github.com/NixOS/nix/issues/670
            export HOME=$(pwd)
          '';
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


{
  description = "AWS-LC is a general-purpose cryptographic library";

  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixos-22.11";

  outputs = { self, nix, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let pkgs = nixpkgs.legacyPackages.${system};
        common_packages = [
          # Integration Deps
          # We're not including openssl1.1.1 in our package list to avoid confusing cmake.
          # It will be in the PATH of our devShell for use in tests.

          # Linters/Formatters
          pkgs.shellcheck
          pkgs.nixfmt
          pkgs.go

          # Quality of Life
          pkgs.findutils
          pkgs.git
          pkgs.which
        ];
      in rec {
        packages.aws-lc = pkgs.stdenv.mkDerivation {
          src = self;
          name = "aws-lc";
          inherit system;
          nativeBuildInputs = [ pkgs.ninja pkgs.cmake pkgs.perl ];
          cmakeFlags = [ "-GNinja" "-DDISABLE_GO=ON" ];
          checkPhase = ''
            ninja run_minimal_tests
          '';
        };
        formatter = pkgs.nixfmt;
        packages.default = packages.aws-lc;
        packages.aws-lc-test = packages.aws-lc.overrideAttrs
         (finalAttrs: previousAttrs: {
            doCheck = true;
            });
        devShells.default = pkgs.mkShell {
          inherit system;
          packages = common_packages;
          shellHook = ''
            export PS1="[nix awslc] $PS1"
          '';
        };
      });
}


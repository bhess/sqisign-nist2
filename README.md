# SQIsign2D-West

This library is a C implementation of SQIsign2D-West.

Based on the following codes:
- SQIsign, https://sqisign.org
- SQIsignHD, https://github.com/Pierrick-Dartois/SQISignHD-lib

## Requirements

- CMake (version 3.5 or later)
- C99-compatible compiler
- GMP (version 6.1.2 or later)

## Build and check

For a generic build

- `mkdir -p build`
- `cd build`
- `cmake -DSQISIGN_BUILD_TYPE=ref ..`
- `make`
- `make test`

Warning: at the moment not all tests pass. The main code works, though.

### Test and benchmark the signature

To reproduce the experiments of the paper, create the following builds

- `mkdir -p build-ref build-broadwell`
- `cd build-ref`
- `cmake -DSQISIGN_BUILD_TYPE=ref -DCMAKE_C_COMPILER=clang -DCMAKE_BUILD_TYPE=Release ..`
- `make`
- `cd ../build-broadwell`
- `cmake -DSQISIGN_BUILD_TYPE=broadwell -DCMAKE_C_COMPILER=clang -DCMAKE_BUILD_TYPE=Release ..`
- `make`
- `cd ..`

Then each build directory will contain a folder `test` with six executables: one per NIST level and rigourous / heuristic variant. Run them like this:

- `./build-ref/test/sqisign2d_lvl1`
- `./build-ref/test/sqisign2d_heuristic_lvl1`


## Build options

CMake build options can be specified with `-D<BUILD_OPTION>=<VALUE>`.

An optimised executable can be built by running
`cmake -DSQISIGN_BUILD_TYPE=<ref/broadwell> -DCMAKE_BUILD_TYPE=Release ..`

### SQISIGN_BUILD_TYPE

Specifies the build type for which SQIsign is built. The currently supported flags are:
- `ref`, which builds the plain C reference implementation based on Fiat-Crypto.
- `broadwell`, which builds an additional implementation with GF optimized code for the Intel Broadwell architecture.

### ENABLE_GMP_BUILD

If set to `OFF` (by default), the gmp library on the system is dynamically linked.
If set to `ON`, a custom gmp library is linked, which is built as part of the overall build process. 

In the latter case, the following further options are available:
- `ENABLE_GMP_STATIC`: Does static linking against gmp. The default is `OFF`.
- `GMP_BUILD_CONFIG_ARGS`: Provides additional config arguments for the gmp build (for example `--disable-assembly`). By default, no config arguments are provided.

### CMAKE_BUILD_TYPE

Can be used to specify special build types. The options are:

- `Release`: Builds with optimizations enabled and assertions disabled.
- `Debug`: Builds with debug symbols.
- `ASAN`: Builds with AddressSanitizer memory error detector.
- `MSAN`: Builds with MemorySanitizer detector for uninitialized reads.
- `LSAN`: Builds with LeakSanitizer for run-time memory leak detection.
- `UBSAN`: Builds with UndefinedBehaviorSanitizer for undefined behavior detection.

The default build type uses the flags `-O3 -Wstrict-prototypes -Wno-error=strict-prototypes -fvisibility=hidden -Wno-error=implicit-function-declaration -Wno-error=attributes`. (Notice that assertions remain enabled in this configuration, which harms performance.)

## License

SQIsign2d is licensed under Apache-2.0. See [LICENSE](LICENSE) and [NOTICE](NOTICE).

Third party code is used in some test and common code files:

- `src/common/aes_c.c`; MIT: "Copyright (c) 2016 Thomas Pornin <pornin@bolet.org>"
- `src/common/fips202.c`: Public Domain
- `src/common/randombytes_system.c`: MIT: Copyright (c) 2017 Daan Sprenkels <hello@dsprenkels.com>


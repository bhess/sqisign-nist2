if (STANDALONE)
    message("STANDALONE mode")
    cmake_minimum_required(VERSION 3.12)
    project(Quaternion VERSION 1.0 LANGUAGES C)

    set(LIB_QUATERNION lib_quaternion CACHE INTERNAL "LIB")
    set(INC_QUATERNION ${CMAKE_CURRENT_SOURCE_DIR}/include CACHE INTERNAL "INC")

    include_directories(standalone/common/include standalone/intbig/include standalone/include)

    add_compile_definitions(RADIX_64)
    #include GMP
    find_library(GMP gmp)
    find_path(GMP_INCLUDE gmp.h)
    include_directories(${GMP_INCLUDE})
    set(SOURCE_FILES_QUATERNION_GENERIC_REF_STANDALONE
        standalone/common/randombytes_system.c
        standalone/intbig/intbig.c
    )
    
    enable_testing()
endif()

set(SOURCE_FILES_QUATERNION_GENERIC_REF
    algebra.c
    ideal.c
    dim4.c
    dim2.c
    integers.c
    lattice.c
    finit.c
    printer.c
    lll.c
    matkermod.c
    ${SOURCE_FILES_QUATERNION_GENERIC_REF_STANDALONE}
)

add_library(${LIB_QUATERNION} ${SOURCE_FILES_QUATERNION_GENERIC_REF})
if (STANDALONE)
    target_link_libraries(${LIB_QUATERNION} ${GMP})
endif()
target_include_directories(${LIB_QUATERNION} PRIVATE common ${INC_PUBLIC} ${INC_COMMON} ${INC_INTBIG} ${INC_QUATERNION})
target_compile_options(${LIB_QUATERNION} PRIVATE ${C_OPT_FLAGS})

add_subdirectory(test)

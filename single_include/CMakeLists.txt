find_package(Python3 REQUIRED COMPONENTS Interpreter)

set(SINGLE_HEADER_INPUT_DIR ${PROJECT_SOURCE_DIR}/include)
set(SINGLE_HEADER_OUTPUT_DIR ${PROJECT_SOURCE_DIR}/single_include)
set(SINGLE_HEADER_INPUT ${SINGLE_HEADER_INPUT_DIR}/pp2/pp2.h)
set(SINGLE_HEADER_OUTPUT ${SINGLE_HEADER_OUTPUT_DIR}/pp2/pp2.h)

file(GLOB_RECURSE PP2_HEADERS ${SINGLE_HEADER_INPUT_DIR}/*.h)

add_custom_command(OUTPUT "${SINGLE_HEADER_OUTPUT_DIR}/pp2/pp2.hpp"
                   COMMAND "${Python3_EXECUTABLE}" "${CMAKE_CURRENT_SOURCE_DIR}/generate_single_include.py"
                            -I ${SINGLE_HEADER_INPUT_DIR}
                            -o ${SINGLE_HEADER_OUTPUT}
                            ${SINGLE_HEADER_INPUT}
                   DEPENDS ${PP2_HEADERS})

add_custom_target(SingleHeader ALL DEPENDS "${SINGLE_HEADER_OUTPUT_DIR}/pp2/pp2.hpp")
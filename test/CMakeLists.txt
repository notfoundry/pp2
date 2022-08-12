file(GLOB_RECURSE PP2_TESTS ${PROJECT_SOURCE_DIR}/test/tests/test_*.py)

set (PP2_TESTING_PP_COMMAND "${CMAKE_CXX_COMPILER} -E -P -I${PROJECT_SOURCE_DIR}/include")

foreach (test_path ${PP2_TESTS})
    add_test(NAME ${test_path}
             COMMAND pytest --c-preprocessor "${PP2_TESTING_PP_COMMAND}" ${test_path})
endforeach ()
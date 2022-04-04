cmake_minimum_required(VERSION 3.12)

project(pp2
        VERSION 0.0.1
        DESCRIPTION "Next-generation imperative C/C++ Preprocessor metaprogramming library"
        HOMEPAGE_URL "https://github.com/notfoundry/pp2"
        LANGUAGES C CXX)
string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPERCASE)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})

option(${PROJECT_NAME_UPPERCASE}_INSTALL "Generate install target" ON)
option(${PROJECT_NAME_UPPERCASE}_BUILD_TESTS "Build project tests" ON)
option(${PROJECT_NAME_UPPERCASE}_BUILD_DOCS "Build project documentation" ON)

include(CTest)
include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

add_library(${PROJECT_NAME} INTERFACE)
add_library(${PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)
target_compile_features(${PROJECT_NAME} INTERFACE c_variadic_macros cxx_variadic_macros)


if (${PROJECT_NAME_UPPERCASE}_BUILD_TESTS)
    enable_testing()
    add_subdirectory(test)
endif()

if (${PROJECT_NAME_UPPERCASE}_BUILD_DOCS)
    add_subdirectory(docs)
endif()

if (${PROJECT_NAME_UPPERCASE}_INSTALL)
    install(TARGETS ${PROJECT_NAME}
            EXPORT ${PROJECT_NAME}_targets
            ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
            LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
            RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})

    write_basic_package_version_file("${PROJECT_NAME_UPPERCASE}ConfigVersion.cmake"
                            VERSION ${PROJECT_VERSION}
                            COMPATIBILITY SameMajorVersion)

    configure_package_config_file(
                                 "${PROJECT_SOURCE_DIR}/cmake/${PROJECT_NAME_UPPERCASE}Config.cmake.in"
                                 "${PROJECT_BINARY_DIR}/${PROJECT_NAME_UPPERCASE}Config.cmake"
                                 INSTALL_DESTINATION
                                 ${CMAKE_INSTALL_DATAROOTDIR}/${PROJECT_NAME}/cmake)

    install(EXPORT ${PROJECT_NAME}_targets
            FILE ${PROJECT_NAME_UPPERCASE}Targets.cmake
            NAMESPACE ${PROJECT_NAME}::
            DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/${PROJECT_NAME}/cmake)

    install(FILES "${PROJECT_BINARY_DIR}/${PROJECT_NAME_UPPERCASE}Config.cmake" "${PROJECT_BINARY_DIR}/${PROJECT_NAME_UPPERCASE}ConfigVersion.cmake"
            DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/${PROJECT_NAME}/cmake)

    install(DIRECTORY ${PROJECT_SOURCE_DIR}/include DESTINATION include)
endif()
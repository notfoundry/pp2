# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /github/workspace

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /github/workspace/build

# Utility rule file for Sphinx.

# Include any custom commands dependencies for this target.
include docs/CMakeFiles/Sphinx.dir/compiler_depend.make

# Include the progress variables for this target.
include docs/CMakeFiles/Sphinx.dir/progress.make

docs/CMakeFiles/Sphinx: docs/sphinx/index.html

docs/sphinx/index.html: ../docs/index.rst
docs/sphinx/index.html: docs/doxygen/xml/index.xml
docs/sphinx/index.html: ../docs/conf.py
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/github/workspace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating documentation with Sphinx"
	cd /github/workspace/build/docs && /usr/bin/sphinx-build -b html -Dbreathe_projects.pp2=/github/workspace/build/docs/doxygen/xml /github/workspace/docs /github/workspace/build/docs/sphinx

docs/doxygen/xml/index.xml: ../include/pp2/pp2.h
docs/doxygen/xml/index.xml: ../docs/Doxyfile.in
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/github/workspace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating documentation"
	cd /github/workspace/build/docs && /usr/bin/doxygen /github/workspace/build/docs/Doxyfile

Sphinx: docs/CMakeFiles/Sphinx
Sphinx: docs/doxygen/xml/index.xml
Sphinx: docs/sphinx/index.html
Sphinx: docs/CMakeFiles/Sphinx.dir/build.make
.PHONY : Sphinx

# Rule to build all files generated by this target.
docs/CMakeFiles/Sphinx.dir/build: Sphinx
.PHONY : docs/CMakeFiles/Sphinx.dir/build

docs/CMakeFiles/Sphinx.dir/clean:
	cd /github/workspace/build/docs && $(CMAKE_COMMAND) -P CMakeFiles/Sphinx.dir/cmake_clean.cmake
.PHONY : docs/CMakeFiles/Sphinx.dir/clean

docs/CMakeFiles/Sphinx.dir/depend:
	cd /github/workspace/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /github/workspace /github/workspace/docs /github/workspace/build /github/workspace/build/docs /github/workspace/build/docs/CMakeFiles/Sphinx.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : docs/CMakeFiles/Sphinx.dir/depend

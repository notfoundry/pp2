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

# Utility rule file for Doxygen.

# Include any custom commands dependencies for this target.
include docs/CMakeFiles/Doxygen.dir/compiler_depend.make

# Include the progress variables for this target.
include docs/CMakeFiles/Doxygen.dir/progress.make

docs/CMakeFiles/Doxygen: docs/doxygen/xml/index.xml

docs/doxygen/xml/index.xml: ../include/pp2/language.h
docs/doxygen/xml/index.xml: ../include/pp2/language/basic/block.h
docs/doxygen/xml/index.xml: ../include/pp2/language/basic/detail/variable_tables.h
docs/doxygen/xml/index.xml: ../include/pp2/language/basic/object.h
docs/doxygen/xml/index.xml: ../include/pp2/language/basic/return.h
docs/doxygen/xml/index.xml: ../include/pp2/language/basic/variable.h
docs/doxygen/xml/index.xml: ../include/pp2/language/compiler.h
docs/doxygen/xml/index.xml: ../include/pp2/language/definition/const.h
docs/doxygen/xml/index.xml: ../include/pp2/language/definition/def.h
docs/doxygen/xml/index.xml: ../include/pp2/language/definition/primitive.h
docs/doxygen/xml/index.xml: ../include/pp2/language/definition/type.h
docs/doxygen/xml/index.xml: ../include/pp2/language/definition/vm_fn.h
docs/doxygen/xml/index.xml: ../include/pp2/language/expressions/fn.h
docs/doxygen/xml/index.xml: ../include/pp2/language/io/print.h
docs/doxygen/xml/index.xml: ../include/pp2/language/io/put.h
docs/doxygen/xml/index.xml: ../include/pp2/language/statements/for.h
docs/doxygen/xml/index.xml: ../include/pp2/language/statements/if.h
docs/doxygen/xml/index.xml: ../include/pp2/language/statements/while.h
docs/doxygen/xml/index.xml: ../include/pp2/language/types/any.h
docs/doxygen/xml/index.xml: ../include/pp2/language/types/bool.h
docs/doxygen/xml/index.xml: ../include/pp2/language/types/fn.h
docs/doxygen/xml/index.xml: ../include/pp2/language/types/type.h
docs/doxygen/xml/index.xml: ../include/pp2/machine.h
docs/doxygen/xml/index.xml: ../include/pp2/machine/context.h
docs/doxygen/xml/index.xml: ../include/pp2/machine/exception/push_eh.h
docs/doxygen/xml/index.xml: ../include/pp2/machine/exception/throw.h
docs/doxygen/xml/index.xml: ../include/pp2/machine/goto/goto.h
docs/doxygen/xml/index.xml: ../include/pp2/machine/goto/label.h
docs/doxygen/xml/index.xml: ../include/pp2/machine/insns/emit.h
docs/doxygen/xml/index.xml: ../include/pp2/machine/insns/load.h
docs/doxygen/xml/index.xml: ../include/pp2/machine/insns/nop.h
docs/doxygen/xml/index.xml: ../include/pp2/machine/insns/terminate.h
docs/doxygen/xml/index.xml: ../include/pp2/machine/output.h
docs/doxygen/xml/index.xml: ../include/pp2/machine/stack/detail/load_tables.h
docs/doxygen/xml/index.xml: ../include/pp2/machine/stack/detail/store_tables.h
docs/doxygen/xml/index.xml: ../include/pp2/machine/stack/load.h
docs/doxygen/xml/index.xml: ../include/pp2/machine/stack/pop.h
docs/doxygen/xml/index.xml: ../include/pp2/machine/stack/push.h
docs/doxygen/xml/index.xml: ../include/pp2/machine/stack/store.h
docs/doxygen/xml/index.xml: ../include/pp2/machine/vm.h
docs/doxygen/xml/index.xml: ../include/pp2/pp2.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive/arithmetic/literal/inc.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive/assoc/detail/find_tables.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive/assoc/find.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive/basic/cat.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive/basic/invoke.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive/control/if.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive/core.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive/introspection/is_nestable.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive/introspection/is_nil.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive/introspection/is_tuple.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive/punctuation/comma.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive/punctuation/lparen.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive/punctuation/rparen.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive/seq/head.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive/seq/tail.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive/tuple/at.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive/tuple/drop.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive/tuple/eat.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive/tuple/head.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive/tuple/higher_order/compute.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive/tuple/open.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive/tuple/partition.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive/tuple/prepend_last.h
docs/doxygen/xml/index.xml: ../include/pp2/primitive/tuple/replace.h
docs/doxygen/xml/index.xml: ../docs/Doxyfile.in
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/github/workspace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating documentation"
	cd /github/workspace/build/docs && /usr/bin/doxygen /github/workspace/build/docs/Doxyfile

Doxygen: docs/CMakeFiles/Doxygen
Doxygen: docs/doxygen/xml/index.xml
Doxygen: docs/CMakeFiles/Doxygen.dir/build.make
.PHONY : Doxygen

# Rule to build all files generated by this target.
docs/CMakeFiles/Doxygen.dir/build: Doxygen
.PHONY : docs/CMakeFiles/Doxygen.dir/build

docs/CMakeFiles/Doxygen.dir/clean:
	cd /github/workspace/build/docs && $(CMAKE_COMMAND) -P CMakeFiles/Doxygen.dir/cmake_clean.cmake
.PHONY : docs/CMakeFiles/Doxygen.dir/clean

docs/CMakeFiles/Doxygen.dir/depend:
	cd /github/workspace/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /github/workspace /github/workspace/docs /github/workspace/build /github/workspace/build/docs /github/workspace/build/docs/CMakeFiles/Doxygen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : docs/CMakeFiles/Doxygen.dir/depend


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

# Utility rule file for SingleHeader.

# Include any custom commands dependencies for this target.
include single_include/CMakeFiles/SingleHeader.dir/compiler_depend.make

# Include the progress variables for this target.
include single_include/CMakeFiles/SingleHeader.dir/progress.make

single_include/CMakeFiles/SingleHeader: ../single_include/pp2/pp2.hpp

../single_include/pp2/pp2.hpp: ../include/pp2/language.h
../single_include/pp2/pp2.hpp: ../include/pp2/language/basic/block.h
../single_include/pp2/pp2.hpp: ../include/pp2/language/basic/detail/variable_tables.h
../single_include/pp2/pp2.hpp: ../include/pp2/language/basic/object.h
../single_include/pp2/pp2.hpp: ../include/pp2/language/basic/return.h
../single_include/pp2/pp2.hpp: ../include/pp2/language/basic/variable.h
../single_include/pp2/pp2.hpp: ../include/pp2/language/compiler.h
../single_include/pp2/pp2.hpp: ../include/pp2/language/definition/const.h
../single_include/pp2/pp2.hpp: ../include/pp2/language/definition/def.h
../single_include/pp2/pp2.hpp: ../include/pp2/language/definition/primitive.h
../single_include/pp2/pp2.hpp: ../include/pp2/language/definition/type.h
../single_include/pp2/pp2.hpp: ../include/pp2/language/definition/vm_fn.h
../single_include/pp2/pp2.hpp: ../include/pp2/language/expressions/fn.h
../single_include/pp2/pp2.hpp: ../include/pp2/language/io/print.h
../single_include/pp2/pp2.hpp: ../include/pp2/language/io/put.h
../single_include/pp2/pp2.hpp: ../include/pp2/language/statements/for.h
../single_include/pp2/pp2.hpp: ../include/pp2/language/statements/if.h
../single_include/pp2/pp2.hpp: ../include/pp2/language/statements/while.h
../single_include/pp2/pp2.hpp: ../include/pp2/language/types/any.h
../single_include/pp2/pp2.hpp: ../include/pp2/language/types/bool.h
../single_include/pp2/pp2.hpp: ../include/pp2/language/types/fn.h
../single_include/pp2/pp2.hpp: ../include/pp2/language/types/type.h
../single_include/pp2/pp2.hpp: ../include/pp2/machine.h
../single_include/pp2/pp2.hpp: ../include/pp2/machine/context.h
../single_include/pp2/pp2.hpp: ../include/pp2/machine/exception/push_eh.h
../single_include/pp2/pp2.hpp: ../include/pp2/machine/exception/throw.h
../single_include/pp2/pp2.hpp: ../include/pp2/machine/goto/goto.h
../single_include/pp2/pp2.hpp: ../include/pp2/machine/goto/label.h
../single_include/pp2/pp2.hpp: ../include/pp2/machine/insns/emit.h
../single_include/pp2/pp2.hpp: ../include/pp2/machine/insns/load.h
../single_include/pp2/pp2.hpp: ../include/pp2/machine/insns/nop.h
../single_include/pp2/pp2.hpp: ../include/pp2/machine/insns/terminate.h
../single_include/pp2/pp2.hpp: ../include/pp2/machine/output.h
../single_include/pp2/pp2.hpp: ../include/pp2/machine/stack/detail/load_tables.h
../single_include/pp2/pp2.hpp: ../include/pp2/machine/stack/detail/store_tables.h
../single_include/pp2/pp2.hpp: ../include/pp2/machine/stack/load.h
../single_include/pp2/pp2.hpp: ../include/pp2/machine/stack/pop.h
../single_include/pp2/pp2.hpp: ../include/pp2/machine/stack/push.h
../single_include/pp2/pp2.hpp: ../include/pp2/machine/stack/store.h
../single_include/pp2/pp2.hpp: ../include/pp2/machine/vm.h
../single_include/pp2/pp2.hpp: ../include/pp2/pp2.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive/arithmetic/literal/inc.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive/assoc/detail/find_tables.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive/assoc/find.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive/basic/cat.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive/basic/invoke.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive/control/if.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive/core.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive/introspection/is_nestable.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive/introspection/is_nil.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive/introspection/is_tuple.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive/punctuation/comma.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive/punctuation/lparen.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive/punctuation/rparen.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive/seq/head.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive/seq/tail.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive/tuple/at.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive/tuple/drop.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive/tuple/eat.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive/tuple/head.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive/tuple/higher_order/compute.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive/tuple/open.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive/tuple/partition.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive/tuple/prepend_last.h
../single_include/pp2/pp2.hpp: ../include/pp2/primitive/tuple/replace.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/github/workspace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ../../single_include/pp2/pp2.hpp"
	cd /github/workspace/build/single_include && /usr/bin/python3.9 /github/workspace/single_include/generate_single_include.py -I /github/workspace/include -o /github/workspace/single_include/pp2/pp2.h /github/workspace/include/pp2/pp2.h

SingleHeader: single_include/CMakeFiles/SingleHeader
SingleHeader: ../single_include/pp2/pp2.hpp
SingleHeader: single_include/CMakeFiles/SingleHeader.dir/build.make
.PHONY : SingleHeader

# Rule to build all files generated by this target.
single_include/CMakeFiles/SingleHeader.dir/build: SingleHeader
.PHONY : single_include/CMakeFiles/SingleHeader.dir/build

single_include/CMakeFiles/SingleHeader.dir/clean:
	cd /github/workspace/build/single_include && $(CMAKE_COMMAND) -P CMakeFiles/SingleHeader.dir/cmake_clean.cmake
.PHONY : single_include/CMakeFiles/SingleHeader.dir/clean

single_include/CMakeFiles/SingleHeader.dir/depend:
	cd /github/workspace/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /github/workspace /github/workspace/single_include /github/workspace/build /github/workspace/build/single_include /github/workspace/build/single_include/CMakeFiles/SingleHeader.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : single_include/CMakeFiles/SingleHeader.dir/depend


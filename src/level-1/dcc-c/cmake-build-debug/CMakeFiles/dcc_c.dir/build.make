# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "/Users/antonylaget/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/173.4301.33/CLion.app/Contents/bin/cmake/bin/cmake"

# The command to remove a file.
RM = "/Users/antonylaget/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/173.4301.33/CLion.app/Contents/bin/cmake/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/dcc-c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/dcc-c/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/dcc_c.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dcc_c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dcc_c.dir/flags.make

CMakeFiles/dcc_c.dir/main.c.o: CMakeFiles/dcc_c.dir/flags.make
CMakeFiles/dcc_c.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/dcc-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/dcc_c.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/dcc_c.dir/main.c.o   -c /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/dcc-c/main.c

CMakeFiles/dcc_c.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dcc_c.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/dcc-c/main.c > CMakeFiles/dcc_c.dir/main.c.i

CMakeFiles/dcc_c.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dcc_c.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/dcc-c/main.c -o CMakeFiles/dcc_c.dir/main.c.s

CMakeFiles/dcc_c.dir/main.c.o.requires:

.PHONY : CMakeFiles/dcc_c.dir/main.c.o.requires

CMakeFiles/dcc_c.dir/main.c.o.provides: CMakeFiles/dcc_c.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/dcc_c.dir/build.make CMakeFiles/dcc_c.dir/main.c.o.provides.build
.PHONY : CMakeFiles/dcc_c.dir/main.c.o.provides

CMakeFiles/dcc_c.dir/main.c.o.provides.build: CMakeFiles/dcc_c.dir/main.c.o


# Object files for target dcc_c
dcc_c_OBJECTS = \
"CMakeFiles/dcc_c.dir/main.c.o"

# External object files for target dcc_c
dcc_c_EXTERNAL_OBJECTS =

dcc_c: CMakeFiles/dcc_c.dir/main.c.o
dcc_c: CMakeFiles/dcc_c.dir/build.make
dcc_c: CMakeFiles/dcc_c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/dcc-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable dcc_c"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dcc_c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dcc_c.dir/build: dcc_c

.PHONY : CMakeFiles/dcc_c.dir/build

CMakeFiles/dcc_c.dir/requires: CMakeFiles/dcc_c.dir/main.c.o.requires

.PHONY : CMakeFiles/dcc_c.dir/requires

CMakeFiles/dcc_c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dcc_c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dcc_c.dir/clean

CMakeFiles/dcc_c.dir/depend:
	cd /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/dcc-c/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/dcc-c /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/dcc-c /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/dcc-c/cmake-build-debug /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/dcc-c/cmake-build-debug /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/dcc-c/cmake-build-debug/CMakeFiles/dcc_c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dcc_c.dir/depend


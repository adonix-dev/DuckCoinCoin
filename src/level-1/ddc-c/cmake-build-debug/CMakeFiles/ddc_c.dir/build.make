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
CMAKE_SOURCE_DIR = /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/ddc-c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/ddc-c/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ddc_c.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ddc_c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ddc_c.dir/flags.make

CMakeFiles/ddc_c.dir/c-lib/sha256/sha256.c.o: CMakeFiles/ddc_c.dir/flags.make
CMakeFiles/ddc_c.dir/c-lib/sha256/sha256.c.o: ../c-lib/sha256/sha256.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/ddc-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ddc_c.dir/c-lib/sha256/sha256.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ddc_c.dir/c-lib/sha256/sha256.c.o   -c /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/ddc-c/c-lib/sha256/sha256.c

CMakeFiles/ddc_c.dir/c-lib/sha256/sha256.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ddc_c.dir/c-lib/sha256/sha256.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/ddc-c/c-lib/sha256/sha256.c > CMakeFiles/ddc_c.dir/c-lib/sha256/sha256.c.i

CMakeFiles/ddc_c.dir/c-lib/sha256/sha256.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ddc_c.dir/c-lib/sha256/sha256.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/ddc-c/c-lib/sha256/sha256.c -o CMakeFiles/ddc_c.dir/c-lib/sha256/sha256.c.s

CMakeFiles/ddc_c.dir/c-lib/sha256/sha256.c.o.requires:

.PHONY : CMakeFiles/ddc_c.dir/c-lib/sha256/sha256.c.o.requires

CMakeFiles/ddc_c.dir/c-lib/sha256/sha256.c.o.provides: CMakeFiles/ddc_c.dir/c-lib/sha256/sha256.c.o.requires
	$(MAKE) -f CMakeFiles/ddc_c.dir/build.make CMakeFiles/ddc_c.dir/c-lib/sha256/sha256.c.o.provides.build
.PHONY : CMakeFiles/ddc_c.dir/c-lib/sha256/sha256.c.o.provides

CMakeFiles/ddc_c.dir/c-lib/sha256/sha256.c.o.provides.build: CMakeFiles/ddc_c.dir/c-lib/sha256/sha256.c.o


CMakeFiles/ddc_c.dir/c-lib/sha256/sha256_utils.c.o: CMakeFiles/ddc_c.dir/flags.make
CMakeFiles/ddc_c.dir/c-lib/sha256/sha256_utils.c.o: ../c-lib/sha256/sha256_utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/ddc-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/ddc_c.dir/c-lib/sha256/sha256_utils.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ddc_c.dir/c-lib/sha256/sha256_utils.c.o   -c /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/ddc-c/c-lib/sha256/sha256_utils.c

CMakeFiles/ddc_c.dir/c-lib/sha256/sha256_utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ddc_c.dir/c-lib/sha256/sha256_utils.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/ddc-c/c-lib/sha256/sha256_utils.c > CMakeFiles/ddc_c.dir/c-lib/sha256/sha256_utils.c.i

CMakeFiles/ddc_c.dir/c-lib/sha256/sha256_utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ddc_c.dir/c-lib/sha256/sha256_utils.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/ddc-c/c-lib/sha256/sha256_utils.c -o CMakeFiles/ddc_c.dir/c-lib/sha256/sha256_utils.c.s

CMakeFiles/ddc_c.dir/c-lib/sha256/sha256_utils.c.o.requires:

.PHONY : CMakeFiles/ddc_c.dir/c-lib/sha256/sha256_utils.c.o.requires

CMakeFiles/ddc_c.dir/c-lib/sha256/sha256_utils.c.o.provides: CMakeFiles/ddc_c.dir/c-lib/sha256/sha256_utils.c.o.requires
	$(MAKE) -f CMakeFiles/ddc_c.dir/build.make CMakeFiles/ddc_c.dir/c-lib/sha256/sha256_utils.c.o.provides.build
.PHONY : CMakeFiles/ddc_c.dir/c-lib/sha256/sha256_utils.c.o.provides

CMakeFiles/ddc_c.dir/c-lib/sha256/sha256_utils.c.o.provides.build: CMakeFiles/ddc_c.dir/c-lib/sha256/sha256_utils.c.o


CMakeFiles/ddc_c.dir/main.c.o: CMakeFiles/ddc_c.dir/flags.make
CMakeFiles/ddc_c.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/ddc-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/ddc_c.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ddc_c.dir/main.c.o   -c /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/ddc-c/main.c

CMakeFiles/ddc_c.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ddc_c.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/ddc-c/main.c > CMakeFiles/ddc_c.dir/main.c.i

CMakeFiles/ddc_c.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ddc_c.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/ddc-c/main.c -o CMakeFiles/ddc_c.dir/main.c.s

CMakeFiles/ddc_c.dir/main.c.o.requires:

.PHONY : CMakeFiles/ddc_c.dir/main.c.o.requires

CMakeFiles/ddc_c.dir/main.c.o.provides: CMakeFiles/ddc_c.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/ddc_c.dir/build.make CMakeFiles/ddc_c.dir/main.c.o.provides.build
.PHONY : CMakeFiles/ddc_c.dir/main.c.o.provides

CMakeFiles/ddc_c.dir/main.c.o.provides.build: CMakeFiles/ddc_c.dir/main.c.o


# Object files for target ddc_c
ddc_c_OBJECTS = \
"CMakeFiles/ddc_c.dir/c-lib/sha256/sha256.c.o" \
"CMakeFiles/ddc_c.dir/c-lib/sha256/sha256_utils.c.o" \
"CMakeFiles/ddc_c.dir/main.c.o"

# External object files for target ddc_c
ddc_c_EXTERNAL_OBJECTS =

ddc_c: CMakeFiles/ddc_c.dir/c-lib/sha256/sha256.c.o
ddc_c: CMakeFiles/ddc_c.dir/c-lib/sha256/sha256_utils.c.o
ddc_c: CMakeFiles/ddc_c.dir/main.c.o
ddc_c: CMakeFiles/ddc_c.dir/build.make
ddc_c: CMakeFiles/ddc_c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/ddc-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable ddc_c"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ddc_c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ddc_c.dir/build: ddc_c

.PHONY : CMakeFiles/ddc_c.dir/build

CMakeFiles/ddc_c.dir/requires: CMakeFiles/ddc_c.dir/c-lib/sha256/sha256.c.o.requires
CMakeFiles/ddc_c.dir/requires: CMakeFiles/ddc_c.dir/c-lib/sha256/sha256_utils.c.o.requires
CMakeFiles/ddc_c.dir/requires: CMakeFiles/ddc_c.dir/main.c.o.requires

.PHONY : CMakeFiles/ddc_c.dir/requires

CMakeFiles/ddc_c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ddc_c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ddc_c.dir/clean

CMakeFiles/ddc_c.dir/depend:
	cd /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/ddc-c/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/ddc-c /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/ddc-c /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/ddc-c/cmake-build-debug /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/ddc-c/cmake-build-debug /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/ddc-c/cmake-build-debug/CMakeFiles/ddc_c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ddc_c.dir/depend


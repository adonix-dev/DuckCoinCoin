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
CMAKE_SOURCE_DIR = /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c

# Include any dependencies generated for this target.
include CMakeFiles/1_dcc_c.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1_dcc_c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1_dcc_c.dir/flags.make

CMakeFiles/1_dcc_c.dir/main.c.o: CMakeFiles/1_dcc_c.dir/flags.make
CMakeFiles/1_dcc_c.dir/main.c.o: main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/1_dcc_c.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/1_dcc_c.dir/main.c.o   -c /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c/main.c

CMakeFiles/1_dcc_c.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/1_dcc_c.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c/main.c > CMakeFiles/1_dcc_c.dir/main.c.i

CMakeFiles/1_dcc_c.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/1_dcc_c.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c/main.c -o CMakeFiles/1_dcc_c.dir/main.c.s

CMakeFiles/1_dcc_c.dir/main.c.o.requires:

.PHONY : CMakeFiles/1_dcc_c.dir/main.c.o.requires

CMakeFiles/1_dcc_c.dir/main.c.o.provides: CMakeFiles/1_dcc_c.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/1_dcc_c.dir/build.make CMakeFiles/1_dcc_c.dir/main.c.o.provides.build
.PHONY : CMakeFiles/1_dcc_c.dir/main.c.o.provides

CMakeFiles/1_dcc_c.dir/main.c.o.provides.build: CMakeFiles/1_dcc_c.dir/main.c.o


CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256.c.o: CMakeFiles/1_dcc_c.dir/flags.make
CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256.c.o: c-lib/sha256/sha256.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256.c.o   -c /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c/c-lib/sha256/sha256.c

CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c/c-lib/sha256/sha256.c > CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256.c.i

CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c/c-lib/sha256/sha256.c -o CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256.c.s

CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256.c.o.requires:

.PHONY : CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256.c.o.requires

CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256.c.o.provides: CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256.c.o.requires
	$(MAKE) -f CMakeFiles/1_dcc_c.dir/build.make CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256.c.o.provides.build
.PHONY : CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256.c.o.provides

CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256.c.o.provides.build: CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256.c.o


CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256_utils.c.o: CMakeFiles/1_dcc_c.dir/flags.make
CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256_utils.c.o: c-lib/sha256/sha256_utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256_utils.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256_utils.c.o   -c /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c/c-lib/sha256/sha256_utils.c

CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256_utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256_utils.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c/c-lib/sha256/sha256_utils.c > CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256_utils.c.i

CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256_utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256_utils.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c/c-lib/sha256/sha256_utils.c -o CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256_utils.c.s

CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256_utils.c.o.requires:

.PHONY : CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256_utils.c.o.requires

CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256_utils.c.o.provides: CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256_utils.c.o.requires
	$(MAKE) -f CMakeFiles/1_dcc_c.dir/build.make CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256_utils.c.o.provides.build
.PHONY : CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256_utils.c.o.provides

CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256_utils.c.o.provides.build: CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256_utils.c.o


CMakeFiles/1_dcc_c.dir/database/Blockchain.c.o: CMakeFiles/1_dcc_c.dir/flags.make
CMakeFiles/1_dcc_c.dir/database/Blockchain.c.o: database/Blockchain.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/1_dcc_c.dir/database/Blockchain.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/1_dcc_c.dir/database/Blockchain.c.o   -c /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c/database/Blockchain.c

CMakeFiles/1_dcc_c.dir/database/Blockchain.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/1_dcc_c.dir/database/Blockchain.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c/database/Blockchain.c > CMakeFiles/1_dcc_c.dir/database/Blockchain.c.i

CMakeFiles/1_dcc_c.dir/database/Blockchain.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/1_dcc_c.dir/database/Blockchain.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c/database/Blockchain.c -o CMakeFiles/1_dcc_c.dir/database/Blockchain.c.s

CMakeFiles/1_dcc_c.dir/database/Blockchain.c.o.requires:

.PHONY : CMakeFiles/1_dcc_c.dir/database/Blockchain.c.o.requires

CMakeFiles/1_dcc_c.dir/database/Blockchain.c.o.provides: CMakeFiles/1_dcc_c.dir/database/Blockchain.c.o.requires
	$(MAKE) -f CMakeFiles/1_dcc_c.dir/build.make CMakeFiles/1_dcc_c.dir/database/Blockchain.c.o.provides.build
.PHONY : CMakeFiles/1_dcc_c.dir/database/Blockchain.c.o.provides

CMakeFiles/1_dcc_c.dir/database/Blockchain.c.o.provides.build: CMakeFiles/1_dcc_c.dir/database/Blockchain.c.o


# Object files for target 1_dcc_c
1_dcc_c_OBJECTS = \
"CMakeFiles/1_dcc_c.dir/main.c.o" \
"CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256.c.o" \
"CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256_utils.c.o" \
"CMakeFiles/1_dcc_c.dir/database/Blockchain.c.o"

# External object files for target 1_dcc_c
1_dcc_c_EXTERNAL_OBJECTS =

1_dcc_c: CMakeFiles/1_dcc_c.dir/main.c.o
1_dcc_c: CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256.c.o
1_dcc_c: CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256_utils.c.o
1_dcc_c: CMakeFiles/1_dcc_c.dir/database/Blockchain.c.o
1_dcc_c: CMakeFiles/1_dcc_c.dir/build.make
1_dcc_c: CMakeFiles/1_dcc_c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable 1_dcc_c"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/1_dcc_c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1_dcc_c.dir/build: 1_dcc_c

.PHONY : CMakeFiles/1_dcc_c.dir/build

CMakeFiles/1_dcc_c.dir/requires: CMakeFiles/1_dcc_c.dir/main.c.o.requires
CMakeFiles/1_dcc_c.dir/requires: CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256.c.o.requires
CMakeFiles/1_dcc_c.dir/requires: CMakeFiles/1_dcc_c.dir/c-lib/sha256/sha256_utils.c.o.requires
CMakeFiles/1_dcc_c.dir/requires: CMakeFiles/1_dcc_c.dir/database/Blockchain.c.o.requires

.PHONY : CMakeFiles/1_dcc_c.dir/requires

CMakeFiles/1_dcc_c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/1_dcc_c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/1_dcc_c.dir/clean

CMakeFiles/1_dcc_c.dir/depend:
	cd /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c /Users/antonylaget/Documents/GitHub/DuckCoinCoin/src/level-1/1-dcc-c/CMakeFiles/1_dcc_c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1_dcc_c.dir/depend


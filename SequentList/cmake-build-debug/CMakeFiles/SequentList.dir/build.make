# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Volumes/BLAINPENG/DataStructure/SequentList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Volumes/BLAINPENG/DataStructure/SequentList/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SequentList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SequentList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SequentList.dir/flags.make

CMakeFiles/SequentList.dir/main.c.o: CMakeFiles/SequentList.dir/flags.make
CMakeFiles/SequentList.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Volumes/BLAINPENG/DataStructure/SequentList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/SequentList.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/SequentList.dir/main.c.o   -c /Volumes/BLAINPENG/DataStructure/SequentList/main.c

CMakeFiles/SequentList.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SequentList.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Volumes/BLAINPENG/DataStructure/SequentList/main.c > CMakeFiles/SequentList.dir/main.c.i

CMakeFiles/SequentList.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SequentList.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Volumes/BLAINPENG/DataStructure/SequentList/main.c -o CMakeFiles/SequentList.dir/main.c.s

CMakeFiles/SequentList.dir/main.c.o.requires:

.PHONY : CMakeFiles/SequentList.dir/main.c.o.requires

CMakeFiles/SequentList.dir/main.c.o.provides: CMakeFiles/SequentList.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/SequentList.dir/build.make CMakeFiles/SequentList.dir/main.c.o.provides.build
.PHONY : CMakeFiles/SequentList.dir/main.c.o.provides

CMakeFiles/SequentList.dir/main.c.o.provides.build: CMakeFiles/SequentList.dir/main.c.o


CMakeFiles/SequentList.dir/sequentList.c.o: CMakeFiles/SequentList.dir/flags.make
CMakeFiles/SequentList.dir/sequentList.c.o: ../sequentList.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Volumes/BLAINPENG/DataStructure/SequentList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/SequentList.dir/sequentList.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/SequentList.dir/sequentList.c.o   -c /Volumes/BLAINPENG/DataStructure/SequentList/sequentList.c

CMakeFiles/SequentList.dir/sequentList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SequentList.dir/sequentList.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Volumes/BLAINPENG/DataStructure/SequentList/sequentList.c > CMakeFiles/SequentList.dir/sequentList.c.i

CMakeFiles/SequentList.dir/sequentList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SequentList.dir/sequentList.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Volumes/BLAINPENG/DataStructure/SequentList/sequentList.c -o CMakeFiles/SequentList.dir/sequentList.c.s

CMakeFiles/SequentList.dir/sequentList.c.o.requires:

.PHONY : CMakeFiles/SequentList.dir/sequentList.c.o.requires

CMakeFiles/SequentList.dir/sequentList.c.o.provides: CMakeFiles/SequentList.dir/sequentList.c.o.requires
	$(MAKE) -f CMakeFiles/SequentList.dir/build.make CMakeFiles/SequentList.dir/sequentList.c.o.provides.build
.PHONY : CMakeFiles/SequentList.dir/sequentList.c.o.provides

CMakeFiles/SequentList.dir/sequentList.c.o.provides.build: CMakeFiles/SequentList.dir/sequentList.c.o


# Object files for target SequentList
SequentList_OBJECTS = \
"CMakeFiles/SequentList.dir/main.c.o" \
"CMakeFiles/SequentList.dir/sequentList.c.o"

# External object files for target SequentList
SequentList_EXTERNAL_OBJECTS =

SequentList: CMakeFiles/SequentList.dir/main.c.o
SequentList: CMakeFiles/SequentList.dir/sequentList.c.o
SequentList: CMakeFiles/SequentList.dir/build.make
SequentList: CMakeFiles/SequentList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Volumes/BLAINPENG/DataStructure/SequentList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable SequentList"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SequentList.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SequentList.dir/build: SequentList

.PHONY : CMakeFiles/SequentList.dir/build

CMakeFiles/SequentList.dir/requires: CMakeFiles/SequentList.dir/main.c.o.requires
CMakeFiles/SequentList.dir/requires: CMakeFiles/SequentList.dir/sequentList.c.o.requires

.PHONY : CMakeFiles/SequentList.dir/requires

CMakeFiles/SequentList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SequentList.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SequentList.dir/clean

CMakeFiles/SequentList.dir/depend:
	cd /Volumes/BLAINPENG/DataStructure/SequentList/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Volumes/BLAINPENG/DataStructure/SequentList /Volumes/BLAINPENG/DataStructure/SequentList /Volumes/BLAINPENG/DataStructure/SequentList/cmake-build-debug /Volumes/BLAINPENG/DataStructure/SequentList/cmake-build-debug /Volumes/BLAINPENG/DataStructure/SequentList/cmake-build-debug/CMakeFiles/SequentList.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SequentList.dir/depend


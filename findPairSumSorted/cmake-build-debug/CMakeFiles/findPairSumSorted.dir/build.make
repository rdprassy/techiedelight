# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /snap/clion/100/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/100/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rdprassy/CLionProjects/findPairSumSorted

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rdprassy/CLionProjects/findPairSumSorted/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/findPairSumSorted.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/findPairSumSorted.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/findPairSumSorted.dir/flags.make

CMakeFiles/findPairSumSorted.dir/main.cpp.o: CMakeFiles/findPairSumSorted.dir/flags.make
CMakeFiles/findPairSumSorted.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rdprassy/CLionProjects/findPairSumSorted/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/findPairSumSorted.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/findPairSumSorted.dir/main.cpp.o -c /home/rdprassy/CLionProjects/findPairSumSorted/main.cpp

CMakeFiles/findPairSumSorted.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/findPairSumSorted.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rdprassy/CLionProjects/findPairSumSorted/main.cpp > CMakeFiles/findPairSumSorted.dir/main.cpp.i

CMakeFiles/findPairSumSorted.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/findPairSumSorted.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rdprassy/CLionProjects/findPairSumSorted/main.cpp -o CMakeFiles/findPairSumSorted.dir/main.cpp.s

# Object files for target findPairSumSorted
findPairSumSorted_OBJECTS = \
"CMakeFiles/findPairSumSorted.dir/main.cpp.o"

# External object files for target findPairSumSorted
findPairSumSorted_EXTERNAL_OBJECTS =

findPairSumSorted: CMakeFiles/findPairSumSorted.dir/main.cpp.o
findPairSumSorted: CMakeFiles/findPairSumSorted.dir/build.make
findPairSumSorted: CMakeFiles/findPairSumSorted.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rdprassy/CLionProjects/findPairSumSorted/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable findPairSumSorted"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/findPairSumSorted.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/findPairSumSorted.dir/build: findPairSumSorted

.PHONY : CMakeFiles/findPairSumSorted.dir/build

CMakeFiles/findPairSumSorted.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/findPairSumSorted.dir/cmake_clean.cmake
.PHONY : CMakeFiles/findPairSumSorted.dir/clean

CMakeFiles/findPairSumSorted.dir/depend:
	cd /home/rdprassy/CLionProjects/findPairSumSorted/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rdprassy/CLionProjects/findPairSumSorted /home/rdprassy/CLionProjects/findPairSumSorted /home/rdprassy/CLionProjects/findPairSumSorted/cmake-build-debug /home/rdprassy/CLionProjects/findPairSumSorted/cmake-build-debug /home/rdprassy/CLionProjects/findPairSumSorted/cmake-build-debug/CMakeFiles/findPairSumSorted.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/findPairSumSorted.dir/depend

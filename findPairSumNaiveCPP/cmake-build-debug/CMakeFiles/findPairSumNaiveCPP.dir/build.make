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
CMAKE_SOURCE_DIR = /home/rdprassy/CLionProjects/findPairSumNaiveCPP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rdprassy/CLionProjects/findPairSumNaiveCPP/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/findPairSumNaiveCPP.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/findPairSumNaiveCPP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/findPairSumNaiveCPP.dir/flags.make

CMakeFiles/findPairSumNaiveCPP.dir/main.cpp.o: CMakeFiles/findPairSumNaiveCPP.dir/flags.make
CMakeFiles/findPairSumNaiveCPP.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rdprassy/CLionProjects/findPairSumNaiveCPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/findPairSumNaiveCPP.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/findPairSumNaiveCPP.dir/main.cpp.o -c /home/rdprassy/CLionProjects/findPairSumNaiveCPP/main.cpp

CMakeFiles/findPairSumNaiveCPP.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/findPairSumNaiveCPP.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rdprassy/CLionProjects/findPairSumNaiveCPP/main.cpp > CMakeFiles/findPairSumNaiveCPP.dir/main.cpp.i

CMakeFiles/findPairSumNaiveCPP.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/findPairSumNaiveCPP.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rdprassy/CLionProjects/findPairSumNaiveCPP/main.cpp -o CMakeFiles/findPairSumNaiveCPP.dir/main.cpp.s

# Object files for target findPairSumNaiveCPP
findPairSumNaiveCPP_OBJECTS = \
"CMakeFiles/findPairSumNaiveCPP.dir/main.cpp.o"

# External object files for target findPairSumNaiveCPP
findPairSumNaiveCPP_EXTERNAL_OBJECTS =

findPairSumNaiveCPP: CMakeFiles/findPairSumNaiveCPP.dir/main.cpp.o
findPairSumNaiveCPP: CMakeFiles/findPairSumNaiveCPP.dir/build.make
findPairSumNaiveCPP: CMakeFiles/findPairSumNaiveCPP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rdprassy/CLionProjects/findPairSumNaiveCPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable findPairSumNaiveCPP"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/findPairSumNaiveCPP.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/findPairSumNaiveCPP.dir/build: findPairSumNaiveCPP

.PHONY : CMakeFiles/findPairSumNaiveCPP.dir/build

CMakeFiles/findPairSumNaiveCPP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/findPairSumNaiveCPP.dir/cmake_clean.cmake
.PHONY : CMakeFiles/findPairSumNaiveCPP.dir/clean

CMakeFiles/findPairSumNaiveCPP.dir/depend:
	cd /home/rdprassy/CLionProjects/findPairSumNaiveCPP/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rdprassy/CLionProjects/findPairSumNaiveCPP /home/rdprassy/CLionProjects/findPairSumNaiveCPP /home/rdprassy/CLionProjects/findPairSumNaiveCPP/cmake-build-debug /home/rdprassy/CLionProjects/findPairSumNaiveCPP/cmake-build-debug /home/rdprassy/CLionProjects/findPairSumNaiveCPP/cmake-build-debug/CMakeFiles/findPairSumNaiveCPP.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/findPairSumNaiveCPP.dir/depend


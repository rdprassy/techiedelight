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
CMAKE_SOURCE_DIR = /home/rdprassy/techiedelight/maxLengthSubArrayGivenSum

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rdprassy/techiedelight/maxLengthSubArrayGivenSum/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/maxLengthSubArrayGivenSum.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/maxLengthSubArrayGivenSum.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/maxLengthSubArrayGivenSum.dir/flags.make

CMakeFiles/maxLengthSubArrayGivenSum.dir/main.cpp.o: CMakeFiles/maxLengthSubArrayGivenSum.dir/flags.make
CMakeFiles/maxLengthSubArrayGivenSum.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rdprassy/techiedelight/maxLengthSubArrayGivenSum/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/maxLengthSubArrayGivenSum.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/maxLengthSubArrayGivenSum.dir/main.cpp.o -c /home/rdprassy/techiedelight/maxLengthSubArrayGivenSum/main.cpp

CMakeFiles/maxLengthSubArrayGivenSum.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/maxLengthSubArrayGivenSum.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rdprassy/techiedelight/maxLengthSubArrayGivenSum/main.cpp > CMakeFiles/maxLengthSubArrayGivenSum.dir/main.cpp.i

CMakeFiles/maxLengthSubArrayGivenSum.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/maxLengthSubArrayGivenSum.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rdprassy/techiedelight/maxLengthSubArrayGivenSum/main.cpp -o CMakeFiles/maxLengthSubArrayGivenSum.dir/main.cpp.s

# Object files for target maxLengthSubArrayGivenSum
maxLengthSubArrayGivenSum_OBJECTS = \
"CMakeFiles/maxLengthSubArrayGivenSum.dir/main.cpp.o"

# External object files for target maxLengthSubArrayGivenSum
maxLengthSubArrayGivenSum_EXTERNAL_OBJECTS =

maxLengthSubArrayGivenSum: CMakeFiles/maxLengthSubArrayGivenSum.dir/main.cpp.o
maxLengthSubArrayGivenSum: CMakeFiles/maxLengthSubArrayGivenSum.dir/build.make
maxLengthSubArrayGivenSum: CMakeFiles/maxLengthSubArrayGivenSum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rdprassy/techiedelight/maxLengthSubArrayGivenSum/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable maxLengthSubArrayGivenSum"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/maxLengthSubArrayGivenSum.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/maxLengthSubArrayGivenSum.dir/build: maxLengthSubArrayGivenSum

.PHONY : CMakeFiles/maxLengthSubArrayGivenSum.dir/build

CMakeFiles/maxLengthSubArrayGivenSum.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/maxLengthSubArrayGivenSum.dir/cmake_clean.cmake
.PHONY : CMakeFiles/maxLengthSubArrayGivenSum.dir/clean

CMakeFiles/maxLengthSubArrayGivenSum.dir/depend:
	cd /home/rdprassy/techiedelight/maxLengthSubArrayGivenSum/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rdprassy/techiedelight/maxLengthSubArrayGivenSum /home/rdprassy/techiedelight/maxLengthSubArrayGivenSum /home/rdprassy/techiedelight/maxLengthSubArrayGivenSum/cmake-build-debug /home/rdprassy/techiedelight/maxLengthSubArrayGivenSum/cmake-build-debug /home/rdprassy/techiedelight/maxLengthSubArrayGivenSum/cmake-build-debug/CMakeFiles/maxLengthSubArrayGivenSum.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/maxLengthSubArrayGivenSum.dir/depend


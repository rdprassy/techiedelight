# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /snap/clion/111/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/111/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rdprassy/techiedelight/permutationsStrings

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rdprassy/techiedelight/permutationsStrings/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/permutationsStrings.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/permutationsStrings.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/permutationsStrings.dir/flags.make

CMakeFiles/permutationsStrings.dir/main.cpp.o: CMakeFiles/permutationsStrings.dir/flags.make
CMakeFiles/permutationsStrings.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rdprassy/techiedelight/permutationsStrings/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/permutationsStrings.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/permutationsStrings.dir/main.cpp.o -c /home/rdprassy/techiedelight/permutationsStrings/main.cpp

CMakeFiles/permutationsStrings.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/permutationsStrings.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rdprassy/techiedelight/permutationsStrings/main.cpp > CMakeFiles/permutationsStrings.dir/main.cpp.i

CMakeFiles/permutationsStrings.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/permutationsStrings.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rdprassy/techiedelight/permutationsStrings/main.cpp -o CMakeFiles/permutationsStrings.dir/main.cpp.s

# Object files for target permutationsStrings
permutationsStrings_OBJECTS = \
"CMakeFiles/permutationsStrings.dir/main.cpp.o"

# External object files for target permutationsStrings
permutationsStrings_EXTERNAL_OBJECTS =

permutationsStrings: CMakeFiles/permutationsStrings.dir/main.cpp.o
permutationsStrings: CMakeFiles/permutationsStrings.dir/build.make
permutationsStrings: CMakeFiles/permutationsStrings.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rdprassy/techiedelight/permutationsStrings/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable permutationsStrings"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/permutationsStrings.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/permutationsStrings.dir/build: permutationsStrings

.PHONY : CMakeFiles/permutationsStrings.dir/build

CMakeFiles/permutationsStrings.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/permutationsStrings.dir/cmake_clean.cmake
.PHONY : CMakeFiles/permutationsStrings.dir/clean

CMakeFiles/permutationsStrings.dir/depend:
	cd /home/rdprassy/techiedelight/permutationsStrings/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rdprassy/techiedelight/permutationsStrings /home/rdprassy/techiedelight/permutationsStrings /home/rdprassy/techiedelight/permutationsStrings/cmake-build-debug /home/rdprassy/techiedelight/permutationsStrings/cmake-build-debug /home/rdprassy/techiedelight/permutationsStrings/cmake-build-debug/CMakeFiles/permutationsStrings.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/permutationsStrings.dir/depend

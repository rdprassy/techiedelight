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
CMAKE_SOURCE_DIR = /home/rdprassy/techiedelight/bithack2.cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rdprassy/techiedelight/bithack2.cpp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/bithack2_cpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bithack2_cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bithack2_cpp.dir/flags.make

CMakeFiles/bithack2_cpp.dir/main.cpp.o: CMakeFiles/bithack2_cpp.dir/flags.make
CMakeFiles/bithack2_cpp.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rdprassy/techiedelight/bithack2.cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bithack2_cpp.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bithack2_cpp.dir/main.cpp.o -c /home/rdprassy/techiedelight/bithack2.cpp/main.cpp

CMakeFiles/bithack2_cpp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bithack2_cpp.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rdprassy/techiedelight/bithack2.cpp/main.cpp > CMakeFiles/bithack2_cpp.dir/main.cpp.i

CMakeFiles/bithack2_cpp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bithack2_cpp.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rdprassy/techiedelight/bithack2.cpp/main.cpp -o CMakeFiles/bithack2_cpp.dir/main.cpp.s

# Object files for target bithack2_cpp
bithack2_cpp_OBJECTS = \
"CMakeFiles/bithack2_cpp.dir/main.cpp.o"

# External object files for target bithack2_cpp
bithack2_cpp_EXTERNAL_OBJECTS =

bithack2_cpp: CMakeFiles/bithack2_cpp.dir/main.cpp.o
bithack2_cpp: CMakeFiles/bithack2_cpp.dir/build.make
bithack2_cpp: CMakeFiles/bithack2_cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rdprassy/techiedelight/bithack2.cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bithack2_cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bithack2_cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bithack2_cpp.dir/build: bithack2_cpp

.PHONY : CMakeFiles/bithack2_cpp.dir/build

CMakeFiles/bithack2_cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bithack2_cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bithack2_cpp.dir/clean

CMakeFiles/bithack2_cpp.dir/depend:
	cd /home/rdprassy/techiedelight/bithack2.cpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rdprassy/techiedelight/bithack2.cpp /home/rdprassy/techiedelight/bithack2.cpp /home/rdprassy/techiedelight/bithack2.cpp/cmake-build-debug /home/rdprassy/techiedelight/bithack2.cpp/cmake-build-debug /home/rdprassy/techiedelight/bithack2.cpp/cmake-build-debug/CMakeFiles/bithack2_cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bithack2_cpp.dir/depend


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
CMAKE_COMMAND = /snap/clion/112/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/112/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rdprassy/techiedelight/postordercpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rdprassy/techiedelight/postordercpp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/postordercpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/postordercpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/postordercpp.dir/flags.make

CMakeFiles/postordercpp.dir/main.cpp.o: CMakeFiles/postordercpp.dir/flags.make
CMakeFiles/postordercpp.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rdprassy/techiedelight/postordercpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/postordercpp.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/postordercpp.dir/main.cpp.o -c /home/rdprassy/techiedelight/postordercpp/main.cpp

CMakeFiles/postordercpp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/postordercpp.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rdprassy/techiedelight/postordercpp/main.cpp > CMakeFiles/postordercpp.dir/main.cpp.i

CMakeFiles/postordercpp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/postordercpp.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rdprassy/techiedelight/postordercpp/main.cpp -o CMakeFiles/postordercpp.dir/main.cpp.s

# Object files for target postordercpp
postordercpp_OBJECTS = \
"CMakeFiles/postordercpp.dir/main.cpp.o"

# External object files for target postordercpp
postordercpp_EXTERNAL_OBJECTS =

postordercpp: CMakeFiles/postordercpp.dir/main.cpp.o
postordercpp: CMakeFiles/postordercpp.dir/build.make
postordercpp: CMakeFiles/postordercpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rdprassy/techiedelight/postordercpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable postordercpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/postordercpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/postordercpp.dir/build: postordercpp

.PHONY : CMakeFiles/postordercpp.dir/build

CMakeFiles/postordercpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/postordercpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/postordercpp.dir/clean

CMakeFiles/postordercpp.dir/depend:
	cd /home/rdprassy/techiedelight/postordercpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rdprassy/techiedelight/postordercpp /home/rdprassy/techiedelight/postordercpp /home/rdprassy/techiedelight/postordercpp/cmake-build-debug /home/rdprassy/techiedelight/postordercpp/cmake-build-debug /home/rdprassy/techiedelight/postordercpp/cmake-build-debug/CMakeFiles/postordercpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/postordercpp.dir/depend


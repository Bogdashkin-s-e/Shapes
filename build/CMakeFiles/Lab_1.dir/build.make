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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/sergey/Desktop/LABAR 4/lab 5 geometr"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/sergey/Desktop/LABAR 4/lab 5 geometr/build"

# Include any dependencies generated for this target.
include CMakeFiles/Lab_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab_1.dir/flags.make

CMakeFiles/Lab_1.dir/src/main.cpp.o: CMakeFiles/Lab_1.dir/flags.make
CMakeFiles/Lab_1.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/sergey/Desktop/LABAR 4/lab 5 geometr/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab_1.dir/src/main.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab_1.dir/src/main.cpp.o -c "/home/sergey/Desktop/LABAR 4/lab 5 geometr/src/main.cpp"

CMakeFiles/Lab_1.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab_1.dir/src/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/sergey/Desktop/LABAR 4/lab 5 geometr/src/main.cpp" > CMakeFiles/Lab_1.dir/src/main.cpp.i

CMakeFiles/Lab_1.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab_1.dir/src/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/sergey/Desktop/LABAR 4/lab 5 geometr/src/main.cpp" -o CMakeFiles/Lab_1.dir/src/main.cpp.s

# Object files for target Lab_1
Lab_1_OBJECTS = \
"CMakeFiles/Lab_1.dir/src/main.cpp.o"

# External object files for target Lab_1
Lab_1_EXTERNAL_OBJECTS =

Lab_1: CMakeFiles/Lab_1.dir/src/main.cpp.o
Lab_1: CMakeFiles/Lab_1.dir/build.make
Lab_1: CMakeFiles/Lab_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/sergey/Desktop/LABAR 4/lab 5 geometr/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lab_1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab_1.dir/build: Lab_1

.PHONY : CMakeFiles/Lab_1.dir/build

CMakeFiles/Lab_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab_1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab_1.dir/clean

CMakeFiles/Lab_1.dir/depend:
	cd "/home/sergey/Desktop/LABAR 4/lab 5 geometr/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/sergey/Desktop/LABAR 4/lab 5 geometr" "/home/sergey/Desktop/LABAR 4/lab 5 geometr" "/home/sergey/Desktop/LABAR 4/lab 5 geometr/build" "/home/sergey/Desktop/LABAR 4/lab 5 geometr/build" "/home/sergey/Desktop/LABAR 4/lab 5 geometr/build/CMakeFiles/Lab_1.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Lab_1.dir/depend


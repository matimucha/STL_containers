# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/muszak/STL_containers/exercise_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/muszak/STL_containers/exercise_1

# Include any dependencies generated for this target.
include CMakeFiles/exercise_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/exercise_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exercise_1.dir/flags.make

CMakeFiles/exercise_1.dir/main.cpp.o: CMakeFiles/exercise_1.dir/flags.make
CMakeFiles/exercise_1.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/muszak/STL_containers/exercise_1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/exercise_1.dir/main.cpp.o"
	/usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exercise_1.dir/main.cpp.o -c /home/muszak/STL_containers/exercise_1/main.cpp

CMakeFiles/exercise_1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exercise_1.dir/main.cpp.i"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/muszak/STL_containers/exercise_1/main.cpp > CMakeFiles/exercise_1.dir/main.cpp.i

CMakeFiles/exercise_1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exercise_1.dir/main.cpp.s"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/muszak/STL_containers/exercise_1/main.cpp -o CMakeFiles/exercise_1.dir/main.cpp.s

CMakeFiles/exercise_1.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/exercise_1.dir/main.cpp.o.requires

CMakeFiles/exercise_1.dir/main.cpp.o.provides: CMakeFiles/exercise_1.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/exercise_1.dir/build.make CMakeFiles/exercise_1.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/exercise_1.dir/main.cpp.o.provides

CMakeFiles/exercise_1.dir/main.cpp.o.provides.build: CMakeFiles/exercise_1.dir/main.cpp.o


# Object files for target exercise_1
exercise_1_OBJECTS = \
"CMakeFiles/exercise_1.dir/main.cpp.o"

# External object files for target exercise_1
exercise_1_EXTERNAL_OBJECTS =

exercise_1: CMakeFiles/exercise_1.dir/main.cpp.o
exercise_1: CMakeFiles/exercise_1.dir/build.make
exercise_1: CMakeFiles/exercise_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/muszak/STL_containers/exercise_1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable exercise_1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exercise_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exercise_1.dir/build: exercise_1

.PHONY : CMakeFiles/exercise_1.dir/build

CMakeFiles/exercise_1.dir/requires: CMakeFiles/exercise_1.dir/main.cpp.o.requires

.PHONY : CMakeFiles/exercise_1.dir/requires

CMakeFiles/exercise_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/exercise_1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/exercise_1.dir/clean

CMakeFiles/exercise_1.dir/depend:
	cd /home/muszak/STL_containers/exercise_1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/muszak/STL_containers/exercise_1 /home/muszak/STL_containers/exercise_1 /home/muszak/STL_containers/exercise_1 /home/muszak/STL_containers/exercise_1 /home/muszak/STL_containers/exercise_1/CMakeFiles/exercise_1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exercise_1.dir/depend


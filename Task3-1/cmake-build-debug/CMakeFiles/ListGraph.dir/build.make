# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /snap/clion/137/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/137/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lerakrya/algorithm/Task3-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lerakrya/algorithm/Task3-1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ListGraph.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ListGraph.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ListGraph.dir/flags.make

CMakeFiles/ListGraph.dir/ListGraph.cpp.o: CMakeFiles/ListGraph.dir/flags.make
CMakeFiles/ListGraph.dir/ListGraph.cpp.o: ../ListGraph.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lerakrya/algorithm/Task3-1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ListGraph.dir/ListGraph.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ListGraph.dir/ListGraph.cpp.o -c /home/lerakrya/algorithm/Task3-1/ListGraph.cpp

CMakeFiles/ListGraph.dir/ListGraph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ListGraph.dir/ListGraph.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lerakrya/algorithm/Task3-1/ListGraph.cpp > CMakeFiles/ListGraph.dir/ListGraph.cpp.i

CMakeFiles/ListGraph.dir/ListGraph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ListGraph.dir/ListGraph.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lerakrya/algorithm/Task3-1/ListGraph.cpp -o CMakeFiles/ListGraph.dir/ListGraph.cpp.s

# Object files for target ListGraph
ListGraph_OBJECTS = \
"CMakeFiles/ListGraph.dir/ListGraph.cpp.o"

# External object files for target ListGraph
ListGraph_EXTERNAL_OBJECTS =

ListGraph: CMakeFiles/ListGraph.dir/ListGraph.cpp.o
ListGraph: CMakeFiles/ListGraph.dir/build.make
ListGraph: CMakeFiles/ListGraph.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lerakrya/algorithm/Task3-1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ListGraph"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ListGraph.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ListGraph.dir/build: ListGraph

.PHONY : CMakeFiles/ListGraph.dir/build

CMakeFiles/ListGraph.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ListGraph.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ListGraph.dir/clean

CMakeFiles/ListGraph.dir/depend:
	cd /home/lerakrya/algorithm/Task3-1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lerakrya/algorithm/Task3-1 /home/lerakrya/algorithm/Task3-1 /home/lerakrya/algorithm/Task3-1/cmake-build-debug /home/lerakrya/algorithm/Task3-1/cmake-build-debug /home/lerakrya/algorithm/Task3-1/cmake-build-debug/CMakeFiles/ListGraph.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ListGraph.dir/depend


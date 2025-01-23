# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/y/Project/unitree_Go2/Go2_deploy/rl_sar/src/rl_sar

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/y/Project/unitree_Go2/Go2_deploy/build/rl_sar

# Include any dependencies generated for this target.
include CMakeFiles/observation_buffer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/observation_buffer.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/observation_buffer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/observation_buffer.dir/flags.make

CMakeFiles/observation_buffer.dir/library/observation_buffer/observation_buffer.cpp.o: CMakeFiles/observation_buffer.dir/flags.make
CMakeFiles/observation_buffer.dir/library/observation_buffer/observation_buffer.cpp.o: /home/y/Project/unitree_Go2/Go2_deploy/rl_sar/src/rl_sar/library/observation_buffer/observation_buffer.cpp
CMakeFiles/observation_buffer.dir/library/observation_buffer/observation_buffer.cpp.o: CMakeFiles/observation_buffer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/y/Project/unitree_Go2/Go2_deploy/build/rl_sar/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/observation_buffer.dir/library/observation_buffer/observation_buffer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/observation_buffer.dir/library/observation_buffer/observation_buffer.cpp.o -MF CMakeFiles/observation_buffer.dir/library/observation_buffer/observation_buffer.cpp.o.d -o CMakeFiles/observation_buffer.dir/library/observation_buffer/observation_buffer.cpp.o -c /home/y/Project/unitree_Go2/Go2_deploy/rl_sar/src/rl_sar/library/observation_buffer/observation_buffer.cpp

CMakeFiles/observation_buffer.dir/library/observation_buffer/observation_buffer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/observation_buffer.dir/library/observation_buffer/observation_buffer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/y/Project/unitree_Go2/Go2_deploy/rl_sar/src/rl_sar/library/observation_buffer/observation_buffer.cpp > CMakeFiles/observation_buffer.dir/library/observation_buffer/observation_buffer.cpp.i

CMakeFiles/observation_buffer.dir/library/observation_buffer/observation_buffer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/observation_buffer.dir/library/observation_buffer/observation_buffer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/y/Project/unitree_Go2/Go2_deploy/rl_sar/src/rl_sar/library/observation_buffer/observation_buffer.cpp -o CMakeFiles/observation_buffer.dir/library/observation_buffer/observation_buffer.cpp.s

# Object files for target observation_buffer
observation_buffer_OBJECTS = \
"CMakeFiles/observation_buffer.dir/library/observation_buffer/observation_buffer.cpp.o"

# External object files for target observation_buffer
observation_buffer_EXTERNAL_OBJECTS =

libobservation_buffer.a: CMakeFiles/observation_buffer.dir/library/observation_buffer/observation_buffer.cpp.o
libobservation_buffer.a: CMakeFiles/observation_buffer.dir/build.make
libobservation_buffer.a: CMakeFiles/observation_buffer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/y/Project/unitree_Go2/Go2_deploy/build/rl_sar/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libobservation_buffer.a"
	$(CMAKE_COMMAND) -P CMakeFiles/observation_buffer.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/observation_buffer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/observation_buffer.dir/build: libobservation_buffer.a
.PHONY : CMakeFiles/observation_buffer.dir/build

CMakeFiles/observation_buffer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/observation_buffer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/observation_buffer.dir/clean

CMakeFiles/observation_buffer.dir/depend:
	cd /home/y/Project/unitree_Go2/Go2_deploy/build/rl_sar && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/y/Project/unitree_Go2/Go2_deploy/rl_sar/src/rl_sar /home/y/Project/unitree_Go2/Go2_deploy/rl_sar/src/rl_sar /home/y/Project/unitree_Go2/Go2_deploy/build/rl_sar /home/y/Project/unitree_Go2/Go2_deploy/build/rl_sar /home/y/Project/unitree_Go2/Go2_deploy/build/rl_sar/CMakeFiles/observation_buffer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/observation_buffer.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Dai\c2020\level1\p09_maze

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Dai\c2020\level1\p09_maze\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/p09_maze.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/p09_maze.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/p09_maze.dir/flags.make

CMakeFiles/p09_maze.dir/main.c.obj: CMakeFiles/p09_maze.dir/flags.make
CMakeFiles/p09_maze.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Dai\c2020\level1\p09_maze\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/p09_maze.dir/main.c.obj"
	D:\CodeBlocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\p09_maze.dir\main.c.obj   -c C:\Users\Dai\c2020\level1\p09_maze\main.c

CMakeFiles/p09_maze.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/p09_maze.dir/main.c.i"
	D:\CodeBlocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Dai\c2020\level1\p09_maze\main.c > CMakeFiles\p09_maze.dir\main.c.i

CMakeFiles/p09_maze.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/p09_maze.dir/main.c.s"
	D:\CodeBlocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Dai\c2020\level1\p09_maze\main.c -o CMakeFiles\p09_maze.dir\main.c.s

CMakeFiles/p09_maze.dir/Game.c.obj: CMakeFiles/p09_maze.dir/flags.make
CMakeFiles/p09_maze.dir/Game.c.obj: ../Game.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Dai\c2020\level1\p09_maze\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/p09_maze.dir/Game.c.obj"
	D:\CodeBlocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\p09_maze.dir\Game.c.obj   -c C:\Users\Dai\c2020\level1\p09_maze\Game.c

CMakeFiles/p09_maze.dir/Game.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/p09_maze.dir/Game.c.i"
	D:\CodeBlocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Dai\c2020\level1\p09_maze\Game.c > CMakeFiles\p09_maze.dir\Game.c.i

CMakeFiles/p09_maze.dir/Game.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/p09_maze.dir/Game.c.s"
	D:\CodeBlocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Dai\c2020\level1\p09_maze\Game.c -o CMakeFiles\p09_maze.dir\Game.c.s

# Object files for target p09_maze
p09_maze_OBJECTS = \
"CMakeFiles/p09_maze.dir/main.c.obj" \
"CMakeFiles/p09_maze.dir/Game.c.obj"

# External object files for target p09_maze
p09_maze_EXTERNAL_OBJECTS =

p09_maze.exe: CMakeFiles/p09_maze.dir/main.c.obj
p09_maze.exe: CMakeFiles/p09_maze.dir/Game.c.obj
p09_maze.exe: CMakeFiles/p09_maze.dir/build.make
p09_maze.exe: CMakeFiles/p09_maze.dir/linklibs.rsp
p09_maze.exe: CMakeFiles/p09_maze.dir/objects1.rsp
p09_maze.exe: CMakeFiles/p09_maze.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Dai\c2020\level1\p09_maze\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable p09_maze.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\p09_maze.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/p09_maze.dir/build: p09_maze.exe

.PHONY : CMakeFiles/p09_maze.dir/build

CMakeFiles/p09_maze.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\p09_maze.dir\cmake_clean.cmake
.PHONY : CMakeFiles/p09_maze.dir/clean

CMakeFiles/p09_maze.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Dai\c2020\level1\p09_maze C:\Users\Dai\c2020\level1\p09_maze C:\Users\Dai\c2020\level1\p09_maze\cmake-build-debug C:\Users\Dai\c2020\level1\p09_maze\cmake-build-debug C:\Users\Dai\c2020\level1\p09_maze\cmake-build-debug\CMakeFiles\p09_maze.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/p09_maze.dir/depend

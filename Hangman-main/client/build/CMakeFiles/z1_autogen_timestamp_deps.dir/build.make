# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/aga/Downloads/Hangman-main/client

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aga/Downloads/Hangman-main/client/build

# Utility rule file for z1_autogen_timestamp_deps.

# Include any custom commands dependencies for this target.
include CMakeFiles/z1_autogen_timestamp_deps.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/z1_autogen_timestamp_deps.dir/progress.make

CMakeFiles/z1_autogen_timestamp_deps: /usr/lib64/libQt6Widgets.so.6.6.3
CMakeFiles/z1_autogen_timestamp_deps: /usr/lib/qt6/uic
CMakeFiles/z1_autogen_timestamp_deps: /usr/lib/qt6/moc
CMakeFiles/z1_autogen_timestamp_deps: /usr/lib64/libQt6Network.so.6.6.3

z1_autogen_timestamp_deps: CMakeFiles/z1_autogen_timestamp_deps
z1_autogen_timestamp_deps: CMakeFiles/z1_autogen_timestamp_deps.dir/build.make
.PHONY : z1_autogen_timestamp_deps

# Rule to build all files generated by this target.
CMakeFiles/z1_autogen_timestamp_deps.dir/build: z1_autogen_timestamp_deps
.PHONY : CMakeFiles/z1_autogen_timestamp_deps.dir/build

CMakeFiles/z1_autogen_timestamp_deps.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/z1_autogen_timestamp_deps.dir/cmake_clean.cmake
.PHONY : CMakeFiles/z1_autogen_timestamp_deps.dir/clean

CMakeFiles/z1_autogen_timestamp_deps.dir/depend:
	cd /home/aga/Downloads/Hangman-main/client/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aga/Downloads/Hangman-main/client /home/aga/Downloads/Hangman-main/client /home/aga/Downloads/Hangman-main/client/build /home/aga/Downloads/Hangman-main/client/build /home/aga/Downloads/Hangman-main/client/build/CMakeFiles/z1_autogen_timestamp_deps.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/z1_autogen_timestamp_deps.dir/depend


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
CMAKE_COMMAND = /snap/clion/92/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/92/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/robert/CLionProjects/test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/robert/CLionProjects/test/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/libperson.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/libperson.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/libperson.dir/flags.make

# Object files for target libperson
libperson_OBJECTS =

# External object files for target libperson
libperson_EXTERNAL_OBJECTS =

liblibperson.so: CMakeFiles/libperson.dir/build.make
liblibperson.so: CMakeFiles/libperson.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/robert/CLionProjects/test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Linking C shared library liblibperson.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libperson.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/libperson.dir/build: liblibperson.so

.PHONY : CMakeFiles/libperson.dir/build

CMakeFiles/libperson.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/libperson.dir/cmake_clean.cmake
.PHONY : CMakeFiles/libperson.dir/clean

CMakeFiles/libperson.dir/depend:
	cd /home/robert/CLionProjects/test/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/robert/CLionProjects/test /home/robert/CLionProjects/test /home/robert/CLionProjects/test/cmake-build-debug /home/robert/CLionProjects/test/cmake-build-debug /home/robert/CLionProjects/test/cmake-build-debug/CMakeFiles/libperson.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/libperson.dir/depend

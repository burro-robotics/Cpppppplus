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
CMAKE_SOURCE_DIR = /home/chun/Documents/Cpppplus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chun/Documents/Cpppplus/build

# Include any dependencies generated for this target.
include CMakeFiles/SMART.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SMART.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SMART.dir/flags.make

CMakeFiles/SMART.dir/include/SmartPtr/smart_ptr_example.cpp.o: CMakeFiles/SMART.dir/flags.make
CMakeFiles/SMART.dir/include/SmartPtr/smart_ptr_example.cpp.o: ../include/SmartPtr/smart_ptr_example.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chun/Documents/Cpppplus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SMART.dir/include/SmartPtr/smart_ptr_example.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SMART.dir/include/SmartPtr/smart_ptr_example.cpp.o -c /home/chun/Documents/Cpppplus/include/SmartPtr/smart_ptr_example.cpp

CMakeFiles/SMART.dir/include/SmartPtr/smart_ptr_example.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SMART.dir/include/SmartPtr/smart_ptr_example.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chun/Documents/Cpppplus/include/SmartPtr/smart_ptr_example.cpp > CMakeFiles/SMART.dir/include/SmartPtr/smart_ptr_example.cpp.i

CMakeFiles/SMART.dir/include/SmartPtr/smart_ptr_example.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SMART.dir/include/SmartPtr/smart_ptr_example.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chun/Documents/Cpppplus/include/SmartPtr/smart_ptr_example.cpp -o CMakeFiles/SMART.dir/include/SmartPtr/smart_ptr_example.cpp.s

# Object files for target SMART
SMART_OBJECTS = \
"CMakeFiles/SMART.dir/include/SmartPtr/smart_ptr_example.cpp.o"

# External object files for target SMART
SMART_EXTERNAL_OBJECTS =

SMART: CMakeFiles/SMART.dir/include/SmartPtr/smart_ptr_example.cpp.o
SMART: CMakeFiles/SMART.dir/build.make
SMART: include/Rules/libRules.a
SMART: CMakeFiles/SMART.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chun/Documents/Cpppplus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SMART"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SMART.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SMART.dir/build: SMART

.PHONY : CMakeFiles/SMART.dir/build

CMakeFiles/SMART.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SMART.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SMART.dir/clean

CMakeFiles/SMART.dir/depend:
	cd /home/chun/Documents/Cpppplus/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chun/Documents/Cpppplus /home/chun/Documents/Cpppplus /home/chun/Documents/Cpppplus/build /home/chun/Documents/Cpppplus/build /home/chun/Documents/Cpppplus/build/CMakeFiles/SMART.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SMART.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = "/Users/josh/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/173.4301.33/CLion.app/Contents/bin/cmake/bin/cmake"

# The command to remove a file.
RM = "/Users/josh/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/173.4301.33/CLion.app/Contents/bin/cmake/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/josh/Documents/School/Junior/spring/csci362/projects/lexicographic-tree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/josh/Documents/School/Junior/spring/csci362/projects/lexicographic-tree/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lexicographic-tree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lexicographic-tree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lexicographic-tree.dir/flags.make

CMakeFiles/lexicographic-tree.dir/main.cpp.o: CMakeFiles/lexicographic-tree.dir/flags.make
CMakeFiles/lexicographic-tree.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/josh/Documents/School/Junior/spring/csci362/projects/lexicographic-tree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lexicographic-tree.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lexicographic-tree.dir/main.cpp.o -c /Users/josh/Documents/School/Junior/spring/csci362/projects/lexicographic-tree/main.cpp

CMakeFiles/lexicographic-tree.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lexicographic-tree.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/josh/Documents/School/Junior/spring/csci362/projects/lexicographic-tree/main.cpp > CMakeFiles/lexicographic-tree.dir/main.cpp.i

CMakeFiles/lexicographic-tree.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lexicographic-tree.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/josh/Documents/School/Junior/spring/csci362/projects/lexicographic-tree/main.cpp -o CMakeFiles/lexicographic-tree.dir/main.cpp.s

CMakeFiles/lexicographic-tree.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/lexicographic-tree.dir/main.cpp.o.requires

CMakeFiles/lexicographic-tree.dir/main.cpp.o.provides: CMakeFiles/lexicographic-tree.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/lexicographic-tree.dir/build.make CMakeFiles/lexicographic-tree.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/lexicographic-tree.dir/main.cpp.o.provides

CMakeFiles/lexicographic-tree.dir/main.cpp.o.provides.build: CMakeFiles/lexicographic-tree.dir/main.cpp.o


CMakeFiles/lexicographic-tree.dir/lexicographic/lexicographic.cpp.o: CMakeFiles/lexicographic-tree.dir/flags.make
CMakeFiles/lexicographic-tree.dir/lexicographic/lexicographic.cpp.o: ../lexicographic/lexicographic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/josh/Documents/School/Junior/spring/csci362/projects/lexicographic-tree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lexicographic-tree.dir/lexicographic/lexicographic.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lexicographic-tree.dir/lexicographic/lexicographic.cpp.o -c /Users/josh/Documents/School/Junior/spring/csci362/projects/lexicographic-tree/lexicographic/lexicographic.cpp

CMakeFiles/lexicographic-tree.dir/lexicographic/lexicographic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lexicographic-tree.dir/lexicographic/lexicographic.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/josh/Documents/School/Junior/spring/csci362/projects/lexicographic-tree/lexicographic/lexicographic.cpp > CMakeFiles/lexicographic-tree.dir/lexicographic/lexicographic.cpp.i

CMakeFiles/lexicographic-tree.dir/lexicographic/lexicographic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lexicographic-tree.dir/lexicographic/lexicographic.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/josh/Documents/School/Junior/spring/csci362/projects/lexicographic-tree/lexicographic/lexicographic.cpp -o CMakeFiles/lexicographic-tree.dir/lexicographic/lexicographic.cpp.s

CMakeFiles/lexicographic-tree.dir/lexicographic/lexicographic.cpp.o.requires:

.PHONY : CMakeFiles/lexicographic-tree.dir/lexicographic/lexicographic.cpp.o.requires

CMakeFiles/lexicographic-tree.dir/lexicographic/lexicographic.cpp.o.provides: CMakeFiles/lexicographic-tree.dir/lexicographic/lexicographic.cpp.o.requires
	$(MAKE) -f CMakeFiles/lexicographic-tree.dir/build.make CMakeFiles/lexicographic-tree.dir/lexicographic/lexicographic.cpp.o.provides.build
.PHONY : CMakeFiles/lexicographic-tree.dir/lexicographic/lexicographic.cpp.o.provides

CMakeFiles/lexicographic-tree.dir/lexicographic/lexicographic.cpp.o.provides.build: CMakeFiles/lexicographic-tree.dir/lexicographic/lexicographic.cpp.o


CMakeFiles/lexicographic-tree.dir/string_formater/string_formater.cpp.o: CMakeFiles/lexicographic-tree.dir/flags.make
CMakeFiles/lexicographic-tree.dir/string_formater/string_formater.cpp.o: ../string_formater/string_formater.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/josh/Documents/School/Junior/spring/csci362/projects/lexicographic-tree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lexicographic-tree.dir/string_formater/string_formater.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lexicographic-tree.dir/string_formater/string_formater.cpp.o -c /Users/josh/Documents/School/Junior/spring/csci362/projects/lexicographic-tree/string_formater/string_formater.cpp

CMakeFiles/lexicographic-tree.dir/string_formater/string_formater.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lexicographic-tree.dir/string_formater/string_formater.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/josh/Documents/School/Junior/spring/csci362/projects/lexicographic-tree/string_formater/string_formater.cpp > CMakeFiles/lexicographic-tree.dir/string_formater/string_formater.cpp.i

CMakeFiles/lexicographic-tree.dir/string_formater/string_formater.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lexicographic-tree.dir/string_formater/string_formater.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/josh/Documents/School/Junior/spring/csci362/projects/lexicographic-tree/string_formater/string_formater.cpp -o CMakeFiles/lexicographic-tree.dir/string_formater/string_formater.cpp.s

CMakeFiles/lexicographic-tree.dir/string_formater/string_formater.cpp.o.requires:

.PHONY : CMakeFiles/lexicographic-tree.dir/string_formater/string_formater.cpp.o.requires

CMakeFiles/lexicographic-tree.dir/string_formater/string_formater.cpp.o.provides: CMakeFiles/lexicographic-tree.dir/string_formater/string_formater.cpp.o.requires
	$(MAKE) -f CMakeFiles/lexicographic-tree.dir/build.make CMakeFiles/lexicographic-tree.dir/string_formater/string_formater.cpp.o.provides.build
.PHONY : CMakeFiles/lexicographic-tree.dir/string_formater/string_formater.cpp.o.provides

CMakeFiles/lexicographic-tree.dir/string_formater/string_formater.cpp.o.provides.build: CMakeFiles/lexicographic-tree.dir/string_formater/string_formater.cpp.o


# Object files for target lexicographic-tree
lexicographic__tree_OBJECTS = \
"CMakeFiles/lexicographic-tree.dir/main.cpp.o" \
"CMakeFiles/lexicographic-tree.dir/lexicographic/lexicographic.cpp.o" \
"CMakeFiles/lexicographic-tree.dir/string_formater/string_formater.cpp.o"

# External object files for target lexicographic-tree
lexicographic__tree_EXTERNAL_OBJECTS =

lexicographic-tree: CMakeFiles/lexicographic-tree.dir/main.cpp.o
lexicographic-tree: CMakeFiles/lexicographic-tree.dir/lexicographic/lexicographic.cpp.o
lexicographic-tree: CMakeFiles/lexicographic-tree.dir/string_formater/string_formater.cpp.o
lexicographic-tree: CMakeFiles/lexicographic-tree.dir/build.make
lexicographic-tree: CMakeFiles/lexicographic-tree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/josh/Documents/School/Junior/spring/csci362/projects/lexicographic-tree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable lexicographic-tree"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lexicographic-tree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lexicographic-tree.dir/build: lexicographic-tree

.PHONY : CMakeFiles/lexicographic-tree.dir/build

CMakeFiles/lexicographic-tree.dir/requires: CMakeFiles/lexicographic-tree.dir/main.cpp.o.requires
CMakeFiles/lexicographic-tree.dir/requires: CMakeFiles/lexicographic-tree.dir/lexicographic/lexicographic.cpp.o.requires
CMakeFiles/lexicographic-tree.dir/requires: CMakeFiles/lexicographic-tree.dir/string_formater/string_formater.cpp.o.requires

.PHONY : CMakeFiles/lexicographic-tree.dir/requires

CMakeFiles/lexicographic-tree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lexicographic-tree.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lexicographic-tree.dir/clean

CMakeFiles/lexicographic-tree.dir/depend:
	cd /Users/josh/Documents/School/Junior/spring/csci362/projects/lexicographic-tree/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/josh/Documents/School/Junior/spring/csci362/projects/lexicographic-tree /Users/josh/Documents/School/Junior/spring/csci362/projects/lexicographic-tree /Users/josh/Documents/School/Junior/spring/csci362/projects/lexicographic-tree/cmake-build-debug /Users/josh/Documents/School/Junior/spring/csci362/projects/lexicographic-tree/cmake-build-debug /Users/josh/Documents/School/Junior/spring/csci362/projects/lexicographic-tree/cmake-build-debug/CMakeFiles/lexicographic-tree.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lexicographic-tree.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /usr/bin/cmake.exe

# The command to remove a file.
RM = /usr/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/src/Euchre

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/src/Euchre

# Include any dependencies generated for this target.
include CMakeFiles/Euchre_app.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Euchre_app.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Euchre_app.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Euchre_app.dir/flags.make

CMakeFiles/Euchre_app.dir/main.cpp.o: CMakeFiles/Euchre_app.dir/flags.make
CMakeFiles/Euchre_app.dir/main.cpp.o: main.cpp
CMakeFiles/Euchre_app.dir/main.cpp.o: CMakeFiles/Euchre_app.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/src/Euchre/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Euchre_app.dir/main.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Euchre_app.dir/main.cpp.o -MF CMakeFiles/Euchre_app.dir/main.cpp.o.d -o CMakeFiles/Euchre_app.dir/main.cpp.o -c /cygdrive/c/src/Euchre/main.cpp

CMakeFiles/Euchre_app.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Euchre_app.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/src/Euchre/main.cpp > CMakeFiles/Euchre_app.dir/main.cpp.i

CMakeFiles/Euchre_app.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Euchre_app.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/src/Euchre/main.cpp -o CMakeFiles/Euchre_app.dir/main.cpp.s

CMakeFiles/Euchre_app.dir/Input.cpp.o: CMakeFiles/Euchre_app.dir/flags.make
CMakeFiles/Euchre_app.dir/Input.cpp.o: Input.cpp
CMakeFiles/Euchre_app.dir/Input.cpp.o: CMakeFiles/Euchre_app.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/src/Euchre/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Euchre_app.dir/Input.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Euchre_app.dir/Input.cpp.o -MF CMakeFiles/Euchre_app.dir/Input.cpp.o.d -o CMakeFiles/Euchre_app.dir/Input.cpp.o -c /cygdrive/c/src/Euchre/Input.cpp

CMakeFiles/Euchre_app.dir/Input.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Euchre_app.dir/Input.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/src/Euchre/Input.cpp > CMakeFiles/Euchre_app.dir/Input.cpp.i

CMakeFiles/Euchre_app.dir/Input.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Euchre_app.dir/Input.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/src/Euchre/Input.cpp -o CMakeFiles/Euchre_app.dir/Input.cpp.s

CMakeFiles/Euchre_app.dir/Display.cpp.o: CMakeFiles/Euchre_app.dir/flags.make
CMakeFiles/Euchre_app.dir/Display.cpp.o: Display.cpp
CMakeFiles/Euchre_app.dir/Display.cpp.o: CMakeFiles/Euchre_app.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/src/Euchre/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Euchre_app.dir/Display.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Euchre_app.dir/Display.cpp.o -MF CMakeFiles/Euchre_app.dir/Display.cpp.o.d -o CMakeFiles/Euchre_app.dir/Display.cpp.o -c /cygdrive/c/src/Euchre/Display.cpp

CMakeFiles/Euchre_app.dir/Display.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Euchre_app.dir/Display.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/src/Euchre/Display.cpp > CMakeFiles/Euchre_app.dir/Display.cpp.i

CMakeFiles/Euchre_app.dir/Display.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Euchre_app.dir/Display.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/src/Euchre/Display.cpp -o CMakeFiles/Euchre_app.dir/Display.cpp.s

CMakeFiles/Euchre_app.dir/Game.cpp.o: CMakeFiles/Euchre_app.dir/flags.make
CMakeFiles/Euchre_app.dir/Game.cpp.o: Game.cpp
CMakeFiles/Euchre_app.dir/Game.cpp.o: CMakeFiles/Euchre_app.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/src/Euchre/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Euchre_app.dir/Game.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Euchre_app.dir/Game.cpp.o -MF CMakeFiles/Euchre_app.dir/Game.cpp.o.d -o CMakeFiles/Euchre_app.dir/Game.cpp.o -c /cygdrive/c/src/Euchre/Game.cpp

CMakeFiles/Euchre_app.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Euchre_app.dir/Game.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/src/Euchre/Game.cpp > CMakeFiles/Euchre_app.dir/Game.cpp.i

CMakeFiles/Euchre_app.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Euchre_app.dir/Game.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/src/Euchre/Game.cpp -o CMakeFiles/Euchre_app.dir/Game.cpp.s

CMakeFiles/Euchre_app.dir/Card.cpp.o: CMakeFiles/Euchre_app.dir/flags.make
CMakeFiles/Euchre_app.dir/Card.cpp.o: Card.cpp
CMakeFiles/Euchre_app.dir/Card.cpp.o: CMakeFiles/Euchre_app.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/src/Euchre/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Euchre_app.dir/Card.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Euchre_app.dir/Card.cpp.o -MF CMakeFiles/Euchre_app.dir/Card.cpp.o.d -o CMakeFiles/Euchre_app.dir/Card.cpp.o -c /cygdrive/c/src/Euchre/Card.cpp

CMakeFiles/Euchre_app.dir/Card.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Euchre_app.dir/Card.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/src/Euchre/Card.cpp > CMakeFiles/Euchre_app.dir/Card.cpp.i

CMakeFiles/Euchre_app.dir/Card.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Euchre_app.dir/Card.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/src/Euchre/Card.cpp -o CMakeFiles/Euchre_app.dir/Card.cpp.s

CMakeFiles/Euchre_app.dir/Utility.cpp.o: CMakeFiles/Euchre_app.dir/flags.make
CMakeFiles/Euchre_app.dir/Utility.cpp.o: Utility.cpp
CMakeFiles/Euchre_app.dir/Utility.cpp.o: CMakeFiles/Euchre_app.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/src/Euchre/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Euchre_app.dir/Utility.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Euchre_app.dir/Utility.cpp.o -MF CMakeFiles/Euchre_app.dir/Utility.cpp.o.d -o CMakeFiles/Euchre_app.dir/Utility.cpp.o -c /cygdrive/c/src/Euchre/Utility.cpp

CMakeFiles/Euchre_app.dir/Utility.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Euchre_app.dir/Utility.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/src/Euchre/Utility.cpp > CMakeFiles/Euchre_app.dir/Utility.cpp.i

CMakeFiles/Euchre_app.dir/Utility.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Euchre_app.dir/Utility.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/src/Euchre/Utility.cpp -o CMakeFiles/Euchre_app.dir/Utility.cpp.s

# Object files for target Euchre_app
Euchre_app_OBJECTS = \
"CMakeFiles/Euchre_app.dir/main.cpp.o" \
"CMakeFiles/Euchre_app.dir/Input.cpp.o" \
"CMakeFiles/Euchre_app.dir/Display.cpp.o" \
"CMakeFiles/Euchre_app.dir/Game.cpp.o" \
"CMakeFiles/Euchre_app.dir/Card.cpp.o" \
"CMakeFiles/Euchre_app.dir/Utility.cpp.o"

# External object files for target Euchre_app
Euchre_app_EXTERNAL_OBJECTS =

Euchre_app.exe: CMakeFiles/Euchre_app.dir/main.cpp.o
Euchre_app.exe: CMakeFiles/Euchre_app.dir/Input.cpp.o
Euchre_app.exe: CMakeFiles/Euchre_app.dir/Display.cpp.o
Euchre_app.exe: CMakeFiles/Euchre_app.dir/Game.cpp.o
Euchre_app.exe: CMakeFiles/Euchre_app.dir/Card.cpp.o
Euchre_app.exe: CMakeFiles/Euchre_app.dir/Utility.cpp.o
Euchre_app.exe: CMakeFiles/Euchre_app.dir/build.make
Euchre_app.exe: CMakeFiles/Euchre_app.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/src/Euchre/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable Euchre_app.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Euchre_app.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Euchre_app.dir/build: Euchre_app.exe
.PHONY : CMakeFiles/Euchre_app.dir/build

CMakeFiles/Euchre_app.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Euchre_app.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Euchre_app.dir/clean

CMakeFiles/Euchre_app.dir/depend:
	cd /cygdrive/c/src/Euchre && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/src/Euchre /cygdrive/c/src/Euchre /cygdrive/c/src/Euchre /cygdrive/c/src/Euchre /cygdrive/c/src/Euchre/CMakeFiles/Euchre_app.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Euchre_app.dir/depend


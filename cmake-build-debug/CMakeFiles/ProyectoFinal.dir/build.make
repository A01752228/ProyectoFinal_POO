# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = C:\Users\ferna\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\201.7223.86\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\ferna\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\201.7223.86\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\ferna\CLionProjects\ProyectoFinal

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ferna\CLionProjects\ProyectoFinal\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ProyectoFinal.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ProyectoFinal.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ProyectoFinal.dir/flags.make

CMakeFiles/ProyectoFinal.dir/main.cpp.obj: CMakeFiles/ProyectoFinal.dir/flags.make
CMakeFiles/ProyectoFinal.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ferna\CLionProjects\ProyectoFinal\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ProyectoFinal.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ProyectoFinal.dir\main.cpp.obj -c C:\Users\ferna\CLionProjects\ProyectoFinal\main.cpp

CMakeFiles/ProyectoFinal.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProyectoFinal.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ferna\CLionProjects\ProyectoFinal\main.cpp > CMakeFiles\ProyectoFinal.dir\main.cpp.i

CMakeFiles/ProyectoFinal.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProyectoFinal.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\ferna\CLionProjects\ProyectoFinal\main.cpp -o CMakeFiles\ProyectoFinal.dir\main.cpp.s

# Object files for target ProyectoFinal
ProyectoFinal_OBJECTS = \
"CMakeFiles/ProyectoFinal.dir/main.cpp.obj"

# External object files for target ProyectoFinal
ProyectoFinal_EXTERNAL_OBJECTS =

ProyectoFinal.exe: CMakeFiles/ProyectoFinal.dir/main.cpp.obj
ProyectoFinal.exe: CMakeFiles/ProyectoFinal.dir/build.make
ProyectoFinal.exe: CMakeFiles/ProyectoFinal.dir/linklibs.rsp
ProyectoFinal.exe: CMakeFiles/ProyectoFinal.dir/objects1.rsp
ProyectoFinal.exe: CMakeFiles/ProyectoFinal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ferna\CLionProjects\ProyectoFinal\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ProyectoFinal.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ProyectoFinal.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ProyectoFinal.dir/build: ProyectoFinal.exe

.PHONY : CMakeFiles/ProyectoFinal.dir/build

CMakeFiles/ProyectoFinal.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ProyectoFinal.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ProyectoFinal.dir/clean

CMakeFiles/ProyectoFinal.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ferna\CLionProjects\ProyectoFinal C:\Users\ferna\CLionProjects\ProyectoFinal C:\Users\ferna\CLionProjects\ProyectoFinal\cmake-build-debug C:\Users\ferna\CLionProjects\ProyectoFinal\cmake-build-debug C:\Users\ferna\CLionProjects\ProyectoFinal\cmake-build-debug\CMakeFiles\ProyectoFinal.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ProyectoFinal.dir/depend


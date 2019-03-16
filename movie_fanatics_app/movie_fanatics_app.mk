##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=movie_fanatics_app
ConfigurationName      :=Debug
WorkspacePath          :=/home/darksilence/programming/C_plus_plus_OOP/Oject_Oriented_Programming
ProjectPath            :=/home/darksilence/programming/C_plus_plus_OOP/Oject_Oriented_Programming/movie_fanatics_app
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=darksilence
Date                   :=14/03/19
CodeLitePath           :=/home/darksilence/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="movie_fanatics_app.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/MOVIES.cpp$(ObjectSuffix) $(IntermediateDirectory)/MOVIE.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/MOVIES.cpp$(ObjectSuffix): MOVIES.cpp $(IntermediateDirectory)/MOVIES.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/darksilence/programming/C_plus_plus_OOP/Oject_Oriented_Programming/movie_fanatics_app/MOVIES.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MOVIES.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MOVIES.cpp$(DependSuffix): MOVIES.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MOVIES.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/MOVIES.cpp$(DependSuffix) -MM MOVIES.cpp

$(IntermediateDirectory)/MOVIES.cpp$(PreprocessSuffix): MOVIES.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MOVIES.cpp$(PreprocessSuffix) MOVIES.cpp

$(IntermediateDirectory)/MOVIE.cpp$(ObjectSuffix): MOVIE.cpp $(IntermediateDirectory)/MOVIE.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/darksilence/programming/C_plus_plus_OOP/Oject_Oriented_Programming/movie_fanatics_app/MOVIE.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MOVIE.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MOVIE.cpp$(DependSuffix): MOVIE.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MOVIE.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/MOVIE.cpp$(DependSuffix) -MM MOVIE.cpp

$(IntermediateDirectory)/MOVIE.cpp$(PreprocessSuffix): MOVIE.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MOVIE.cpp$(PreprocessSuffix) MOVIE.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/darksilence/programming/C_plus_plus_OOP/Oject_Oriented_Programming/movie_fanatics_app/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/



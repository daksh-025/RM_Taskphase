##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Robomanipal
ConfigurationName      :=Debug
WorkspacePath          :="C:/Users/Manoj Agiwal/Documents/testing"
ProjectPath            :="C:/Users/Manoj Agiwal/OneDrive/Desktop/ROBO manipal/Robomanipal"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Manoj Agiwal
Date                   :=22/12/2021
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
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
ObjectsFileList        :="Robomanipal.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
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
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/prob1.cpp$(ObjectSuffix) $(IntermediateDirectory)/prob2.cpp$(ObjectSuffix) 



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
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/prob1.cpp$(ObjectSuffix): prob1.cpp $(IntermediateDirectory)/prob1.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Manoj Agiwal/OneDrive/Desktop/ROBO manipal/Robomanipal/prob1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/prob1.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/prob1.cpp$(DependSuffix): prob1.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/prob1.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/prob1.cpp$(DependSuffix) -MM prob1.cpp

$(IntermediateDirectory)/prob1.cpp$(PreprocessSuffix): prob1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/prob1.cpp$(PreprocessSuffix) prob1.cpp

$(IntermediateDirectory)/prob2.cpp$(ObjectSuffix): prob2.cpp $(IntermediateDirectory)/prob2.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Manoj Agiwal/OneDrive/Desktop/ROBO manipal/Robomanipal/prob2.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/prob2.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/prob2.cpp$(DependSuffix): prob2.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/prob2.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/prob2.cpp$(DependSuffix) -MM prob2.cpp

$(IntermediateDirectory)/prob2.cpp$(PreprocessSuffix): prob2.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/prob2.cpp$(PreprocessSuffix) prob2.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/



#pragma once
#include "Interfaces/IWindow.h"
#include <string>

class ClassInspectorWindow :
	public IWindow
{
	void Draw() override;
	bool RenameVFunctionPopup(std::string &functionName);
	bool DisassembleFunctionPopup();
	bool StructureDissectWindow();
	const ImVec2 WindowPos = ImVec2{ 900,0 };
	const ImVec2 WindowSize = ImVec2{ 600,1075 };
#ifdef _WIN64
	const char* POINTER_METAFMTSTR = "CompleteObjectLocator: %llX";
	const char* POINTER_FMTSTRING = "%llX";
	const char* VTABLE_FMTSTRING = "%d - %llX - %s";
#else
	const char* POINTER_METAFMTSTR = "CompleteObjectLocator: %X";
	const char* POINTER_FMTSTRING = "%X";
	const char* VTABLE_FMTSTRING = "%d - %X  - %s";

#endif
};


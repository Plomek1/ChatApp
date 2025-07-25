#include "Globals.h"

#include <imgui/imgui.h>

static ImVec2 screenSize;

const ImVec2& Globals::GetScreenSize()
{
    return screenSize;
}

void Globals::SetScreenSize(ImVec2 size)
{
    screenSize = size;
}

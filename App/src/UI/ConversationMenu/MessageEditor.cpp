#include "MessageEditor.h"

#include "Logger.h"
#include "imgui/imgui.h"

void MessageEditor::Render()
{
	ImVec2 windowSize = ImGui::GetWindowSize();

	ImGui::InputText("##MessageInput", messageBuffer, IM_ARRAYSIZE(messageBuffer)) //TODO
}
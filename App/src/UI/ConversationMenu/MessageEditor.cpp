#include "UI/ConversationMenu/MessageEditor.h"

#include <imgui/imgui.h>

#include "Globals.h"
#include "Logger.h"


void MessageEditor::Render()
{
	LoadStyle();

	ImVec2 windowSize = ImGui::GetWindowSize();
	ImVec2 screenSize = Globals::GetScreenSize();
	uint16_t bottomPadding = (uint16_t)(windowSize.y * .02f);
	
	ImVec2 boxSize(windowSize.x * .8, screenSize.y * .05f);
	ImVec2 boxPosition(windowSize.x * .5f - boxSize.x * .5f, windowSize.y - boxSize.y -bottomPadding);

	ImGui::SetNextWindowPos(boxPosition);

	ImGui::BeginChild("##MessageEditor", boxSize, ImGuiChildFlags_Border);
	
	ImGui::InputTextMultiline("##MessageInput", messageBuffer, IM_ARRAYSIZE(messageBuffer), ImGui::GetWindowSize());
	ImGui::EndChild();


	UnloadStyle();
}

void MessageEditor::LoadStyle()
{
	ImGui::PushStyleColor(ImGuiCol_ChildBg, IM_COL32(19, 38, 24, 255));
	ImGui::PushStyleColor(ImGuiCol_FrameBg, ImVec4(0, 0, 0, 0));
}

void MessageEditor::UnloadStyle()
{
	ImGui::PopStyleColor(2);
}
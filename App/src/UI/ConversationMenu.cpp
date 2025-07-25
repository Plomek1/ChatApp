#include "UI/ConversationMenu.h"

#include <imgui/imgui.h>

#include "UI/ConversationMenu/ConversationDisplay.h"
#include "UI/ConversationMenu/MessageEditor.h"


void ConversationMenu::Render()
{
	ImVec2 appSize = ImGui::GetMainViewport()->Size;

	bool open;
	ImGui::SetNextWindowPos(ImVec2(0, 0));
	ImGui::SetNextWindowSize(ImVec2(appSize.x * .5f, appSize.y));
	ImGui::Begin("##ConversationMenu", &open, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove |
		ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse | ImGuiWindowFlags_NoCollapse);

	IUIElement::Render();

	ImGui::End();
}

ConversationMenu::ConversationMenu()
{
	conversationDisplay = std::make_unique<ConversationDisplay>();
	messageEditor = std::make_unique <MessageEditor> ();

	
	children.push_back(conversationDisplay.get());
	children.push_back(messageEditor.get());
}

ConversationMenu::~ConversationMenu() = default;

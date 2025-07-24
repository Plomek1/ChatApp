#include "App.h"

#include "Logger.h"
#include "Window.h"

#include "UI/ConversationMenu.h"

void App::Run()
{
	Window window;
	ConversationMenu conversationMenu;
	window.AddUICallback(&conversationMenu);
	window.DrawWindow();
}
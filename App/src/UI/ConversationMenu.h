#pragma once

#include <memory>

#include "IUIElement.h"

class ConversationDisplay;
class MessageEditor;

class ConversationMenu : public IUIElement
{
public:
	ConversationMenu();
	~ConversationMenu();

private:
	void Render() override;

	std::unique_ptr<ConversationDisplay> conversationDisplay;
	std::unique_ptr<MessageEditor> messageEditor;
};
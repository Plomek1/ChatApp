#pragma once

#include "UI/IUIElement.h"

class MessageEditor : public IUIElement
{
private:
	void Render() override;

	char messageBuffer[256];
};
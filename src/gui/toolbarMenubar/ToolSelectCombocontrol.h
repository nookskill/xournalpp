/*
 * Xournal++
 *
 * Part of the customizable toolbars
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv2 or later
 */

#pragma once

#include "ToolButton.h"
#include "gui/GladeGui.h"

#include <XournalType.h>

class ToolMenuHandler;

class ToolSelectCombocontrol : public ToolButton
{
public:
	ToolSelectCombocontrol(ToolMenuHandler* toolMenuHandler, ActionHandler* handler, GladeGui* gui, string id);
	virtual ~ToolSelectCombocontrol();

public:
	virtual void selected(ActionGroup group, ActionType action);

protected:
	virtual GtkToolItem* newItem();
	void addMenuitem(string text, string icon, ActionType type, ActionGroup group);

private:
	XOJ_TYPE_ATTRIB;

	ToolMenuHandler* toolMenuHandler;
	GtkWidget* popup;

	GtkWidget* iconWidget;
	GtkWidget* labelWidget;

	GdkPixbuf* iconSelectRect;
	GdkPixbuf* iconSelectRgion;
	GdkPixbuf* iconSelectObject;
	GdkPixbuf* iconPlayObject;
};

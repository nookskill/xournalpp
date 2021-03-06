/*
 * Xournal++
 *
 * The configuration for a button in the Settings Dialog
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv2 or later
 */

#pragma once

#include "control/Actions.h"
#include "gui/GladeGui.h"

#include <gdk/gdk.h>

class Settings;
class SettingsDialog;

class ButtonConfigGui : public GladeGui
{
public:
	ButtonConfigGui(SettingsDialog* dlg, GladeSearchpath* gladeSearchPath, GtkWidget* w, Settings* settings, int button, bool withDevice);
	virtual ~ButtonConfigGui();

public:
	void loadSettings();
	void saveSettings();

	// Not implemented! This is not a dialog!
	virtual void show(GtkWindow* parent);

private:
	static void cbSelectCallback(GtkComboBox* widget, ButtonConfigGui* gui);
	void enableDisableTools();

private:
	XOJ_TYPE_ATTRIB;


	Settings* settings;
	int button;
	bool withDevice;

	GtkWidget* cbDevice;
	GtkWidget* cbDisableDrawing;

	GtkWidget* cbTool;
	GtkWidget* cbThickness;
	GtkWidget* colorButton;
	GtkWidget* cbEraserType;
	GtkWidget* cbDrawingType;
};

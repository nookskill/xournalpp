/*
 * Xournal++
 *
 * Xournal util functions
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv2 or later
 */

#pragma once

#include <gtk/gtk.h>

#include <string>
using std::string;

class XojMsgBox
{
private:
	XojMsgBox();
	virtual ~XojMsgBox();

public:
	/**
	 * Set window for messages without window
	 */
	static void setDefaultWindow(GtkWindow* win);

	static void showErrorToUser(GtkWindow* win, string msg);
	static int replaceFileQuestion(GtkWindow* win, string msg);
	static void showHelp(GtkWindow* win);
};

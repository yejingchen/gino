#include <gtk/gtk.h>

#include "common.h"

GtkWidget *
gino_main_win_new(void)
{
	GtkWidget *button;
	GtkWidget *toolbar;
	GtkWidget *box;
	GinoEditor *editor;
	GtkWidget *editor_widget;
	GtkWidget *statusbar;

	tmp_main_win = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	toolbar = gino_main_toolbar_new();
	gtk_window_set_titlebar(GTK_WINDOW(tmp_main_win), toolbar);

	box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);

	editor = gino_editor_new();
	editor_widget = gino_editor_get_editor_widget(editor);
	gtk_box_pack_start(GTK_BOX(box), editor_widget,
			TRUE, TRUE, 0);
	gtk_widget_show(editor_widget);

	statusbar = gino_status_bar_new();
	gtk_box_pack_start(GTK_BOX(box), statusbar, FALSE, TRUE, 0);
	gtk_widget_show(statusbar);

	gtk_widget_show_all(box);
	gtk_container_add(GTK_CONTAINER(tmp_main_win), box);

	return tmp_main_win;
}

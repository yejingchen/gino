#include <gtk/gtk.h>

#include "common.h"

GtkWidget *
gino_main_toolbar_new(void)
{
	GtkWidget *button;
	GtkWidget *ret_toolbar;

	ret_toolbar = gtk_header_bar_new();
	main_win_title = "Gino";
	gtk_header_bar_set_title(GTK_HEADER_BAR(ret_toolbar), main_win_title);
	gtk_header_bar_set_show_close_button(GTK_HEADER_BAR(ret_toolbar),
			TRUE);

	button = gtk_button_new_with_label(_("Open"));
	g_signal_connect(button, "clicked", G_CALLBACK(gino_open_file), NULL);
	gtk_header_bar_pack_start(GTK_HEADER_BAR(ret_toolbar), button);
	gtk_widget_show(button);

	button = gtk_button_new_with_label(_("Save"));
	g_signal_connect(button, "clicked", G_CALLBACK(gino_save_file), NULL);
	gtk_header_bar_pack_start(GTK_HEADER_BAR(ret_toolbar), button);
	gtk_widget_show(button);

	gtk_widget_show(tmp_main_hdr);

	return tmp_main_hdr;
}

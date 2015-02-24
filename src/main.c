#include <gtk/gtk.h>

#include "window.h"
#include "editor.h"
#include "ino.h"
#include "toolbar.h"


int
main(int argc, char *argv[])
{
	GtkWidget *main_win;

	gtk_init(&argc, &argv);

	main_win = gino_main_win_new();

	gtk_main();

	return EXIT_SUCCESS;
}

#include <gtk/gtk.h>

#include "common.h"

#define GINO_EDITOR_NORMAL	0
#define GINO_EDITOR_VIM	1
typedef struct _gino_editor GinoEditor;

/*
 * Create a new GinoEditor.  Available options for EDITOR_TYPE is defined
 * above.
 */
GinoEditor *gino_editor_new(gint editor_type);
GtkWidget *gino_editor_get_editor_widget(GinoEditor *editor);

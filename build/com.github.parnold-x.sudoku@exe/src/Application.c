/* Application.c generated by valac 0.40.15, the Vala compiler
 * generated from Application.vala, do not modify */

/*
 * Copyright (c) 2017 Peter Arnold
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>


#define SUDOKU_TYPE_SUDOKU_APP (sudoku_sudoku_app_get_type ())
#define SUDOKU_SUDOKU_APP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SUDOKU_TYPE_SUDOKU_APP, SudokuSudokuApp))
#define SUDOKU_SUDOKU_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SUDOKU_TYPE_SUDOKU_APP, SudokuSudokuAppClass))
#define SUDOKU_IS_SUDOKU_APP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SUDOKU_TYPE_SUDOKU_APP))
#define SUDOKU_IS_SUDOKU_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SUDOKU_TYPE_SUDOKU_APP))
#define SUDOKU_SUDOKU_APP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SUDOKU_TYPE_SUDOKU_APP, SudokuSudokuAppClass))

typedef struct _SudokuSudokuApp SudokuSudokuApp;
typedef struct _SudokuSudokuAppClass SudokuSudokuAppClass;
typedef struct _SudokuSudokuAppPrivate SudokuSudokuAppPrivate;

#define SUDOKU_TYPE_MAIN_WINDOW (sudoku_main_window_get_type ())
#define SUDOKU_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SUDOKU_TYPE_MAIN_WINDOW, SudokuMainWindow))
#define SUDOKU_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SUDOKU_TYPE_MAIN_WINDOW, SudokuMainWindowClass))
#define SUDOKU_IS_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SUDOKU_TYPE_MAIN_WINDOW))
#define SUDOKU_IS_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SUDOKU_TYPE_MAIN_WINDOW))
#define SUDOKU_MAIN_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SUDOKU_TYPE_MAIN_WINDOW, SudokuMainWindowClass))

typedef struct _SudokuMainWindow SudokuMainWindow;
typedef struct _SudokuMainWindowClass SudokuMainWindowClass;
enum  {
	SUDOKU_SUDOKU_APP_0_PROPERTY,
	SUDOKU_SUDOKU_APP_NUM_PROPERTIES
};
static GParamSpec* sudoku_sudoku_app_properties[SUDOKU_SUDOKU_APP_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _SudokuSudokuApp {
	GtkApplication parent_instance;
	SudokuSudokuAppPrivate * priv;
	gchar** args;
	gint args_length1;
};

struct _SudokuSudokuAppClass {
	GtkApplicationClass parent_class;
};

struct _SudokuSudokuAppPrivate {
	SudokuMainWindow* window;
};


static gpointer sudoku_sudoku_app_parent_class = NULL;

GType sudoku_sudoku_app_get_type (void) G_GNUC_CONST;
GType sudoku_main_window_get_type (void) G_GNUC_CONST;
#define SUDOKU_SUDOKU_APP_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), SUDOKU_TYPE_SUDOKU_APP, SudokuSudokuAppPrivate))
SudokuSudokuApp* sudoku_sudoku_app_new (void);
SudokuSudokuApp* sudoku_sudoku_app_construct (GType object_type);
static void sudoku_sudoku_app_real_activate (GApplication* base);
SudokuMainWindow* sudoku_main_window_new (GtkApplication* application);
SudokuMainWindow* sudoku_main_window_construct (GType object_type,
                                                GtkApplication* application);
void sudoku_sudoku_app_main (gchar** args,
                             int args_length1);
static gchar** _vala_array_dup1 (gchar** self,
                          int length);
static void sudoku_sudoku_app_finalize (GObject * obj);
static void _vala_array_destroy (gpointer array,
                          gint array_length,
                          GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array,
                       gint array_length,
                       GDestroyNotify destroy_func);


SudokuSudokuApp*
sudoku_sudoku_app_construct (GType object_type)
{
	SudokuSudokuApp * self = NULL;
#line 27 "/home/pa/Projects/sudoku/src/Application.vala"
	self = (SudokuSudokuApp*) g_object_new (object_type, "application-id", "com.github.parnold-x.sudoku", "flags", G_APPLICATION_FLAGS_NONE, NULL);
#line 26 "/home/pa/Projects/sudoku/src/Application.vala"
	return self;
#line 108 "Application.c"
}


SudokuSudokuApp*
sudoku_sudoku_app_new (void)
{
#line 26 "/home/pa/Projects/sudoku/src/Application.vala"
	return sudoku_sudoku_app_construct (SUDOKU_TYPE_SUDOKU_APP);
#line 117 "Application.c"
}


static void
sudoku_sudoku_app_real_activate (GApplication* base)
{
	SudokuSudokuApp * self;
	GList* _tmp0_;
#line 31 "/home/pa/Projects/sudoku/src/Application.vala"
	self = (SudokuSudokuApp*) base;
#line 32 "/home/pa/Projects/sudoku/src/Application.vala"
	_tmp0_ = gtk_application_get_windows ((GtkApplication*) self);
#line 32 "/home/pa/Projects/sudoku/src/Application.vala"
	if (_tmp0_ == NULL) {
#line 132 "Application.c"
		SudokuMainWindow* _tmp1_;
#line 33 "/home/pa/Projects/sudoku/src/Application.vala"
		_tmp1_ = sudoku_main_window_new ((GtkApplication*) self);
#line 33 "/home/pa/Projects/sudoku/src/Application.vala"
		g_object_ref_sink (_tmp1_);
#line 33 "/home/pa/Projects/sudoku/src/Application.vala"
		_g_object_unref0 (self->priv->window);
#line 33 "/home/pa/Projects/sudoku/src/Application.vala"
		self->priv->window = _tmp1_;
#line 142 "Application.c"
	} else {
		SudokuMainWindow* _tmp2_;
#line 35 "/home/pa/Projects/sudoku/src/Application.vala"
		_tmp2_ = self->priv->window;
#line 35 "/home/pa/Projects/sudoku/src/Application.vala"
		gtk_window_present ((GtkWindow*) _tmp2_);
#line 149 "Application.c"
	}
}


static gchar**
_vala_array_dup1 (gchar** self,
                  int length)
{
	gchar** result;
	int i;
#line 41 "/home/pa/Projects/sudoku/src/Application.vala"
	result = g_new0 (gchar*, length + 1);
#line 41 "/home/pa/Projects/sudoku/src/Application.vala"
	for (i = 0; i < length; i++) {
#line 164 "Application.c"
		gchar* _tmp0_;
#line 41 "/home/pa/Projects/sudoku/src/Application.vala"
		_tmp0_ = g_strdup (self[i]);
#line 41 "/home/pa/Projects/sudoku/src/Application.vala"
		result[i] = _tmp0_;
#line 170 "Application.c"
	}
#line 41 "/home/pa/Projects/sudoku/src/Application.vala"
	return result;
#line 174 "Application.c"
}


void
sudoku_sudoku_app_main (gchar** args,
                        int args_length1)
{
	SudokuSudokuApp* app = NULL;
	SudokuSudokuApp* _tmp0_;
	gchar** _tmp1_;
	gint _tmp1__length1;
#line 40 "/home/pa/Projects/sudoku/src/Application.vala"
	_tmp0_ = sudoku_sudoku_app_new ();
#line 40 "/home/pa/Projects/sudoku/src/Application.vala"
	app = _tmp0_;
#line 41 "/home/pa/Projects/sudoku/src/Application.vala"
	_tmp1_ = (args != NULL) ? _vala_array_dup1 (args, args_length1) : ((gpointer) args);
#line 41 "/home/pa/Projects/sudoku/src/Application.vala"
	_tmp1__length1 = args_length1;
#line 41 "/home/pa/Projects/sudoku/src/Application.vala"
	app->args = (_vala_array_free (app->args, app->args_length1, (GDestroyNotify) g_free), NULL);
#line 41 "/home/pa/Projects/sudoku/src/Application.vala"
	app->args = _tmp1_;
#line 41 "/home/pa/Projects/sudoku/src/Application.vala"
	app->args_length1 = _tmp1__length1;
#line 42 "/home/pa/Projects/sudoku/src/Application.vala"
	g_application_run ((GApplication*) app, args_length1, args);
#line 39 "/home/pa/Projects/sudoku/src/Application.vala"
	_g_object_unref0 (app);
#line 204 "Application.c"
}


int
main (int argc,
      char ** argv)
{
#line 39 "/home/pa/Projects/sudoku/src/Application.vala"
	sudoku_sudoku_app_main (argv, argc);
#line 39 "/home/pa/Projects/sudoku/src/Application.vala"
	return 0;
#line 216 "Application.c"
}


static void
sudoku_sudoku_app_class_init (SudokuSudokuAppClass * klass)
{
#line 21 "/home/pa/Projects/sudoku/src/Application.vala"
	sudoku_sudoku_app_parent_class = g_type_class_peek_parent (klass);
#line 21 "/home/pa/Projects/sudoku/src/Application.vala"
	g_type_class_add_private (klass, sizeof (SudokuSudokuAppPrivate));
#line 21 "/home/pa/Projects/sudoku/src/Application.vala"
	((GApplicationClass *) klass)->activate = (void (*) (GApplication*)) sudoku_sudoku_app_real_activate;
#line 21 "/home/pa/Projects/sudoku/src/Application.vala"
	G_OBJECT_CLASS (klass)->finalize = sudoku_sudoku_app_finalize;
#line 231 "Application.c"
}


static void
sudoku_sudoku_app_instance_init (SudokuSudokuApp * self)
{
#line 21 "/home/pa/Projects/sudoku/src/Application.vala"
	self->priv = SUDOKU_SUDOKU_APP_GET_PRIVATE (self);
#line 22 "/home/pa/Projects/sudoku/src/Application.vala"
	self->priv->window = NULL;
#line 242 "Application.c"
}


static void
sudoku_sudoku_app_finalize (GObject * obj)
{
	SudokuSudokuApp * self;
#line 21 "/home/pa/Projects/sudoku/src/Application.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SUDOKU_TYPE_SUDOKU_APP, SudokuSudokuApp);
#line 22 "/home/pa/Projects/sudoku/src/Application.vala"
	_g_object_unref0 (self->priv->window);
#line 23 "/home/pa/Projects/sudoku/src/Application.vala"
	self->args = (_vala_array_free (self->args, self->args_length1, (GDestroyNotify) g_free), NULL);
#line 21 "/home/pa/Projects/sudoku/src/Application.vala"
	G_OBJECT_CLASS (sudoku_sudoku_app_parent_class)->finalize (obj);
#line 258 "Application.c"
}


GType
sudoku_sudoku_app_get_type (void)
{
	static volatile gsize sudoku_sudoku_app_type_id__volatile = 0;
	if (g_once_init_enter (&sudoku_sudoku_app_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SudokuSudokuAppClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) sudoku_sudoku_app_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SudokuSudokuApp), 0, (GInstanceInitFunc) sudoku_sudoku_app_instance_init, NULL };
		GType sudoku_sudoku_app_type_id;
		sudoku_sudoku_app_type_id = g_type_register_static (gtk_application_get_type (), "SudokuSudokuApp", &g_define_type_info, 0);
		g_once_init_leave (&sudoku_sudoku_app_type_id__volatile, sudoku_sudoku_app_type_id);
	}
	return sudoku_sudoku_app_type_id__volatile;
}


static void
_vala_array_destroy (gpointer array,
                     gint array_length,
                     GDestroyNotify destroy_func)
{
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void
_vala_array_free (gpointer array,
                  gint array_length,
                  GDestroyNotify destroy_func)
{
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}




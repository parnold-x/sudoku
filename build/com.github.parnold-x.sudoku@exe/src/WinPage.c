/* WinPage.c generated by valac 0.40.15, the Vala compiler
 * generated from WinPage.vala, do not modify */

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
#include <glib/gi18n-lib.h>
#include <stdlib.h>
#include <string.h>


#define SUDOKU_TYPE_WIN_PAGE (sudoku_win_page_get_type ())
#define SUDOKU_WIN_PAGE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SUDOKU_TYPE_WIN_PAGE, SudokuWinPage))
#define SUDOKU_WIN_PAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SUDOKU_TYPE_WIN_PAGE, SudokuWinPageClass))
#define SUDOKU_IS_WIN_PAGE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SUDOKU_TYPE_WIN_PAGE))
#define SUDOKU_IS_WIN_PAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SUDOKU_TYPE_WIN_PAGE))
#define SUDOKU_WIN_PAGE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SUDOKU_TYPE_WIN_PAGE, SudokuWinPageClass))

typedef struct _SudokuWinPage SudokuWinPage;
typedef struct _SudokuWinPageClass SudokuWinPageClass;
typedef struct _SudokuWinPagePrivate SudokuWinPagePrivate;
enum  {
	SUDOKU_WIN_PAGE_0_PROPERTY,
	SUDOKU_WIN_PAGE_NUM_PROPERTIES
};
static GParamSpec* sudoku_win_page_properties[SUDOKU_WIN_PAGE_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define SUDOKU_TYPE_SUDOKU_BOARD (sudoku_sudoku_board_get_type ())
#define SUDOKU_SUDOKU_BOARD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SUDOKU_TYPE_SUDOKU_BOARD, SudokuSudokuBoard))
#define SUDOKU_SUDOKU_BOARD_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SUDOKU_TYPE_SUDOKU_BOARD, SudokuSudokuBoardClass))
#define SUDOKU_IS_SUDOKU_BOARD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SUDOKU_TYPE_SUDOKU_BOARD))
#define SUDOKU_IS_SUDOKU_BOARD_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SUDOKU_TYPE_SUDOKU_BOARD))
#define SUDOKU_SUDOKU_BOARD_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SUDOKU_TYPE_SUDOKU_BOARD, SudokuSudokuBoardClass))

typedef struct _SudokuSudokuBoard SudokuSudokuBoard;
typedef struct _SudokuSudokuBoardClass SudokuSudokuBoardClass;
#define _g_free0(var) (var = (g_free (var), NULL))
enum  {
	SUDOKU_WIN_PAGE_RETURN_TO_WELCOME_SIGNAL,
	SUDOKU_WIN_PAGE_NUM_SIGNALS
};
static guint sudoku_win_page_signals[SUDOKU_WIN_PAGE_NUM_SIGNALS] = {0};

struct _SudokuWinPage {
	GtkAspectFrame parent_instance;
	SudokuWinPagePrivate * priv;
};

struct _SudokuWinPageClass {
	GtkAspectFrameClass parent_class;
};

struct _SudokuWinPagePrivate {
	GtkLabel* error_label;
	GtkLabel* points_label;
	GtkLabel* highscore_label;
};


static gpointer sudoku_win_page_parent_class = NULL;

GType sudoku_win_page_get_type (void) G_GNUC_CONST;
#define SUDOKU_WIN_PAGE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), SUDOKU_TYPE_WIN_PAGE, SudokuWinPagePrivate))
SudokuWinPage* sudoku_win_page_new (void);
SudokuWinPage* sudoku_win_page_construct (GType object_type);
static void __lambda6_ (SudokuWinPage* self);
static void ___lambda6__gtk_button_clicked (GtkButton* _sender,
                                     gpointer self);
GType sudoku_sudoku_board_get_type (void) G_GNUC_CONST;
void sudoku_win_page_set_board (SudokuWinPage* self,
                                SudokuSudokuBoard* board,
                                gint highscore);
gint sudoku_sudoku_board_get_fails (SudokuSudokuBoard* self);
gint sudoku_sudoku_board_get_points (SudokuSudokuBoard* self);
static void sudoku_win_page_finalize (GObject * obj);


static void
__lambda6_ (SudokuWinPage* self)
{
#line 61 "/home/pa/Projects/sudoku/src/WinPage.vala"
	g_signal_emit (self, sudoku_win_page_signals[SUDOKU_WIN_PAGE_RETURN_TO_WELCOME_SIGNAL], 0);
#line 105 "WinPage.c"
}


static void
___lambda6__gtk_button_clicked (GtkButton* _sender,
                                gpointer self)
{
#line 60 "/home/pa/Projects/sudoku/src/WinPage.vala"
	__lambda6_ ((SudokuWinPage*) self);
#line 115 "WinPage.c"
}


SudokuWinPage*
sudoku_win_page_construct (GType object_type)
{
	SudokuWinPage * self = NULL;
	GtkGrid* grid = NULL;
	GtkGrid* _tmp0_;
	GtkLabel* error_text = NULL;
	GtkLabel* _tmp1_;
	GtkStyleContext* _tmp2_;
	GtkLabel* _tmp3_;
	GtkLabel* _tmp4_;
	GtkStyleContext* _tmp5_;
	GtkLabel* _tmp6_;
	GtkLabel* points_text = NULL;
	GtkLabel* _tmp7_;
	GtkStyleContext* _tmp8_;
	GtkLabel* _tmp9_;
	GtkLabel* _tmp10_;
	GtkStyleContext* _tmp11_;
	GtkLabel* _tmp12_;
	GtkLabel* highscore_text = NULL;
	GtkLabel* _tmp13_;
	GtkStyleContext* _tmp14_;
	GtkLabel* _tmp15_;
	GtkLabel* _tmp16_;
	GtkStyleContext* _tmp17_;
	GtkLabel* _tmp18_;
	GtkButton* button = NULL;
	GtkButton* _tmp19_;
	GtkStyleContext* _tmp20_;
	GtkStyleContext* _tmp21_;
#line 27 "/home/pa/Projects/sudoku/src/WinPage.vala"
	self = (SudokuWinPage*) g_object_new (object_type, NULL);
#line 28 "/home/pa/Projects/sudoku/src/WinPage.vala"
	gtk_frame_set_shadow_type ((GtkFrame*) self, GTK_SHADOW_IN);
#line 29 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp0_ = (GtkGrid*) gtk_grid_new ();
#line 29 "/home/pa/Projects/sudoku/src/WinPage.vala"
	g_object_ref_sink (_tmp0_);
#line 29 "/home/pa/Projects/sudoku/src/WinPage.vala"
	grid = _tmp0_;
#line 30 "/home/pa/Projects/sudoku/src/WinPage.vala"
	gtk_grid_set_column_homogeneous (grid, TRUE);
#line 31 "/home/pa/Projects/sudoku/src/WinPage.vala"
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) grid);
#line 33 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp1_ = (GtkLabel*) gtk_label_new (_ ("Errors:"));
#line 33 "/home/pa/Projects/sudoku/src/WinPage.vala"
	g_object_ref_sink (_tmp1_);
#line 33 "/home/pa/Projects/sudoku/src/WinPage.vala"
	error_text = _tmp1_;
#line 34 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp2_ = gtk_widget_get_style_context ((GtkWidget*) error_text);
#line 34 "/home/pa/Projects/sudoku/src/WinPage.vala"
	gtk_style_context_add_class (_tmp2_, "win-label");
#line 35 "/home/pa/Projects/sudoku/src/WinPage.vala"
	g_object_set ((GtkWidget*) error_text, "margin", 20, NULL);
#line 36 "/home/pa/Projects/sudoku/src/WinPage.vala"
	gtk_widget_set_margin_bottom ((GtkWidget*) error_text, 50);
#line 37 "/home/pa/Projects/sudoku/src/WinPage.vala"
	gtk_grid_attach (grid, (GtkWidget*) error_text, 0, 0, 1, 1);
#line 38 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp3_ = (GtkLabel*) gtk_label_new ("");
#line 38 "/home/pa/Projects/sudoku/src/WinPage.vala"
	g_object_ref_sink (_tmp3_);
#line 38 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_g_object_unref0 (self->priv->error_label);
#line 38 "/home/pa/Projects/sudoku/src/WinPage.vala"
	self->priv->error_label = _tmp3_;
#line 39 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp4_ = self->priv->error_label;
#line 39 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp5_ = gtk_widget_get_style_context ((GtkWidget*) _tmp4_);
#line 39 "/home/pa/Projects/sudoku/src/WinPage.vala"
	gtk_style_context_add_class (_tmp5_, "win-label");
#line 40 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp6_ = self->priv->error_label;
#line 40 "/home/pa/Projects/sudoku/src/WinPage.vala"
	gtk_grid_attach (grid, (GtkWidget*) _tmp6_, 1, 0, 1, 1);
#line 42 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp7_ = (GtkLabel*) gtk_label_new (_ ("Result:"));
#line 42 "/home/pa/Projects/sudoku/src/WinPage.vala"
	g_object_ref_sink (_tmp7_);
#line 42 "/home/pa/Projects/sudoku/src/WinPage.vala"
	points_text = _tmp7_;
#line 43 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp8_ = gtk_widget_get_style_context ((GtkWidget*) points_text);
#line 43 "/home/pa/Projects/sudoku/src/WinPage.vala"
	gtk_style_context_add_class (_tmp8_, "win-label");
#line 44 "/home/pa/Projects/sudoku/src/WinPage.vala"
	gtk_grid_attach (grid, (GtkWidget*) points_text, 0, 2, 1, 1);
#line 45 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp9_ = (GtkLabel*) gtk_label_new ("");
#line 45 "/home/pa/Projects/sudoku/src/WinPage.vala"
	g_object_ref_sink (_tmp9_);
#line 45 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_g_object_unref0 (self->priv->points_label);
#line 45 "/home/pa/Projects/sudoku/src/WinPage.vala"
	self->priv->points_label = _tmp9_;
#line 46 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp10_ = self->priv->points_label;
#line 46 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp11_ = gtk_widget_get_style_context ((GtkWidget*) _tmp10_);
#line 46 "/home/pa/Projects/sudoku/src/WinPage.vala"
	gtk_style_context_add_class (_tmp11_, "win-label");
#line 47 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp12_ = self->priv->points_label;
#line 47 "/home/pa/Projects/sudoku/src/WinPage.vala"
	gtk_grid_attach (grid, (GtkWidget*) _tmp12_, 1, 2, 1, 1);
#line 49 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp13_ = (GtkLabel*) gtk_label_new (_ ("Highscore:"));
#line 49 "/home/pa/Projects/sudoku/src/WinPage.vala"
	g_object_ref_sink (_tmp13_);
#line 49 "/home/pa/Projects/sudoku/src/WinPage.vala"
	highscore_text = _tmp13_;
#line 50 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp14_ = gtk_widget_get_style_context ((GtkWidget*) highscore_text);
#line 50 "/home/pa/Projects/sudoku/src/WinPage.vala"
	gtk_style_context_add_class (_tmp14_, "win-label");
#line 51 "/home/pa/Projects/sudoku/src/WinPage.vala"
	gtk_grid_attach (grid, (GtkWidget*) highscore_text, 0, 3, 1, 1);
#line 52 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp15_ = (GtkLabel*) gtk_label_new ("");
#line 52 "/home/pa/Projects/sudoku/src/WinPage.vala"
	g_object_ref_sink (_tmp15_);
#line 52 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_g_object_unref0 (self->priv->highscore_label);
#line 52 "/home/pa/Projects/sudoku/src/WinPage.vala"
	self->priv->highscore_label = _tmp15_;
#line 53 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp16_ = self->priv->highscore_label;
#line 53 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp17_ = gtk_widget_get_style_context ((GtkWidget*) _tmp16_);
#line 53 "/home/pa/Projects/sudoku/src/WinPage.vala"
	gtk_style_context_add_class (_tmp17_, "win-label");
#line 54 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp18_ = self->priv->highscore_label;
#line 54 "/home/pa/Projects/sudoku/src/WinPage.vala"
	gtk_grid_attach (grid, (GtkWidget*) _tmp18_, 1, 3, 1, 1);
#line 56 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp19_ = (GtkButton*) gtk_button_new_with_label (_ ("New Game"));
#line 56 "/home/pa/Projects/sudoku/src/WinPage.vala"
	g_object_ref_sink (_tmp19_);
#line 56 "/home/pa/Projects/sudoku/src/WinPage.vala"
	button = _tmp19_;
#line 57 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp20_ = gtk_widget_get_style_context ((GtkWidget*) button);
#line 57 "/home/pa/Projects/sudoku/src/WinPage.vala"
	gtk_style_context_add_class (_tmp20_, "win-label");
#line 58 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp21_ = gtk_widget_get_style_context ((GtkWidget*) button);
#line 58 "/home/pa/Projects/sudoku/src/WinPage.vala"
	gtk_style_context_add_class (_tmp21_, "win-button");
#line 59 "/home/pa/Projects/sudoku/src/WinPage.vala"
	g_object_set ((GtkWidget*) button, "margin", 20, NULL);
#line 60 "/home/pa/Projects/sudoku/src/WinPage.vala"
	g_signal_connect_object (button, "clicked", (GCallback) ___lambda6__gtk_button_clicked, self, 0);
#line 63 "/home/pa/Projects/sudoku/src/WinPage.vala"
	gtk_grid_attach (grid, (GtkWidget*) button, 0, 6, 1, 1);
#line 27 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_g_object_unref0 (button);
#line 27 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_g_object_unref0 (highscore_text);
#line 27 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_g_object_unref0 (points_text);
#line 27 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_g_object_unref0 (error_text);
#line 27 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_g_object_unref0 (grid);
#line 27 "/home/pa/Projects/sudoku/src/WinPage.vala"
	return self;
#line 290 "WinPage.c"
}


SudokuWinPage*
sudoku_win_page_new (void)
{
#line 27 "/home/pa/Projects/sudoku/src/WinPage.vala"
	return sudoku_win_page_construct (SUDOKU_TYPE_WIN_PAGE);
#line 299 "WinPage.c"
}


void
sudoku_win_page_set_board (SudokuWinPage* self,
                           SudokuSudokuBoard* board,
                           gint highscore)
{
	gint _tmp0_;
	gint _tmp1_;
	GtkLabel* _tmp30_;
	gint _tmp31_;
	gint _tmp32_;
	gchar* _tmp33_;
	gchar* _tmp34_;
	GtkLabel* _tmp35_;
	gchar* _tmp36_;
	gchar* _tmp37_;
#line 66 "/home/pa/Projects/sudoku/src/WinPage.vala"
	g_return_if_fail (self != NULL);
#line 66 "/home/pa/Projects/sudoku/src/WinPage.vala"
	g_return_if_fail (board != NULL);
#line 67 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp0_ = sudoku_sudoku_board_get_fails (board);
#line 67 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp1_ = _tmp0_;
#line 67 "/home/pa/Projects/sudoku/src/WinPage.vala"
	if (_tmp1_ == 0) {
#line 328 "WinPage.c"
		GtkLabel* _tmp2_;
		gchar* _tmp3_;
		gchar* _tmp4_;
		gchar* _tmp5_;
		gchar* _tmp6_;
		gchar* _tmp7_;
		gchar* _tmp8_;
#line 68 "/home/pa/Projects/sudoku/src/WinPage.vala"
		_tmp2_ = self->priv->error_label;
#line 68 "/home/pa/Projects/sudoku/src/WinPage.vala"
		_tmp3_ = g_strconcat ("<b>", _ ("none!"), NULL);
#line 68 "/home/pa/Projects/sudoku/src/WinPage.vala"
		_tmp4_ = _tmp3_;
#line 68 "/home/pa/Projects/sudoku/src/WinPage.vala"
		_tmp5_ = g_strconcat (_tmp4_, "</b>\n", NULL);
#line 68 "/home/pa/Projects/sudoku/src/WinPage.vala"
		_tmp6_ = _tmp5_;
#line 68 "/home/pa/Projects/sudoku/src/WinPage.vala"
		_tmp7_ = g_strconcat (_tmp6_, _ ("perfect!"), NULL);
#line 68 "/home/pa/Projects/sudoku/src/WinPage.vala"
		_tmp8_ = _tmp7_;
#line 68 "/home/pa/Projects/sudoku/src/WinPage.vala"
		gtk_label_set_markup (_tmp2_, _tmp8_);
#line 68 "/home/pa/Projects/sudoku/src/WinPage.vala"
		_g_free0 (_tmp8_);
#line 68 "/home/pa/Projects/sudoku/src/WinPage.vala"
		_g_free0 (_tmp6_);
#line 68 "/home/pa/Projects/sudoku/src/WinPage.vala"
		_g_free0 (_tmp4_);
#line 358 "WinPage.c"
	} else {
		gint _tmp9_;
		gint _tmp10_;
#line 69 "/home/pa/Projects/sudoku/src/WinPage.vala"
		_tmp9_ = sudoku_sudoku_board_get_fails (board);
#line 69 "/home/pa/Projects/sudoku/src/WinPage.vala"
		_tmp10_ = _tmp9_;
#line 69 "/home/pa/Projects/sudoku/src/WinPage.vala"
		if (_tmp10_ <= 3) {
#line 368 "WinPage.c"
			gchar* tmp = NULL;
			gchar* _tmp11_;
			GtkLabel* _tmp19_;
			const gchar* _tmp20_;
			gchar* _tmp21_;
			gchar* _tmp22_;
			gchar* _tmp23_;
			gchar* _tmp24_;
#line 70 "/home/pa/Projects/sudoku/src/WinPage.vala"
			_tmp11_ = g_strdup ("");
#line 70 "/home/pa/Projects/sudoku/src/WinPage.vala"
			tmp = _tmp11_;
#line 381 "WinPage.c"
			{
				gint i = 0;
#line 71 "/home/pa/Projects/sudoku/src/WinPage.vala"
				i = 0;
#line 386 "WinPage.c"
				{
					gboolean _tmp12_ = FALSE;
#line 71 "/home/pa/Projects/sudoku/src/WinPage.vala"
					_tmp12_ = TRUE;
#line 71 "/home/pa/Projects/sudoku/src/WinPage.vala"
					while (TRUE) {
#line 393 "WinPage.c"
						gint _tmp14_;
						gint _tmp15_;
						gint _tmp16_;
						const gchar* _tmp17_;
						gchar* _tmp18_;
#line 71 "/home/pa/Projects/sudoku/src/WinPage.vala"
						if (!_tmp12_) {
#line 401 "WinPage.c"
							gint _tmp13_;
#line 71 "/home/pa/Projects/sudoku/src/WinPage.vala"
							_tmp13_ = i;
#line 71 "/home/pa/Projects/sudoku/src/WinPage.vala"
							i = _tmp13_ + 1;
#line 407 "WinPage.c"
						}
#line 71 "/home/pa/Projects/sudoku/src/WinPage.vala"
						_tmp12_ = FALSE;
#line 71 "/home/pa/Projects/sudoku/src/WinPage.vala"
						_tmp14_ = i;
#line 71 "/home/pa/Projects/sudoku/src/WinPage.vala"
						_tmp15_ = sudoku_sudoku_board_get_fails (board);
#line 71 "/home/pa/Projects/sudoku/src/WinPage.vala"
						_tmp16_ = _tmp15_;
#line 71 "/home/pa/Projects/sudoku/src/WinPage.vala"
						if (!(_tmp14_ < _tmp16_)) {
#line 71 "/home/pa/Projects/sudoku/src/WinPage.vala"
							break;
#line 421 "WinPage.c"
						}
#line 72 "/home/pa/Projects/sudoku/src/WinPage.vala"
						_tmp17_ = tmp;
#line 72 "/home/pa/Projects/sudoku/src/WinPage.vala"
						_tmp18_ = g_strconcat (_tmp17_, "X", NULL);
#line 72 "/home/pa/Projects/sudoku/src/WinPage.vala"
						_g_free0 (tmp);
#line 72 "/home/pa/Projects/sudoku/src/WinPage.vala"
						tmp = _tmp18_;
#line 431 "WinPage.c"
					}
				}
			}
#line 74 "/home/pa/Projects/sudoku/src/WinPage.vala"
			_tmp19_ = self->priv->error_label;
#line 74 "/home/pa/Projects/sudoku/src/WinPage.vala"
			_tmp20_ = tmp;
#line 74 "/home/pa/Projects/sudoku/src/WinPage.vala"
			_tmp21_ = g_strconcat ("<span face=\"Daniel Black\" weight=\"bold\">", _tmp20_, NULL);
#line 74 "/home/pa/Projects/sudoku/src/WinPage.vala"
			_tmp22_ = _tmp21_;
#line 74 "/home/pa/Projects/sudoku/src/WinPage.vala"
			_tmp23_ = g_strconcat (_tmp22_, "</span>", NULL);
#line 74 "/home/pa/Projects/sudoku/src/WinPage.vala"
			_tmp24_ = _tmp23_;
#line 74 "/home/pa/Projects/sudoku/src/WinPage.vala"
			gtk_label_set_markup (_tmp19_, _tmp24_);
#line 74 "/home/pa/Projects/sudoku/src/WinPage.vala"
			_g_free0 (_tmp24_);
#line 74 "/home/pa/Projects/sudoku/src/WinPage.vala"
			_g_free0 (_tmp22_);
#line 69 "/home/pa/Projects/sudoku/src/WinPage.vala"
			_g_free0 (tmp);
#line 455 "WinPage.c"
		} else {
			GtkLabel* _tmp25_;
			gchar* _tmp26_;
			gchar* _tmp27_;
			gchar* _tmp28_;
			gchar* _tmp29_;
#line 76 "/home/pa/Projects/sudoku/src/WinPage.vala"
			_tmp25_ = self->priv->error_label;
#line 76 "/home/pa/Projects/sudoku/src/WinPage.vala"
			_tmp26_ = g_strconcat ("<span foreground=\"red\" weight=\"bold\">", _ ("broken series"), NULL);
#line 76 "/home/pa/Projects/sudoku/src/WinPage.vala"
			_tmp27_ = _tmp26_;
#line 76 "/home/pa/Projects/sudoku/src/WinPage.vala"
			_tmp28_ = g_strconcat (_tmp27_, "</span>", NULL);
#line 76 "/home/pa/Projects/sudoku/src/WinPage.vala"
			_tmp29_ = _tmp28_;
#line 76 "/home/pa/Projects/sudoku/src/WinPage.vala"
			gtk_label_set_markup (_tmp25_, _tmp29_);
#line 76 "/home/pa/Projects/sudoku/src/WinPage.vala"
			_g_free0 (_tmp29_);
#line 76 "/home/pa/Projects/sudoku/src/WinPage.vala"
			_g_free0 (_tmp27_);
#line 77 "/home/pa/Projects/sudoku/src/WinPage.vala"
			return;
#line 480 "WinPage.c"
		}
	}
#line 79 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp30_ = self->priv->points_label;
#line 79 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp31_ = sudoku_sudoku_board_get_points (board);
#line 79 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp32_ = _tmp31_;
#line 79 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp33_ = g_strdup_printf ("<b>%i</b>", _tmp32_);
#line 79 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp34_ = _tmp33_;
#line 79 "/home/pa/Projects/sudoku/src/WinPage.vala"
	gtk_label_set_markup (_tmp30_, _tmp34_);
#line 79 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_g_free0 (_tmp34_);
#line 80 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp35_ = self->priv->highscore_label;
#line 80 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp36_ = g_strdup_printf ("<b>%i</b>", highscore);
#line 80 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_tmp37_ = _tmp36_;
#line 80 "/home/pa/Projects/sudoku/src/WinPage.vala"
	gtk_label_set_markup (_tmp35_, _tmp37_);
#line 80 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_g_free0 (_tmp37_);
#line 507 "WinPage.c"
}


static void
sudoku_win_page_class_init (SudokuWinPageClass * klass)
{
#line 21 "/home/pa/Projects/sudoku/src/WinPage.vala"
	sudoku_win_page_parent_class = g_type_class_peek_parent (klass);
#line 21 "/home/pa/Projects/sudoku/src/WinPage.vala"
	g_type_class_add_private (klass, sizeof (SudokuWinPagePrivate));
#line 21 "/home/pa/Projects/sudoku/src/WinPage.vala"
	G_OBJECT_CLASS (klass)->finalize = sudoku_win_page_finalize;
#line 21 "/home/pa/Projects/sudoku/src/WinPage.vala"
	sudoku_win_page_signals[SUDOKU_WIN_PAGE_RETURN_TO_WELCOME_SIGNAL] = g_signal_new ("return-to-welcome", SUDOKU_TYPE_WIN_PAGE, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
#line 522 "WinPage.c"
}


static void
sudoku_win_page_instance_init (SudokuWinPage * self)
{
#line 21 "/home/pa/Projects/sudoku/src/WinPage.vala"
	self->priv = SUDOKU_WIN_PAGE_GET_PRIVATE (self);
#line 531 "WinPage.c"
}


static void
sudoku_win_page_finalize (GObject * obj)
{
	SudokuWinPage * self;
#line 21 "/home/pa/Projects/sudoku/src/WinPage.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SUDOKU_TYPE_WIN_PAGE, SudokuWinPage);
#line 22 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_g_object_unref0 (self->priv->error_label);
#line 23 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_g_object_unref0 (self->priv->points_label);
#line 24 "/home/pa/Projects/sudoku/src/WinPage.vala"
	_g_object_unref0 (self->priv->highscore_label);
#line 21 "/home/pa/Projects/sudoku/src/WinPage.vala"
	G_OBJECT_CLASS (sudoku_win_page_parent_class)->finalize (obj);
#line 549 "WinPage.c"
}


GType
sudoku_win_page_get_type (void)
{
	static volatile gsize sudoku_win_page_type_id__volatile = 0;
	if (g_once_init_enter (&sudoku_win_page_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SudokuWinPageClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) sudoku_win_page_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SudokuWinPage), 0, (GInstanceInitFunc) sudoku_win_page_instance_init, NULL };
		GType sudoku_win_page_type_id;
		sudoku_win_page_type_id = g_type_register_static (gtk_aspect_frame_get_type (), "SudokuWinPage", &g_define_type_info, 0);
		g_once_init_leave (&sudoku_win_page_type_id__volatile, sudoku_win_page_type_id);
	}
	return sudoku_win_page_type_id__volatile;
}




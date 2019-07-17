/* Difficulty.c generated by valac 0.40.15, the Vala compiler
 * generated from Difficulty.vala, do not modify */

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
#include <stdlib.h>
#include <string.h>
#include <glib/gi18n-lib.h>

typedef enum  {
	SUDOKU_DIFFICULTY_EASY,
	SUDOKU_DIFFICULTY_MEDIUM,
	SUDOKU_DIFFICULTY_HARD,
	SUDOKU_DIFFICULTY_EXPERT
} SudokuDifficulty;


#define SUDOKU_TYPE_DIFFICULTY (sudoku_difficulty_get_type ())



GType sudoku_difficulty_get_type (void) G_GNUC_CONST;
gchar* sudoku_difficulty_to_string (SudokuDifficulty self);
gchar* sudoku_difficulty_to_translated_string (SudokuDifficulty self);
SudokuDifficulty sudoku_difficulty_from_string (const gchar* input);
SudokuDifficulty* sudoku_difficulty_all (int* result_length1);


gchar*
sudoku_difficulty_to_string (SudokuDifficulty self)
{
	gchar* result = NULL;
#line 27 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
	switch (self) {
#line 27 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
		case SUDOKU_DIFFICULTY_EASY:
#line 58 "Difficulty.c"
		{
			gchar* _tmp0_;
#line 29 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			_tmp0_ = g_strdup ("simple");
#line 29 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			result = _tmp0_;
#line 29 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			return result;
#line 67 "Difficulty.c"
		}
#line 27 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
		case SUDOKU_DIFFICULTY_MEDIUM:
#line 71 "Difficulty.c"
		{
			gchar* _tmp1_;
#line 31 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			_tmp1_ = g_strdup ("easy");
#line 31 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			result = _tmp1_;
#line 31 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			return result;
#line 80 "Difficulty.c"
		}
#line 27 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
		case SUDOKU_DIFFICULTY_HARD:
#line 84 "Difficulty.c"
		{
			gchar* _tmp2_;
#line 33 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			_tmp2_ = g_strdup ("intermediate");
#line 33 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			result = _tmp2_;
#line 33 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			return result;
#line 93 "Difficulty.c"
		}
#line 27 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
		case SUDOKU_DIFFICULTY_EXPERT:
#line 97 "Difficulty.c"
		{
			gchar* _tmp3_;
#line 35 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			_tmp3_ = g_strdup ("expert");
#line 35 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			result = _tmp3_;
#line 35 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			return result;
#line 106 "Difficulty.c"
		}
		default:
		{
#line 37 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			g_assert_not_reached ();
#line 112 "Difficulty.c"
		}
	}
}


gchar*
sudoku_difficulty_to_translated_string (SudokuDifficulty self)
{
	gchar* result = NULL;
#line 42 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
	switch (self) {
#line 42 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
		case SUDOKU_DIFFICULTY_EASY:
#line 126 "Difficulty.c"
		{
			gchar* _tmp0_;
#line 44 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			_tmp0_ = g_strdup (_ ("Easy"));
#line 44 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			result = _tmp0_;
#line 44 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			return result;
#line 135 "Difficulty.c"
		}
#line 42 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
		case SUDOKU_DIFFICULTY_MEDIUM:
#line 139 "Difficulty.c"
		{
			gchar* _tmp1_;
#line 46 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			_tmp1_ = g_strdup (_ ("Medium"));
#line 46 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			result = _tmp1_;
#line 46 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			return result;
#line 148 "Difficulty.c"
		}
#line 42 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
		case SUDOKU_DIFFICULTY_HARD:
#line 152 "Difficulty.c"
		{
			gchar* _tmp2_;
#line 48 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			_tmp2_ = g_strdup (_ ("Hard"));
#line 48 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			result = _tmp2_;
#line 48 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			return result;
#line 161 "Difficulty.c"
		}
#line 42 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
		case SUDOKU_DIFFICULTY_EXPERT:
#line 165 "Difficulty.c"
		{
			gchar* _tmp3_;
#line 50 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			_tmp3_ = g_strdup (_ ("Master"));
#line 50 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			result = _tmp3_;
#line 50 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			return result;
#line 174 "Difficulty.c"
		}
		default:
		{
#line 52 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
			g_assert_not_reached ();
#line 180 "Difficulty.c"
		}
	}
}


SudokuDifficulty
sudoku_difficulty_from_string (const gchar* input)
{
	SudokuDifficulty result = 0;
	const gchar* _tmp0_;
	GQuark _tmp2_ = 0U;
#line 57 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
	static GQuark _tmp1_label0 = 0;
#line 57 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
	static GQuark _tmp1_label1 = 0;
#line 57 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
	static GQuark _tmp1_label2 = 0;
#line 57 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
	static GQuark _tmp1_label3 = 0;
#line 56 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
	g_return_val_if_fail (input != NULL, 0);
#line 57 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
	_tmp0_ = input;
#line 57 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
	_tmp2_ = (NULL == _tmp0_) ? 0 : g_quark_from_string (_tmp0_);
#line 57 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
	if (_tmp2_ == ((0 != _tmp1_label0) ? _tmp1_label0 : (_tmp1_label0 = g_quark_from_static_string ("simple")))) {
#line 57 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
		switch (0) {
#line 210 "Difficulty.c"
			default:
			{
#line 59 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
				result = SUDOKU_DIFFICULTY_EASY;
#line 59 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
				return result;
#line 217 "Difficulty.c"
			}
		}
	} else if (_tmp2_ == ((0 != _tmp1_label1) ? _tmp1_label1 : (_tmp1_label1 = g_quark_from_static_string ("easy")))) {
#line 57 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
		switch (0) {
#line 223 "Difficulty.c"
			default:
			{
#line 61 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
				result = SUDOKU_DIFFICULTY_MEDIUM;
#line 61 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
				return result;
#line 230 "Difficulty.c"
			}
		}
	} else if (_tmp2_ == ((0 != _tmp1_label2) ? _tmp1_label2 : (_tmp1_label2 = g_quark_from_static_string ("intermediate")))) {
#line 57 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
		switch (0) {
#line 236 "Difficulty.c"
			default:
			{
#line 63 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
				result = SUDOKU_DIFFICULTY_HARD;
#line 63 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
				return result;
#line 243 "Difficulty.c"
			}
		}
	} else if (_tmp2_ == ((0 != _tmp1_label3) ? _tmp1_label3 : (_tmp1_label3 = g_quark_from_static_string ("expert")))) {
#line 57 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
		switch (0) {
#line 249 "Difficulty.c"
			default:
			{
#line 65 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
				result = SUDOKU_DIFFICULTY_EXPERT;
#line 65 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
				return result;
#line 256 "Difficulty.c"
			}
		}
	} else {
#line 57 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
		switch (0) {
#line 262 "Difficulty.c"
			default:
			{
#line 67 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
				g_warning ("Difficulty.vala:67: Could not parse difficulty level. Falling back to " \
"Easy difficulty");
#line 68 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
				result = SUDOKU_DIFFICULTY_EASY;
#line 68 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
				return result;
#line 271 "Difficulty.c"
			}
		}
	}
}


SudokuDifficulty*
sudoku_difficulty_all (int* result_length1)
{
	SudokuDifficulty* result = NULL;
	SudokuDifficulty* _tmp0_;
	SudokuDifficulty* _tmp1_;
	gint _tmp1__length1;
#line 73 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
	_tmp0_ = g_new0 (SudokuDifficulty, 4);
#line 73 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
	_tmp0_[0] = SUDOKU_DIFFICULTY_EASY;
#line 73 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
	_tmp0_[1] = SUDOKU_DIFFICULTY_MEDIUM;
#line 73 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
	_tmp0_[2] = SUDOKU_DIFFICULTY_HARD;
#line 73 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
	_tmp0_[3] = SUDOKU_DIFFICULTY_EXPERT;
#line 73 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
	_tmp1_ = _tmp0_;
#line 73 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
	_tmp1__length1 = 4;
#line 73 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
	if (result_length1) {
#line 73 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
		*result_length1 = _tmp1__length1;
#line 303 "Difficulty.c"
	}
#line 73 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
	result = _tmp1_;
#line 73 "/home/pa/Projects/sudoku/src/logic/Difficulty.vala"
	return result;
#line 309 "Difficulty.c"
}


GType
sudoku_difficulty_get_type (void)
{
	static volatile gsize sudoku_difficulty_type_id__volatile = 0;
	if (g_once_init_enter (&sudoku_difficulty_type_id__volatile)) {
		static const GEnumValue values[] = {{SUDOKU_DIFFICULTY_EASY, "SUDOKU_DIFFICULTY_EASY", "easy"}, {SUDOKU_DIFFICULTY_MEDIUM, "SUDOKU_DIFFICULTY_MEDIUM", "medium"}, {SUDOKU_DIFFICULTY_HARD, "SUDOKU_DIFFICULTY_HARD", "hard"}, {SUDOKU_DIFFICULTY_EXPERT, "SUDOKU_DIFFICULTY_EXPERT", "expert"}, {0, NULL, NULL}};
		GType sudoku_difficulty_type_id;
		sudoku_difficulty_type_id = g_enum_register_static ("SudokuDifficulty", values);
		g_once_init_leave (&sudoku_difficulty_type_id__volatile, sudoku_difficulty_type_id);
	}
	return sudoku_difficulty_type_id__volatile;
}



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

namespace Sudoku {
    public class SudokuApp : Gtk.Application {
        private MainWindow window = null;
        public string[] args;


        public SudokuApp () {
            Object (application_id: "com.github.parnold-x.sudoku",
            flags: ApplicationFlags.FLAGS_NONE);
        }

        public override void activate () {
            if (get_windows () == null) {
                window = new MainWindow (this);
            } else {
                window.present ();
            }
        }

        public static void main (string[] args) {
            var app = new Sudoku.SudokuApp ();
            app.args = args;
            app.run (args);
        }
    }
}
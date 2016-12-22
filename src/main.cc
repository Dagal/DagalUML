/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 2; tab-width: 2 -*-  */
/*
 * main.cc
 * Copyright (C) 2016 Dejardin Gilbert <dejarding@gmail.com>
 * 
 * DagalUML is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * DagalUML is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <gtkmm/main.h>
#include <gtkmm/window.h>

#include <iostream>

#include "config.h"

#ifdef ENABLE_NLS
#  include <libintl.h>
#endif

int
main (int argc, char *argv[])
{
	Gtk::Main kit(argc, argv);

	Gtk::Window* main_win = new Gtk::Window (Gtk::WINDOW_TOPLEVEL);

	if (main_win)
	{
		main_win->set_title ("DagalUML");
		kit.run(*main_win);
	}
	
	return 0;
}


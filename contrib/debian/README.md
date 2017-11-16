
Debian
====================
This directory contains files used to package koobitd/koobit-qt
for Debian-based Linux systems. If you compile koobitd/koobit-qt yourself, there are some useful files here.

## koobit: URI support ##


koobit-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install koobit-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your koobit-qt binary to `/usr/bin`
and the `../../share/pixmaps/koobit128.png` to `/usr/share/pixmaps`

koobit-qt.protocol (KDE)


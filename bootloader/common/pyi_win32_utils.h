/*
 * ****************************************************************************
 * Copyright (c) 2013, PyInstaller Development Team.
 * Distributed under the terms of the GNU General Public License with exception
 * for distributing bootloader.
 *
 * The full license is in the file COPYING.txt, distributed with this software.
 * ****************************************************************************
 */


// TODO Convert this file to file ./common/pyi_win32_utils.h
#ifndef UTILS_H
#define UTILS_H


#ifdef _WIN32
int CreateActContext(const char *workpath, const char *thisfile);
void ReleaseActContext(void);
char * pyi_win32_utils_to_utf8(char *buffer, const wchar_t *str, int n)
#endif


#endif /* UTILS_H */
#ifndef READFILE_H
#define READFILE_H

#include <stdio.h>

#define MAXLINE 82


/*
 * Opens a given file
 *
 * Param: filename string
 * Return: FILE pointer or nullptr
 */
FILE *get_file(const char *filename);


/*
 * Checks if file is valid
 *
 * Params: FILE pointer, filename string
 */
void is_invalid_file(const FILE *file, const char *filename);


/*
 * Checks if given file is of type .asm
 *
 * Param: filename string
 * Return: true if .asm file, false otherwise
 */
bool is_asm_file(const char *filename);


/*
 * Gets the current line of a file and writes it into line
 *
 * Param: valid FILE pointer, line string to write to
 */
void get_line(const FILE *file, char *line);


#endif //READFILE_H

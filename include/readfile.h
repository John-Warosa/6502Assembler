#ifndef READFILE_H
#define READFILE_H

#include <stdio.h>


/*
 * Opens a given file and checks its validity
 * Throws an error if file is invalid
 *
 * Param: filename string
 * Return: valid FILE pointer
 */
FILE *get_valid_file(const char *filename);


/*
 * Checks if file is valid
 * Throws an error if file is invalid
 *
 * Params: FILE pointer, filename string
 */
void handle_invalid_file(FILE *file, const char *filename);


/*
 * Checks if given file is of type .asm
 *
 * Param: filename string
 * Return: true if .asm file, false otherwise
 */
bool is_asm_file(const char *filename);


/*
 * Gets the current line of a file
 *
 * Param: valid FILE pointer
 * Return: string of current line
 */
char *get_line(FILE *file);


#endif //READFILE_H

#ifndef ASSEMBLER_H
#define ASSEMBLER_H

#include "parser.h"
#include <stdio.h>


/*
 * Assembles a given file and creates a file of hex codes
 *
 * Param: FILE pointer
 */
void assemble_file(FILE *file);


/*
 * Writes the bytes to a .hex file
 *
 * Param: Bytes struct contining hex codes
 */
void write_file(struct Bytes bytes);


/*
 * takes a .asm and turns it into a .hex file
 *
 * Param: filename string
 */
void asm_to_hex(char *filename);


#endif //ASSEMBLER_H

#ifndef ASSEMBLER_H
#define ASSEMBLER_H

#include "parser.h"


/*
 * Assembles a given file and creates a file of hex codes
 *
 * Param: filename string
 */
void assemble_file(char *filename);


/*
 * Writes the bytes to a .hex file
 *
 * Param: Bytes struct contining hex codes
 */
void write_file(struct Bytes bytes);


#endif //ASSEMBLER_H

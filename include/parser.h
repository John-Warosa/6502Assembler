#ifndef PARSER_H
#define PARSER_H

#include "addressmodes.h"


/*------------------------------------------------------------------------------
 * This interface takes a tokenized line and turns 
 * the tokens into bytecode. The resulting code has a size 
 * of 1 to 3 bytes, depending on the instruction and address mode
------------------------------------------------------------------------------*/



struct Bytecode {
	int numBytes;
	int Bytes[3];
};


/*
 * Gets the byte representation of an instruction
 *
 * Param: line string
 * Return: Bytecode struct representing the input
 */
struct Bytecode get_bytes(char *line);


/*
 * Gets the number of bytes a line takes up
 *
 * Param: address mode
 * return: number of bytes per line (1 to 3)
 */
int get_num_bytes(enum AddressModes addressMode);



int get_instruction_byte(char *menmonic, enum AddressModes addressMode);


int get_address_byte(char *address);


#endif //PARSER_H

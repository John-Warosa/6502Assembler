#ifndef PARSER_H
#define PARSER_H

#include "tokenizer.h"


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
struct Bytecode get_bytes(struct Tokens tokens);


int get_instruction_byte(char *instruction);


int get_address_byte(char *address);


#endif //PARSER_H

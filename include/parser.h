#ifndef PARSER_H
#define PARSER_H


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


#endif //PARSER_H

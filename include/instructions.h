#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H


struct Instruction {
	char *name;
	struct {
		unsigned int accumulator	: 1
		unsigned int absolute		: 1
		unsigned int absoluteX		: 1
		unsigned int absoluteY		: 1
		unsigned int immeiate		: 1
		unsigned int implied		: 1
		unsigned int indirect		: 1
		unsigned int xIndirect		: 1
		unsigned int indirectY		: 1
		unsigned int relative		: 1
		unsigned int zeropage		: 1
		unsigned int zeropageX		: 1
		unsigned int zeropageY		: 1
	} modes;
};


extern const struct Instruction instructionList[56];


#endif INSTRUCTIONS_H

#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

#include "addressmodes.h"


struct Instruction {
	char *name;
	int numModes;
	
	// no instruction has more than 8 modes
	enum AddressModes modes[8];
	int opcodes[8];
};


extern const struct Instruction instructionList[56];


#endif //INSTRUCTIONS_H

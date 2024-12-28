#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

#include "addressmodes.h"


typedef struct {
	char *name;
	int numModes;
	
	// no instruction has more than 8 modes
    struct {
        AddressMode mode;
        unsigned  opcode;
    } info[8];

} Instruction;

extern const Instruction instructionList[];


#endif //INSTRUCTIONS_H

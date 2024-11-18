#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

#include "addressmodes.h"



/*------------------------------------------------------------------------------
* This interface defines all legal instructions of the 6502
* Instructions are stored in an array
*
* Every Instruction struct contains:
*	- name string (3 letter mnemonic)
*	- number of valid address modes
*	- array of all valid address modes
*	- array of all valid opcodes in order 
*	  corresponding to address mode
------------------------------------------------------------------------------*/



struct Instruction {
	char *name;
	int numModes;
	
	// no instruction has more than 8 modes
	enum AddressModes modes[8];
	int opcodes[8];
};


extern const struct Instruction instructionList[56];


#endif //INSTRUCTIONS_H

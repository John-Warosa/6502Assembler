#include "parser.h"
#include "tokenizer.h"
#include "instructions.h"
#include "errorhandler.h"
#include <string.h>

#define INST_SIZE 4
#define ADDR_SIZE 8


struct Bytecode get_bytes(char *line) {
	struct Bytecode bytes;
	struct Tokens tokens = get_tokens(line);
	
	tokens.mnemonic = malloc()
}


int get_instruction_byte(char *mnemonic, enum AddressModes addressMode) {
	struct Instruction instruction;

	for (int i = 0; i < INSTRUCTION_COUNT; ++i) {
		instruction = InstructionList[i];

		if (strcmp(mnemonic, instruction.name))
			continue;

		for (int j = 0; j < instruction.numModes; ++j) {
			if (addressmodes != instruction.modes[j]) 
				continue;

			return instruction.opcodes[j];
		}

		throw_error(0);
	}

	throw_error(0);
}

#include "instructions.h"


const Instruction instructionList[] = {
	{
		.name = "ADC",
		.numModes = 8,
        .info = {
            { .mode = ABSOLUTE,     .opcode = 0x6d, },
            { .mode = ABSOLUTE_X,   .opcode = 0x7d, },
            { .mode = ABSOLUTE_Y,   .opcode = 0x79, },
            { .mode = IMMEDIATE,    .opcode = 0x69, },
            { .mode = X_INDIRECT,   .opcode = 0x61, },
            { .mode = INDIRECT_Y,   .opcode = 0x71, },
            { .mode = ZEROPAGE,     .opcode = 0x65, },
            { .mode = ZEROPAGE_X,   .opcode = 0x75, },
        },
	},

	{
		.name = "AND",
		.numModes = 8,
        .info = {
            { .mode = ABSOLUTE,     .opcode = 0x2d, },
            { .mode = ABSOLUTE_X,   .opcode = 0x3d, },
            { .mode = ABSOLUTE_Y,   .opcode = 0x39, },
            { .mode = IMMEDIATE,    .opcode = 0x29, },
            { .mode = X_INDIRECT,   .opcode = 0x21, },
            { .mode = INDIRECT_Y,   .opcode = 0x31, },
            { .mode = ZEROPAGE,     .opcode = 0x25, },
            { .mode = ZEROPAGE_X,   .opcode = 0x35, },
        },
	},

	{
		.name = "ASL",
		.numModes = 5,
        .info = {
            { .mode = ACCUMULATOR,  .opcode = 0x0a, },
            { .mode = ABSOLUTE,     .opcode = 0x0e, },
            { .mode = ABSOLUTE_X,   .opcode = 0x1e, },
            { .mode = ZEROPAGE,     .opcode = 0x06, },
            { .mode = ZEROPAGE_X,   .opcode = 0x16, },
        },
	},

	{
		.name = "BCC",
		.numModes = 1,
        .info = {
            { .mode = ZEROPAGE, .opcode = 0x90 },
        },
	},

	{
		.name = "BCS",
		.numModes = 1,
        .info = {
            { .mode = ZEROPAGE, .opcode = 0xb0, },
        },
	},

	{
		.name = "BEQ",
		.numModes = 1,
        .info = {
            { .mode = ZEROPAGE, .opcode = 0xf0, },
        },
	},

	{
		.name = "BIT",
		.numModes = 2,
        .info = {
            { .mode = ABSOLUTE, .opcode = 0x2c, },
            { .mode = ZEROPAGE, .opcode = 0x24, },
        },
	},

	{
		.name = "BMI",
		.numModes = 1,
        .info = {
            { .mode = ZEROPAGE, .opcode = 0x30, },
        },
	},

	{
		.name = "BNE",
		.numModes = 1,
        .info = {
            { .mode = ZEROPAGE, .opcode = 0xd0, },
        },
	},

	{
		.name = "BPL",
		.numModes = 1,
        .info = {
            { .mode = ZEROPAGE, .opcode = 0x10, },
        },
	},

	{
		.name = "BRK",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0x00, },
        },
	},

	{
		.name = "BVC",
		.numModes = 1,
        .info = {
            { .mode = ZEROPAGE, .opcode = 0x50 },
		},
	},

	{
		.name = "BVS",
		.numModes = 1,
        .info = {
            { .mode = ZEROPAGE, .opcode = 0x70, },
        },
	},

	{
		.name = "CLC",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0x18, },
        },
	},

	{
		.name = "CLD",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0xd8, },
        },
	},

	{
		.name = "CLI",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0x58, },
        },
	},

	{
		.name = "CLV",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0xb8, },
        },
	},

	{
		.name = "CMP",
		.numModes = 8,
        .info = {
            { .mode = ABSOLUTE,     .opcode = 0xcd, },
            { .mode = ABSOLUTE_X,   .opcode = 0xdd, },
            { .mode = ABSOLUTE_Y,   .opcode = 0xd9, },
            { .mode = IMMEDIATE,    .opcode = 0xc9, },
            { .mode = X_INDIRECT,   .opcode = 0xc1, },
            { .mode = INDIRECT_Y,   .opcode = 0xd1, },
            { .mode = ZEROPAGE,     .opcode = 0xc5, },
            { .mode = ZEROPAGE_X,   .opcode = 0xd5, },
        },
	},

	{
		.name = "CPX",
		.numModes = 3,
        .info = {
            { .mode = ABSOLUTE, .opcode = 0xec, },
            { .mode = IMMEDIATE, .opcode = 0xe0, },
            { .mode = ZEROPAGE, .opcode = 0xe4, },
        },
	},

	{
		.name = "CPY",
		.numModes = 3,
        .info = {
            { .mode = ABSOLUTE,     .opcode = 0xcc, },
            { .mode = IMMEDIATE,    .opcode = 0xc0, },
            { .mode = ZEROPAGE,     .opcode = 0xc4, },
        },
	},

	{
		.name = "DEC",
		.numModes = 4,
        .info = {
            { .mode = ABSOLUTE,     .opcode = 0xce, },
            { .mode = ABSOLUTE_X,   .opcode = 0xde, },
            { .mode = ZEROPAGE,     .opcode = 0xc6, },
            { .mode = ZEROPAGE_X,   .opcode = 0xd6, },
        },
	},

	{
		.name = "DEX",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0xca, },
        },
	},

	{
		.name = "DEY",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0x88, },
        },
	},

	{
		.name = "EOR",
		.numModes = 8,
        .info = {
            { .mode = ABSOLUTE,     .opcode = 0x4d, },
            { .mode = ABSOLUTE_X,   .opcode = 0x5d, },
            { .mode = ABSOLUTE_Y,   .opcode = 0x59, },
            { .mode = IMMEDIATE,    .opcode = 0x49, },
            { .mode = X_INDIRECT,   .opcode = 0x41, },
            { .mode = INDIRECT_Y,   .opcode = 0x51, },
            { .mode = ZEROPAGE,     .opcode = 0x45, },
            { .mode = ZEROPAGE_X,   .opcode = 0x55, },
        },
	},

	{
		.name = "INC",
		.numModes = 4,
        .info = {
            { .mode = ABSOLUTE,     .opcode = 0xee, },
            { .mode = ABSOLUTE_X,   .opcode = 0xfe, },
            { .mode = ZEROPAGE,     .opcode = 0xe6, },
            { .mode = ZEROPAGE_X,   .opcode = 0xf6, },
        },
	},

	{
		.name = "INX",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0x38, },
        },
	},

	{
		.name = "INY",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0xc8, },
        },
	},

	{
		.name = "JMP",
		.numModes = 2,
        .info = {
            { .mode = ABSOLUTE,     .opcode = 0x4c, },
            { .mode = ZEROPAGE,     .opcode = 0x6c, },
        }
	},

	{
		.name = "JSR",
		.numModes = 1,
        .info = {
            { .mode = ABSOLUTE, .opcode = 0x20, },
        },
	},

	{
		.name = "LDA",
		.numModes = 8,
        .info = {
            { .mode = ABSOLUTE,     .opcode = 0xad, },
            { .mode = ABSOLUTE_X,   .opcode = 0xbd, },
            { .mode = ABSOLUTE_Y,   .opcode = 0xb9, },
            { .mode = IMMEDIATE,    .opcode = 0xa9, },
            { .mode = X_INDIRECT,   .opcode = 0xa1, },
            { .mode = INDIRECT_Y,   .opcode = 0xb1, },
            { .mode = ZEROPAGE,     .opcode = 0xa5, },
            { .mode = ZEROPAGE_X,   .opcode = 0xb5, },
        },
	},

	{
		.name = "LDX",
		.numModes = 5,
        .info = {
            { .mode = ABSOLUTE,     .opcode = 0xae, },
            { .mode = ABSOLUTE_Y,   .opcode = 0xbe, },
            { .mode = IMMEDIATE,    .opcode = 0xa2, },
            { .mode = ZEROPAGE,     .opcode = 0xa6, },
            { .mode = ZEROPAGE_Y,   .opcode = 0xb6, },
        },
	},

	{
		.name = "LDY",
		.numModes = 5,
        .info = {
            { .mode = ABSOLUTE,     .opcode = 0xac, },
            { .mode = ABSOLUTE_X,   .opcode = 0xbc, },
            { .mode = IMMEDIATE,    .opcode = 0xa0, },
            { .mode = ZEROPAGE,     .opcode = 0xa4, },
            { .mode = ZEROPAGE_X,   .opcode = 0xb4, },
        },
	},

	{
		.name = "LSR",
		.numModes = 5,
        .info = {
            { .mode = ACCUMULATOR,  .opcode = 0x4a, },
            { .mode = ABSOLUTE,     .opcode = 0x4e, },
            { .mode = ABSOLUTE_X,   .opcode = 0x5e, },
            { .mode = ZEROPAGE,     .opcode = 0x46, },
            { .mode = ZEROPAGE_X,   .opcode = 0x56, },
        },
	},

	{
		.name = "NOP",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0xea, },
        },
	},

	{
		.name = "ORA",
		.numModes = 8,
        .info = {
            { .mode = ABSOLUTE,     .opcode = 0x0d, },
            { .mode = ABSOLUTE_X,   .opcode = 0x1d, },
            { .mode = ABSOLUTE_Y,   .opcode = 0x19, },
            { .mode = IMMEDIATE,    .opcode = 0x09, },
            { .mode = X_INDIRECT,   .opcode = 0x01, },
            { .mode = INDIRECT_Y,   .opcode = 0x11, },
            { .mode = ZEROPAGE,     .opcode = 0x05, },
            { .mode = ZEROPAGE_X,   .opcode = 0x15, },
        },
	},

	{
		.name = "PHA",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0x48, },
        },
	},

	{
		.name = "PHP",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0x08, },
        },
	},

	{
		.name = "PLA",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0x68, },
        },
	},

	{
		.name = "PLP",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0x28, },
        },
	},

	{
		.name = "ROL",
		.numModes = 5,
        .info = {
            { .mode = ACCUMULATOR,  .opcode = 0x2a, },
            { .mode = ABSOLUTE,     .opcode = 0x2e, },
            { .mode = ABSOLUTE_X,   .opcode = 0x3e, },
            { .mode = ZEROPAGE,     .opcode = 0x26, },
            { .mode = ZEROPAGE_X,   .opcode = 0x36, },
        },
	},

	{
		.name = "ROL",
		.numModes = 5,
        .info = {
            { .mode = ACCUMULATOR,  .opcode = 0x6a, },
            { .mode = ABSOLUTE,     .opcode = 0x6e, },
            { .mode = ABSOLUTE_X,   .opcode = 0x7e, },
            { .mode = ZEROPAGE,     .opcode = 0x66, },
            { .mode = ZEROPAGE_X,   .opcode = 0x76, },
        },
	},

	{
		.name = "RTI",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0x40, },
        },
	},

	{
		.name = "RTS",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0x28, },
        },
	},

	{
		.name = "SBC",
		.numModes = 8,
        .info = {
            { .mode = ABSOLUTE,     .opcode = 0xed, },
            { .mode = ABSOLUTE_X,   .opcode = 0xfd, },
            { .mode = ABSOLUTE_Y,   .opcode = 0xf9, },
            { .mode = IMMEDIATE,    .opcode = 0xe9, },
            { .mode = X_INDIRECT,   .opcode = 0xe1, },
            { .mode = INDIRECT_Y,   .opcode = 0xf1, },
            { .mode = ZEROPAGE,     .opcode = 0xe5, },
            { .mode = ZEROPAGE_X,   .opcode = 0xf5, },
        },
	},

	{
		.name = "SEC",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0x38, },
        },
	},

	{
		.name = "SED",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0xf8, },
        },
	},

	{
		.name = "SEI",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0x78, },
        },
	},

	{
		.name = "STA",
		.numModes = 7,
        .info = {
            { .mode = ABSOLUTE,     .opcode = 0x8d, },
            { .mode = ABSOLUTE_X,   .opcode = 0x9d, },
            { .mode = ABSOLUTE_Y,   .opcode = 0x99, },
            { .mode = X_INDIRECT,   .opcode = 0x81, },
            { .mode = INDIRECT_Y,   .opcode = 0x91, },
            { .mode = ZEROPAGE,     .opcode = 0x85, },
            { .mode = ZEROPAGE_X,   .opcode = 0x95, },
        },
	},

	{
		.name = "STX",
		.numModes = 3,
        .info = {
            { .mode = ABSOLUTE,     .opcode = 0x8e, },
            { .mode = ZEROPAGE,     .opcode = 0x86, },
            { .mode = ZEROPAGE_Y,   .opcode = 0x96, },
        }
	},

	{
		.name = "STY",
		.numModes = 3,
        .info = {
            { .mode = ABSOLUTE,     .opcode = 0x8c, },
            { .mode = ZEROPAGE,     .opcode = 0x84, },
            { .mode = ZEROPAGE_X,   .opcode = 0x94, },
        }
	},

	{
		.name = "TAX",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0xaa, },
        },
	},

	{
		.name = "TAY",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0xa8, },
        },
	},

	{
		.name = "TSX",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0xba, },
        },
	},

	{
		.name = "TXA",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0x8a, },
        },
	},

	{
		.name = "TXS",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0x9a, },
        },
	},

	{
		.name = "TYA",
		.numModes = 1,
        .info = {
            { .mode = IMPLIED, .opcode = 0x98, },
        },
	},
};


#include <stdio.h>

int main() {
    printf("%lu", sizeof(instructionList) / sizeof(Instruction));
}

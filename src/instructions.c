#include "instructions.h"


const struct InstructionList[56] = {
	{
		.name = "ADC",
		.numModes = 8,
		.modes = {
			ABSOLUTE,
			ABSOLUTE_X,
			ABSOLUTE_Y,
			IMMEDIATE,
			X_INDIRECT,
			INDIRECT_Y,
			ZEROPAGE,
			ZEROPAGE_X,
		},
		.opcodes = {
			0x6d,
			0x7d,
			0x79,
			0x69,
			0x61,
			0x71,
			0x65,
			0x75,
		}
	},

	{
		.name = "AND",
		.numModes = 8,
		.modes = {
			ABSOLUTE,
			ABSOLUTE_X,
			ABSOLUTE_Y,
			IMMEDIATE,
			X_INDIRECT,
			INDIRECT_Y,
			ZEROPAGE,
			ZEROPAGE_X,
		},
		.opcodes = {
			0x2d,
			0x3d,
			0x39,
			0x29,
			0x21,
			0x31,
			0x25,
			0x35,
		}
	},

	{
		.name = "ASL",
		.numModes = 5,
		.modes = {
			ACCUMULATOR,
			ABSOLUTE,
			ABSOLUTE_X,
			ZEROPAGE,
			ZEROPAGE_X,
		},
		.opcodes = {
			0x0a,
			0x0e,
			0x1e,
			0x06,
			0x16,
		}
	},

	{
		.name = "BCC",
		.numModes = 1,
		.modes = {
			ZEROPAGE,
		},
		.opcodes = {
			0x90,
		}
	},

	{
		.name = "BCS",
		.numModes = 1,
		{
			ZEROPAGE,
		},
		.opcodes = {
			0xb0,
		}
	},

	{
		.name = "BEQ",
		.numModes = 1,
		.modes = {
			ZEROPAGE,
		},
		.opcodes = {
			0xf0,
		}
	},

	{
		.name = "BIT",
		.numModes = 2,
		.modes = {
			ABSOLUTE,
			ZEROPAGE,
		},
		.opcodes = {
			0x2c,
			0x24,
		}
	},

	{
		.name = "BMI",
		.numModes = 1,
		.modes = {
			ZEROPAGE,
		},
		.opcodes = {
			0x30,
		}
	},

	{
		.name = "BNE",
		.numModes = 1,
		.modes = {
			ZEROPAGE
		},
		.opcodes = {
			0xd0,
		}
	},

	{
		.name = "BPL",
		.numModes = 1,
		.modes = {
			ZEROPAGE,
		},
		.opcodes = {
			0x10,
		}
	},

	{
		.name = "BRK",
		.numModes = 1,
		.modes = {
			IMPLIED,
		},
		.opcodes = {
			0x00,
		}
	},

	{
		.name = "BVC",
		.numModes = 1,
		.modes = {
			ZEROPAGE,
		},
		.opcodes = {
			0x50,
		}
	},

	{
		.name = "BVS",
		.numModes = 1,
		.modes = {
			ZEROPAGE,
		},
		.opcodes = {
			0x70,
		}
	},

	{
		.name = "CLC",
		.numModes = 1,
		.modes = {
			IMPLIED,
		},
		.opcodes = {
			0x18,
		}
	},

	{
		.name = "CLD",
		.numModes = 1,
		.modes = {
			IMPLIED,
		},
		.opcodes = {
			0xd8,
		}
	},

	{
		.name = "CLI",
		.numModes = 1,
		.modes = {
			IMPLIED,
		},
		.opcodes = {
			0x58,
		}
	},

	{
		.name = "CLV",
		.numModes = 1,
		.modes = {
			IMPLIED,
		},
		.opcodes = {
			0xb8,
		}
	},

	{
		.name = "CMP",
		.numModes = 8,
		.modes = {
			ABSOLUTE,
			ABSOLUTE_X,
			ABSOLUTE_Y,
			IMMEDIATE,
			X_INDIRECT,
			INDIRECT_Y,
			ZEROPAGE,
			ZEROPAGE_X,
		},
		.opcodes = {
			0xcd,
			0xdd,
			0xd9,
			0xc9,
			0xc1,
			0xd1,
			0xc5,
			0xd5,
		}
	},

	{
		.name = "CPX",
		.numModes = 3,
		.modes = {
			ABSOLUTE,
			IMMEDIATE,
			ZEROPAGE,
		},
		.opcodes = {
			0xec,
			0xe0,
			0xe4,
		}
	},

	{
		.name = "CPY",
		.numModes = 3,
		.modes = {
			ABSOLUTE,
			IMMEDIATE,
			ZEROPAGE,
		},
		.opcodes = {
			0xcc,
			0xc0,
			0xc4,
		}
	},

	{
		.name = "DEC",
		.numModes = 4,
		.modes = {
			ABSOLUTE,
			ABSOLUTE_X,
			ZEROPAGE,
			ZEROPAGE_X,
		},
		.opcodes = {
			0xce,
			0xde,
			0xc6,
			0xd6,
		}
	},

	{
		.name = "DEX",
		.numModes = 1,
		.modes = {
			IMPLIED,
		},
		.opcodes = {
			0xca,
		}
	},

	{
		.name = "DEY",
		.numModes = 1,
		.modes = {
			IMPLIED,
		},
		.opcodes = {
			0x88,
		}
	},

	{
		.name = EOR,
		.numModes = 8,
		.modes = {
			ABSOLUTE,
			ABSOLUTE_X,
			ABSOLUTE_Y,
			IMMEDIATE,
			X_INDIRECT,
			INDIRECT_Y,
			ZEROPAGE,
			ZEROPAGE_Y,
		},
		.opcodes = {
			0x4d,
			0x5d,
			0x59,
			0x49,
			0x41,
			0x51,
			0x45,
			0x55,
		}
	},

	{
		.name = "INC",
		.numModes = 4,
		.modes = {
			ABSOLUTE,
			ABSOLUTE_X,
			ZEROPAGE,
			ZEROPAGE_X,
		},
		.opcodes = {
			0xee,
			0xfe,
			0xe6,
			0xf6,
		}
	},

	{
		.name = "INX",
		.numModes = 1,
		.modes = {
			IMPLIED,
		},
		.opcodes = {
			0x38,
		}
	},

	{
		.name = "INY",
		.numModes = 1,
		.modes = {
			IMPLIED,
		},
		.opcodes = {
			0xc8,
		}
	},

	{
		.name = "JMP",
		.numModes = 2,
		.modes = {
			ABSOLUTE,
			INDIRECT,
		},
		.opcodes = {
			0x4c,
			0x6c,
		}
	},

	{
		.name = "JSR",
		.numModes = 1,
		.modes = {
			ABSOLUTE,
		},
		.opcodes = {
			0x20,
		}
	},

	{
		.name = "LDA",
		.numModes = 8,
		.modes = {
			ASBOLUTE,
			ABSOLUTE_X,
			ABSOLUTE_Y,
			IMMEDIATE,
			X_INDIRECT,
			INDIRECT_Y,
			ZEROPAGE,
			ZEROPAGE_X,
		},
		.opcodes = {
			0xad,
			0xbd,
			0xb9,
			0xa9,
			0xa1,
			0xb1,
			0xa5,
			0xb5,
		}
	},

	{
		.name = "LDX",
		.numModes = 5,
		.modes = {
			ABSOLUTE,
			ABSOLUTE_Y,
			IMMEDIATE,
			ZEROPAGE,
			ZEROPAGE_Y,
		},
		.opcodes = {
			0xae,
			0xbe,
			0xa2,
			0xa6,
			0xb6,
		}
	},

	{
		.name = "LDY",
		.numModes = 5,
		.modes = {
			ABSOLUTE,
			ABSOLUTE_X,
			IMMEDIATE,
			ZEROPAGE,
			ZEROPAGE_X,
		},
		.opcodes = {
			0xac,
			0xbc,
			0xa0,
			0xa4,
			0xb4,
		}
	},

	{
		.name = "LSR",
		.numModes = 5,
		.modes = {
			ACCUMULATOR,
			ABSOLUTE,
			ABSOLUTE_X,
			ZERPAGE,
			ZEROPAGE_X,
		},
		.opcodes = {
			0x4a,
			0x4e,
			0x5e,
			0x46,
			0x56,
		}
	},

	{
		.name = "NOP",
		.numModes = 1,
		.modes = {
			IMPLIED,
		},
		.opcodes = {
			0xea,
		}
	}
}


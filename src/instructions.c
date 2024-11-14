#include "instructions.h"


const struct InstructionList[56] = {
	{
		"ADC",
		{
			.absolute		=	1,
			.absoluteX		=	1,
			.absoluetY		=	1,
			.immediate		=	1,
			.xIndirect		=	1,
			.indirectY		=	1,
			.zeropage		=	1,
			.zeropageX		=	1,
		}
	},

	{
		"AND",
		{
			.absolute		=	1,
			.absoluteX		=	1,
			.absoluetY		=	1,
			.immediate		=	1,
			.xIndirect		=	1,
			.indirectY		=	1,
			.zeropage		=	1,
			.zeropageX		=	1,
		}
	},

	{
		"ASL",
		{
			.accumulator	=	1,
			.absolute		=	1,
			.absoluteX		=	1,
			.zeropage		=	1,
			.zeropageX		=	1,
		}
	},

	{
		"BCC",
		{
			.relative		=	1,
		}
	},

	{
		"BCS",
		{
			.relative		=	1,
		}
	},

	{
		"BEQ",
		{
			.relative		=	1,
		}
	},

	{
		"BIT",
		{
			.absolute		=	1,
			.zeropage		=	1,
		}
	},

	{
		"BMI",
		{
			.relative		=	1,
		}
	},

	{
		"BNE",
		{
			.relative		=	1,
		}
	},

	{
		"BPL",
		{
			.relative		=	1,
		}
	},

	{
		"BRK",
		{
			.implied		=	1,
		}
	},

	{
		"BVC",
		{
			.relative		=	1,
		}
	},

	{
		"BVS",
		{
			.relative		=	1,
		}
	},

	{
		"CLC",
		{
			.implied		=	1,
		}
	},

	{
		"CLD",
		{
			.implied		=	1,
		}
	},
	{
		"CLI",
		{
			.implied		=	1,
		}
	},

	{
		"CLV",
		{
			.implied		=	1,
		}
	},

	{
		"CMP",
		{
			.absolute		=	1,
			.absoluteX		=	1,
			.absoluetY		=	1,
			.immediate		=	1,
			.xIndirect		=	1,
			.indirectY		=	1,
			.zeropage		=	1,
			.zeropageX		=	1,
		}
	},

	{
		"CPX",
		{
			.absolute		=	1,
			.immediate		=	1,
			.zeropage		=	1,
		}
	},

	{
		"CPY",
		{
			.absolute		=	1,
			.immediate		=	1,
			.zeropage		=	1,
		}
	},

	{
		"DEC",
		{
			.absolute		=	1,
			.absoluteX		=	1,
			.zeropage		=	1,
			.zeropageX		=	1,
		}
	},

	{
		"DEX",
		{
			.implied		=	1,
		}
	},

	{
		"DEY",
		{
			.implied		=	1,
		}
	},

{
		"EOR",
	{
			.absolute		=	1,

		}	
	},
}

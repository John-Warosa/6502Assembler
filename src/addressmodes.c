#include "addressmodes.h"


static const char *addressTemplates[12] = {
	"A",			// ACCUMULATOR
	"$****",		// ABSOLUTE
	"$****,X",		// ABSOLUTE_X
	"$****,Y",		// ABSOLUTE_Y
	"#$**",			// IMMEDIATE
	"",				// IMPLIED
	"($****)",		// INDIRECT
	"($**,X)",		// X_INDIRECT
	"($**),Y",		// INDIRECT_Y
	"$**",			// ZEROPAGE
	"$**,X",		// ZEROPAGE_X
	"$**,Y",		// ZEROPAGE_Y
};

#include "addressmodes.h"
#include <string.h>
#include <ctype.h>


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


bool match_address_mode(char *address, const char *addressTemplate) {
	int len = strlen(addressTemplate);

	for (int i = 0; i < len; ++i) {
		if (addressTemplate[i] == '*') {
			if (!isxdigit(address[i])) {
				return false;
			}
		}
	}
}

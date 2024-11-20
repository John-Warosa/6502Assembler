#include "addressmodes.h"
#include <string.h>
#include <ctype.h>

#define TEMPLATE_COUNT 12


static const char *addressTemplates[TEMPLATE_COUNT] = {
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


enum AddressModes get_address_mode(char *address) {
	for (int i = 0; i < TEMPLATE_COUNT; ++i) {
		if (match_address_mode(address, addressTemplates[i]))
			return i+1;
	}

	return INVALID;
}


bool match_address_mode(char *address, const char *addressTemplate) {
	int len = strlen(addressTemplate);

	for (int i = 0; i < len; ++i) {
		if (addressTemplate[i] == '*') {
			if (!isxdigit(address[i])) {
				return false;
			}
		}
		else if (address[i] != addressTemplate[i])
			return false;
	}

	return true;
}

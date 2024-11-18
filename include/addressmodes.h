#ifndef ADDRESSMODES_H
#define ADDRESSMODES_H



/*------------------------------------------------------------------------------
* This interface defines all 13 address modes of the 6502 and
* provides a way to extract the address mode out of an address
*
* Since relative and zeropage addressing are identical, relative addressing
* is replaced by zeropage addressing
*
* There is also an additional invalid mode in case no address mode 
* matches the given input string
------------------------------------------------------------------------------*/



enum AddressModes {
	INVALID,
	ACCUMULATOR,	// "A"
	ABSOLUTE,		// "$LLHH"
	ABSOLUTE_X,		// "$LLHH,X"
	ABSOLUTE_Y,		// "$LLHH,Y"
	IMMEDIATE,		// "#$BB"
	IMPLIED,		// ""
	INDIRECT,		// "($LL)"
	X_INDIRECT,		// "($LL,X)"
	INDIRECT_Y,		// "($LL),Y"
	ZEROPAGE,		// "$LL"
	ZEROPAGE_X,		// "$LL,X"
	ZEROPAGE_Y		// "$LL,y"
};


/*
 * Gets the address mode of a given address
 *
 * Param: address string
 * Return: address mode or INVALID
 */
enum AddressModes get_address_mode(char *address);


/*
 * matches an address with a template. A '*' in the template
 * indicates a hex number
 *
 * Params: address string, template string to compare
 * Return: true if match, false otherwise
 */
bool match_address_mode(char *address, const char *addressTemplate);


#endif //ADDRESSMODES_H

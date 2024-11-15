#ifndef ADDRESSMODES_H
#define ADDRESSMODES_H



/*------------------------------------------------------------------------------
* There are 13 address modes for the 6502, as specified below
* Two modes (relative and zeropage) are identical, so one is ignored
------------------------------------------------------------------------------*/



enum AddressModes {
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


#endif //ADDRESSMODES_H

#ifndef ERRORHANDLER_H
#define ERRORHANDLER_H



/*------------------------------------------------------------------------------
 * This interface handles errors that occur during the assembly process
 * Below are error codes defined that may be used to throw an error 
 * and terminate the program
------------------------------------------------------------------------------*/



enum ErrorCodes {
	// File errors
	FILE_NOT_FOUND_ERROR,
	INVALID_FILE_FORMAT_ERROR,
	READ_LINE_ERROR,

	// Parsing errors
	INVALID_INSTRUCTION_ERROR,
	INVALID_ADDRESS_MODE_ERROR,
	SYNTAX_ERROR,

	// Miscellaneous
	ALLOCATION_ERROR,
};


/*
 * Handles a thrown error specified by error code
 * Terminates program and prints error message
 *
 * Param: error code
 */
[[noreturn]] void throw_error(enum ErrorCodes error_code);


#endif //ERRORHANDLER_H

#ifndef ERRORHANDLER_H
#define ERRORHANDLER_H


enum ErrorCodes {
	// File errors
	FILE_NOT_FOUND_ERROR,
	INVALID_FILE_FORMAT_ERROR,
	READ_LINE_ERROR,

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

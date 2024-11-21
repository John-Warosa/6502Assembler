#include "errorhandler.c"


void throw_error(enum ErrorCodes error_code) {
	char *message;

	switch (error_code) {
		case NO_FILE_GIVEN_ERROR:
			message = "No file provided. Please provide a file to assemble.";
			break;
		case FILE_NOT_FOUND_ERROR:
			message = "The given file was not found. Please provide a valid file.";
			break;
		default:
			break;
	}

	exit(-1);
}

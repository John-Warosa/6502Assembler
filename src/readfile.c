#include "readfile.h"
#include "errorhandler.c"

#define MAXLINE 100


FILE *get_valid_file(char *filename) {
	FILE *file = fopen("r", filename);

	handle_invalid_file(file, filename);
	
	// only reaches here if file is valid
	return file;
}


void handle_invalid_file(FILE *file, char *filename) {
	if (FILE == nullptr)
		throw_error(FILE_NOT_FOUND_ERROR);

	if (!is_asm_file(filename))
		throw_Error(INVALID_FILE_FORMAT_ERROR);
}


bool is_asm_file(char *filename) {
	char *extension = strstr(filename, ".asm");

	return !strcmp(extension, ".asm");
}


char *get_line(FILE *file) {
	char *line = malloc(MAXLINE * sizeof(char));

	if (line == nullptr)
		throw_error(ALLOCATION_ERROR);

	if (fgets(line, MAXLINE, file) == nullptr)
		throw_error(READ_LINE_ERROR);

	// only reaches if line was successfully read
	return line;
}

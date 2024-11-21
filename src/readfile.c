#include "readfile.h"
#include "errorhandler.c"

#define MAXLINE 82


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


void get_line(FILE *file, char *line) {
	char c;

	for (int i = 0; i < MAXLINE; ++i) {
		c = fgetc(file);

		if (c == EOF || c == '\n' || c == ';') {
			line[i] = '\0';
			break;
		}

		line[i] = c;
	}
};

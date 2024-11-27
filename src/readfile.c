#include "readfile.h"
#include <stdio.h>


FILE *get_file(char *filename) {
	FILE *file = fopen("r", filename);

	handle_invalid_file(file, filename);
	
	// only reaches here if file is valid
	return file;
}


void is_invalid_file(FILE *file, char *filename) {
	if (file == nullptr) 
		return true;

	if (!is_asm_file(filename))
		return true;

	return false;
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

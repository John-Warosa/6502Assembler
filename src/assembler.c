#include "assembler.h"
#include "parser.h"
#include "readfile.h"
#include <stdio.h>


void assembler_file(char *filename) {
	const FILE *file = get_valid_file(filename);
	char *line = malloc(MAXLINE * sizeof(char));

	while (strlen(get_line(file, line)) > 0) {
		struct Bytecode bytes = get_bytes()
	}
}

#include "assembler.h"
#include "parser.h"
#include "readfile.h"


void assemble_file(FILE *file) {
	static char line[MAXLINE];

	while (strlen(get_line(file, line)) > 0) {
		struct Bytecode bytes = get_bytes()
	}
}


void write_file(struct Bytes bytes, char *filename) {

}

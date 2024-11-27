#include "assembler.h"
#include <stdio.h>


int main(int argc, char **argv) {
	if (argc == 1) {
		fprintf(stderr, "No file to assemble. Terminating process.");
		return 1;
	}
	
	for (int i = 1; i < argc; ++i) {
		const FILE *file = fopen("r", filename);

		if (is_invalid_file(file, filename)) {
			fprintf(stderr, "Failed to assemble file %s. Continuing.\n", filename);
			continue;
		}

		assemble_file(file);
	}

    return 0; 
}

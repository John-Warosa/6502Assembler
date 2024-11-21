#include "errorhandler.h"
#include "assembler.h"
#include <stdio.h>


int main(int argc, char **argv) {
	if (argc == 1)
		throw_error(1);
	
	for (int i = 1; i < argc; ++i) {
		assemble_file(argv[i]);
	}

    return 0; 
}

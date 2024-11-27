#include "tokenizer.h"
#include <string.h>


struct Tokens get_tokens(char *line) {
	struct Tokens tokens = {
		.mnemonic = get_mnemonic(line);
		.address = get_address();
	};

	return tokens;
}

char *get_mnemonic(char *line) {
	return strtok(line, " ");	
}


char *get_address() {
	return strtok(NULL, " ");
}

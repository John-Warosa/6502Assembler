#include "tokenizer.h"


struct Tokens get_tokens(char *line) {
	struct Tokens tokens = {
		.mnemonic = get_mnemonic(line);
		.address = get_address(line);
	};

	return tokens;
}


char *get_mnemonic(char *line) {
	return line;
}


char *get_address(char *line);


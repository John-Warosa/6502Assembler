#ifndef TOKENIZER_H
#define TOKENIZER_H



/*------------------------------------------------------------------------------
 * This interface handles the tokenization of input lines
 * In this version, tokens are separated by spaces
 *
 * A valid line is of the form "[Instruction] [Address]"
 * Support for arbitrary spaces, tabs and comments may be added
 * further down the line
------------------------------------------------------------------------------*/
// TODO: Add support for labels, e.g. "loop:" or "function:"



struct Tokens {
	char *instruction;
	char *address;
};


/*
 * Returns a tokenized version of an input line
 *
 * Param: line string
 * Return: Tokens struct
 */
struct Tokens get_tokens(char *line);


/*
 * extracts the instruction from an input line
 *
 * Param: line string
 * Return: instruction mnemonic string
 */
char *get_instruction(char *line);


/*
 * extracts the address from an input line
 *
 * Param: line string
 * Return: address string ("" if no address is present)
 */
char *get_address(char *line);


#endif //TOKENIZER_H

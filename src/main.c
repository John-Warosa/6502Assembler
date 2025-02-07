#include <stdio.h>
#include <string.h>

#define MAXLINE 100


typedef enum {
    ORG,
    BYTE,
    LABEL,
    DEFINE,
    INSTRUCTION,
    ADDRESS,
    NAME,
    NUM,
} TokenType;


typedef struct {
    TokenType type;
    void *data;
} Token;


const char *directives[] = {
    ".org",
    ".byte",
    ".label",
    ".define",
};


void remove_comment(char line[], char delimiter);
void remove_newline(char line[]);


int main(int argc, char **argv) {
    FILE *file = fopen(argv[1], "r");
    char line[MAXLINE];
    char *token;

    while(!feof(file) && fgets(line, MAXLINE, file)) {
        puts(line);

        remove_comment(line, ';');
        remove_newline(line);
        puts(line);

        token = strtok(line, " \t");
        puts(token);
        while (token) {
            token = strtok(NULL, " \t");

            if (token) {
                puts(token);
            }
        }
    }

    return 0;
}


void remove_comment(char line[], char delimiter) {
    char *comma = strchr(line, delimiter);

    if (comma) {
        *comma = '\0';
    }
}


void remove_newline(char line[]) {
    char *newline = strchr(line, '\n');

    if (newline) {
        *newline = '\0';
    }
}

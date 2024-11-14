#include "test_readfile.h"
#include "../include/readfile.h"
#include <assert.h>


static const char *validFiles[5] = {
	"test.asm",
	"test.asm.asm",
	"_.asm",
	".asm.asm",
	"test..asm",
};


static const char *invalidFiles[10] = {
	"test",
	"test.file",
	"test.asm.file",
	".asm",
	"",
	"msa.file",
	"test.s",
	"test.c",
	"\n",
	"test.a.s.m",
};


void test_is_asm_file() {
	for (int i = 0; i < 5; ++i) {
		assert(is_asm_file(validFiles[i]) == true);
	}

	for (int i = 0; i < 5; ++i) {
		assert(is_asm_file(invalidFiles[i]) == false);
	}
}

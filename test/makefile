CC = gcc-14

IDIR = ../include ./
CFLAGS = -I $(IDIR)

ODIR = obj
LDIR = ../lib

LIBS = -lm

_DEPS = readfile.h test_readfile.h
DEPS = $(patsubst %, $(IDIR)/%, $(_DEPS))

_OBJ = test.o test_readfile.o
OBJ = $(patsubst %, $(ODIR)/%, $(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -std=c23 -c -o $@ $< $(CFLAGS)

6502Assembler: $(OBJ)
	$(CC) -std=c23 -o $@ $^ $(CFLAGS) $(LIBS)


.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~

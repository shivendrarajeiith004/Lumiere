# Makefile for compiling and running the parser

# Compiler and tools
LEX = lex
YACC = yacc
GCC = gcc

# Source files
LEX_SRC = lex_src.l
YACC_SRC = src.y

# Output files
LEX_OUTPUT = lex.yy.c
YACC_OUTPUT = y.tab.c
EXEC = parser
INPUT_FILE = ../test/inp.txt
OUTPUT_FILE = ../test/out.txt

# Targets

all: $(EXEC)

$(EXEC): $(LEX_OUTPUT) $(YACC_OUTPUT)
	$(GCC) $(LEX_OUTPUT) $(YACC_OUTPUT) -o $(EXEC)

$(LEX_OUTPUT): $(LEX_SRC)
	$(LEX) $(LEX_SRC)

$(YACC_OUTPUT): $(YACC_SRC)
	$(YACC) -d $(YACC_SRC)

run: $(EXEC)
	./$(EXEC) $(INPUT_FILE) $(OUTPUT_FILE)

clean:
	rm -f *.c $(EXEC) $(OUTPUT_FILE) y.tab.h


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
PASS_INPUT = ../test/inp1.txt
PASS_OUTPUT = ../test/out1.txt
FAIL_INPUT = ../test/inp2.txt
FAIL_OUTPUT = ../test/out2.txt

# Targets

all: $(EXEC)

$(EXEC): $(LEX_OUTPUT) $(YACC_OUTPUT)
	$(GCC) $(LEX_OUTPUT) $(YACC_OUTPUT) -o $(EXEC)

$(LEX_OUTPUT): $(LEX_SRC)
	$(LEX) $(LEX_SRC)

$(YACC_OUTPUT): $(YACC_SRC)
	$(YACC) -d $(YACC_SRC)

run: $(EXEC)
	./$(EXEC) $(PASS_INPUT) $(PASS_OUTPUT)
	./$(EXEC) $(FAIL_INPUT) $(FAIL_OUTPUT)

clean:
	rm -f *.c $(EXEC) $(PASS_OUTPUT) $(FAIL_OUTPUT) y.tab.h


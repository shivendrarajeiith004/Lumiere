# Makefile

# Variables
LEX = lex
CC = gcc
LEX_SRC = src.l
LEX_OUT = lex.yy.c
EXEC = lex
PASS_INPUT = ../test/inp1.txt
FAIL_INPUT = ../test/inp2.txt
PASS_OUTPUT = ../test/out1.txt
FAIL_OUTPUT = ../test/out2.txt
# Default target
all: $(EXEC)

# Build the executable
$(EXEC): $(LEX_OUT)
	$(CC) $(LEX_OUT) -o $(EXEC)

# Generate lex.yy.c from src.l
$(LEX_OUT): $(LEX_SRC)
	$(LEX) $(LEX_SRC)

# Run the program
run: $(EXEC)
	./$(EXEC) $(PASS_INPUT) $(PASS_OUTPUT)
	./$(EXEC) $(FAIL_INPUT) $(FAIL_OUTPUT)

# Clean generated files
clean:
	rm -f $(LEX_OUT) $(EXEC) $(FAIL_OUTPUT) $(PASS_OUTPUT)


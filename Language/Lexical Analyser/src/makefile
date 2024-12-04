# Makefile

# Variables
LEX = lex
CC = gcc
LEX_SRC = src.l
LEX_OUT = lex.yy.c
EXEC = lex
INPUT = ../test/inp.txt
OUTPUT = ../test/out.txt

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
	./$(EXEC) $(INPUT) $(OUTPUT)

# Clean generated files
clean:
	rm -f $(LEX_OUT) $(EXEC) $(OUTPUT)


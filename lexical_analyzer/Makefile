# Build the executable
#all: lum

# Compile the lexer and parser

INPUT_FILE = testCase.txt

# Build the executable
all: lum

lum: 
	lex lumiere.l
	yacc -d parser.y
	gcc -o lumiere lex.yy.c y.tab.c -ll

run: lum
	./lumiere $(INPUT_FILE)

# Clean the generated files
clean:
	rm -f lex.yy.c y.tab.c y.tab.h lum
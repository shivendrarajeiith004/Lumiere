# Build the executable
#all: lum

# Compile the lexer and parser

INPUT_FILE = ./test/test1.txt

# Build the executable

lum: 
	lex ./lexical_analyzer/lumiere.l 
	yacc -d ./parser/parser.y 
	gcc -o lumiere lex.yy.c y.tab.c -ll 

run: lum
	./lumiere $(INPUT_FILE)

# Clean the generated files
clean:
	rm -f lex.yy.c *.c *.h *.output lumiere lum

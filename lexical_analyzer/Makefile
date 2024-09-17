# Build the executable
#all: lum

# Compile the lexer and parser
lum: 
	lex lumiere.l
	yacc -d parser.y
	gcc -o lumiere lex.yy.c y.tab.c -ll

# Clean the generated files
clean:
	rm -f lex.yy.c y.tab.c y.tab.h lum
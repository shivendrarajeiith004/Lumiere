Lexical Analyser:
	The Following Lex File contains all the tokens required For the DSL.

Explanations(If required):
	1.The Code section:
		1.contains(The one between %{ %}) contains required lineno details which is used to locate line numbers and tokens in the output File.
		2.extern file yyin is used for accessing the input file(it's part of syntax for lex).
	2.The Tokens section:
		1. Basic reg exps that we are using are digits and letter, nevertheless, We've also added different types like 'mass', 'init_vel' as our variable types in 'reserved type' rest of the token mentioned are fairly simple and easy to understand.
		2.output is printed in 'test' folder as the command line suggests.
	3.The input and output: 
		1.The file are taken as command line input.

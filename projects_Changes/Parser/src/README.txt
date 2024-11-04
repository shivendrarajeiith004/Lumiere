Parser(Phase 2):
	This is the parser source code file for the DSL.
	1.The Code Section :
		1.code section consists of 'yylineno' which we use for to find out which type of statement is given on that particular line.
		2.the 'curr_scope' is used to denote scope for a particular block and it is helpful for symbol table and syntax tree.
		3.We are using map 'blocklist' to map between 'curr_scope' and 'symbol_table' and 'SymbolTableVar' is pointer to symbol table weare currently acccesing.

	2.The Rules Section :
		1.There are multiple types of statements that you can go through(They are well commented for your info)
	
	3.The Code Execution :
		The code is executed using command line input from the user.

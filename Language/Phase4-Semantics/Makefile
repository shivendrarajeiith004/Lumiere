
#Check if DEBUG is set to 1
ifeq ($(DEBUG), 1)
    CXXFLAGS += -g  # Add debug flag if DEBUG=1
else
    CXXFLAGS +=  # No debug flag if DEBUG is not 1
endif
.PHONY: lex
lex:
	lex  ./lex/lex_src.l
.PHONY:parse
parse: lex
	bison -d ./parser/parser.y  
.PHONY: run
format:
	clang-format -i $(filename) 
run: lex   parse
	gcc  -std=c18 -g -o calc -I./semantic lex.yy.c  parser.tab.c  semantic/ast.c semantic/symbol.c  $(CXXFLAGS) -ll  

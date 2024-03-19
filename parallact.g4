grammar parallact;

program : function+;

function : 'parallel with' standart=('mpi' | 'openmp') block #ParallelMpiOmp
			;
			
block : '{' statement* '}';

statement : assignment ';'
			| forStatement;
assignment : type IDENTIFIER '=' expression
			| IDENTIFIER '=' expression
			| IDENTIFIER'++'
			| IDENTIFIER'--'
			| IDENTIFIER'+=' expression
			| IDENTIFIER'-=' expression
			;

forStatement: 'for' '(' (type assignment | assignment | IDENTIFIER) ';' expression ';' assignment ')' block;

expression : literal
		   | expression op=('<' | '>') expression
		   | expression op=('==' | '!=') expression
           | '(' expression ')'
           | IDENTIFIER
           ;
		   
literal : INT
        | STRING
        ;
type : 'int' | 'float' | 'double' ;
INT : [0-9]+;
STRING : '"' ~["]* '"' ;
IDENTIFIER : [a-zA-Z]+ ;
WS: [ \t\r\n]+ -> skip;
grammar parallact;

program : funcDeclaration+;

funcDeclaration : 'function' IDENTIFIER block;

block : '{'
            input  ';'
            output ';'
         '}';

input : 'inputs:' paramList?;
output : 'output:' paramList?;

paramList : assigment (',' assigment)*;

assigment : type (IDENTIFIER | IDENTIFIER relyClause) | none;
relyClause : '(' 'rely' IDENTIFIER ')';
type : IDENTIFIER;
none : 'none';

expression : literal
		   | expression op=('<' | '>') expression
		   | expression op=('==' | '!=') expression
           | '(' expression ')'
           | IDENTIFIER
           ;
		   
literal : INT
        | STRING
        ;

INT : [0-9]+;
STRING : '"' ~["]* '"' ;
IDENTIFIER : [a-zA-Z:<>]+ ;
WS: [ \t\r\n]+ -> skip;
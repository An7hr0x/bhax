%{
#include <stdio.h>
#include <string.h>
int valos_szamok = 0;
%}
szam [0-9]
%%
{szam}*(\.{szam}+)? {++valos_szamok; 
	printf("[valossz=%s %f]", yytext, atof(yytext));}
%%
int main()
{
	yylex ();
	printf("Valós számok darabszáma: %d\n", valos_szamok);
	return 0;
}

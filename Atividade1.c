//Escreva um programa que declare um inteiro, um real e um char, e ponteiros para in-
//teiro, real, e char. Associe as vari  ́aveis aos ponteiros (use &). Modifique os valores de
//cada variavel usando os ponteiros. Imprima os valores das variaveis antes e aṕos a
//modificacao.

#include <stdio.h>

int main()
{
    int i = 1;
    int *ponteiroI = &i;

    float f = 2.2;
    float *ponteiroF = &f;

    char c ='a';
    char  *ponteiroC = &c;


    printf(" Inteiro antes: %i", i);
    printf("\n Real antes: %f", f);
    printf("\n Char antes: %c", c);


   *ponteiroI = 2;
   *ponteiroF = 0.1;
   *ponteiroC = 'b';

    printf("\n Inteiro depois: %i", i, *ponteiroI);
    printf("\n Real depois: %f", f, *ponteiroF);
    printf("\n Char  depois: %c", c, *ponteiroC);

}

//Escreva um programa que contenha duas variaveis inteiras. Leia essas variaveis do
//teclado. Em seguida, compare seus enderecos e exiba o conteudo do maior endereco.

#include <stdio.h>

int main(){

 int a, b;

 printf("Digite um numero:\n");
 scanf("%d", &a);

 printf("\nDigite outro numero:\n");
 scanf("%d",&b);

if (a>b)
    printf("O maior numero eh: %d",a);
else
        printf("O maior numero eh: %d", b);


return 0;
}

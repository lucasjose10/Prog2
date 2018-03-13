#include <stdio.h>
#include <string.h>
int main(){

char nome[50];
char nome2[50];
char aux[10];
char nomecompleto[50];


printf("\ndigite seu nome \n");
gets(nome);

printf("\ndigite seu sobrenome \n");
gets(nome2);

//usando strcpy - troque o conteudo de nome com sobrenome

strcpy(nomecompleto,"");
strcpy(nomecompleto,nome2);
strcat(nomecompleto,", ");
strcat(nomecompleto,nome);



printf("\n %s",nomecompleto);




return 0;
}

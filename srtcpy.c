#include <stdio.h>
#include <string.h>
int main(){

char nome[50];
char nome2[50];
char aux[50];


printf("\ndigite seu nome \n");
gets(nome);

printf("\ndigite seu sobrenome \n");
gets(nome2);

//usando strcpy - troque o conteudo de nome com sobrenome

strcpy(aux,nome);
strcpy(nome,nome2);
strcpy(nome2,aux);



printf("\n %s %s",nome,nome2);




return 0;
}

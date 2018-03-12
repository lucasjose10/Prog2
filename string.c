#include <stdio.h>
#include <string.h>
int main(){

char senha[]="12345";
char senha2[50];
int vali=0;

printf("\ndigite sua senha \n");
gets(senha2);

 vali=strcmp(senha,senha2);

 if(vali==0){
    printf("\nvirus instalado com sucesso");
 }
else{
    printf("senha incorreta");
}


return 0;
}

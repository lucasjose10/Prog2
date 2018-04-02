#include<stdio.h>
#include<string.h>

void nome_maiusculo(char *nome);
int conf_senha(int,int);
int funcao_saque(int *valor);

int main(){
int senha, conf, confirmacao=0, saque=0, valor=0, saldo=0;
char nome[20];

printf("\nEntre com seu nome: ");
gets(nome);
nome_maiusculo(nome);
do{
printf("\n\nDigite sua nova senha numerica: ");
scanf("%d",&senha);
printf("\nConfirme sua nova senha numerica: ");
scanf("%d",&conf);

confirmacao=conf_senha(senha,conf);

}while(confirmacao==1);

if(confirmacao==2){
    printf("\n----------------------------\nSenha confirmada com sucesso.\n----------------------------\n");
    system("pause");
    system("cls");

    printf("\nInsira 1 para saque, 0 para sair: ");
    scanf("%d",&saque);

    if(saque==0){printf("\nFim da Operacao");
    }
    else{
        printf("\n----------------------------\nValor Disponivel: 1.000 reais\n----------------------------\n\nValor a ser sacado: ");
        scanf("%d",&valor);
        saldo=funcao_saque(&
                           valor);
        printf("\nOperacao realizada com sucesso\n\nSaldo restante: %d reais",saldo);
    }
}
return 0;
}

void nome_maiusculo(char *nome){
printf("\nOla, %s",strupr(nome));
}

int conf_senha(int senha,int conf){
if(senha!=conf){
    return 1;
}
else{
    return 2;
}
}

int funcao_saque(int *valor){

return 1000-*valor;
}

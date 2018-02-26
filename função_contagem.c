#include <stdio.h>



//imprimi a sequencia de 10 a 1
void  contagem_regressiva(int ini, int fim){

    int i;
    for(i=ini;i>=fim;i--){
    printf("\n%d",i);

    }
printf("\nBoa noite");

}

int main()
{
    contagem_regressiva(10,5);
    contagem_regressiva(8,5);
    contagem_regressiva(5,1);




    return 0;
}

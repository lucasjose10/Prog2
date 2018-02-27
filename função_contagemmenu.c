#include <stdio.h>

int menu(){
    int opc=0;
    do  {
    printf("digite a opcaoo 1-soma 2-subtracao\n");

    scanf("%d",&opc);
    }while(opc!=1 && opc!=2);
    return (opc);




}
int subt(int a, int b)
{
    return(a-b);
}

int soma(int a, int b)
{
    return (a+b);
}

int main()
{
    int num=0;
    int num2=0;
    int result=0;
    int result2=0;
    int opc2=0;





    printf("Valor do 1 termo\n");
    scanf("%d", &num);
    printf("Valor do 2 termo\n");
    scanf("%d", &num2);

   opc2=menu();

   if(opc2==1){
    result = soma(num, num2);
    printf("Resultado: %d\n", result);
   }
   if(opc2==2){
    result = subt(num,num2);
    printf("Resultado: %d\n", result);
   }



    system ("pause");

    return 0;
}

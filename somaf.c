#include <stdio.h>
 
int soma(int a, int b)
{
    int soma;
    soma = a + b;
    return (soma);
}
 
int main()
{
    int num=0;
    int num2=0;
    int result=0;
 
    printf("Valor do 1 termo\n");
    scanf("%d", &num);
    printf("Valor do 2 termo\n");
    scanf("%d", &num2);
 
    result = soma(num, num2);
 
    printf("Resultado: %d\n", result);
    
    system ("pause");
 
    return 0;
}



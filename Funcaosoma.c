#include <stdio.h>
 
int main(){
	
	float a=0;
	float b=0;
	
	printf("DIGITE O VALOR DO 1 TERMO\n");
	scanf("%f", &a);
	printf("DIGITE O VALOR DO 2 TERMO\n");
	scanf("%f", &b);
 
    float soma(float a , float b);
    soma(a,b);
    
    system("pause");
    return 0;
}
 
 float soma(float a, float b){
 	 float resul=a+b;
 	printf(" a soma dos numeros digitados eh %.2f\n", resul);
 	
 	return(resul);
 	
 	
 	
 	
 	
 }

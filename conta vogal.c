#include <stdio.h>
#include <string.h>


int main()
{
    int contavogais(char*frase);
    char frase[50];
    int numvogais=0;



    printf("\nDigite seu nome");
    gets(frase);

    numvogais=contavogais(frase);

    printf(" Sua palavra tem %d", numvogais);



    return 0;


}
int contavogais(char*nome)

{
    int i;
    int contador=0;

    for(i=0; i<strlen(nome); i++)
	{
		if(nome[i]=='a'||nome[i]=='i'||nome[i]=='e'||nome[i]=='o'||nome[i]=='u')
		{
			contador++;
		}
	}


    return (contador);
}








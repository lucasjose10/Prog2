#include <stdio.h>
#include <string.h>
int main()

{

	FILE *arq1=fopen("niteroi.txt","r");

	FILE *arq2=fopen("saopaulo.txt","r");

	FILE *arq3=fopen("geral.txt","w");

	char linha[100];
	char linha2[100];
	
	fgets(linha,sizeof(linha),arq1);
	fgets(linha,sizeof(linha),arq1);
	fgets(linha2,sizeof(linha),arq2);
	fgets(linha2,sizeof(linha),arq2);
	
	char nome[100];
	char nome2[100];
	int num=0;
	int num2=0;
	

	while(!feof(arq1) && !feof(arq2)){
	
	fgets(linha,sizeof(linha),arq1);
	fgets(linha2,sizeof(linha2),arq2);
	
	if(strcmp(linha,linha2) == -1)
       	   {
       	        fprintf(arq3,"%s\n", linha);
       	        fprintf(arq3,"%s\n", linha2);
       	    }
       	
  }
	while(!feof(arq2))
	{
		fgets(linha2,sizeof(linha2),arq2);
		fprintf(arq3,"%s\n", linha2);
	}
	
	
	
	return 0;
}
	
	
	

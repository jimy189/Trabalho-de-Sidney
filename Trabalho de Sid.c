/*TRABALHO - VALOR (10,0 sendo 3,0 primeira parte feita em casa + 7,0 segunda parte feita em sala de aula).
Uma clínica que realiza exames de imagem (mamografia, raio x, ultrassonografia , etc...) está
precisando de um sistema simples para realização de cadastro de exames diários.
Todos os dias são distribuídas 30 senhas para atendimento na clínica. Depois de distribuídas as
senhas, são realizados os cadastros dos exames.
Para realizar o cadastro do exame são solicitados os seguintes dados: (nome, sobrenome, idade,
sexo, tipo de exame).
Os tipos de exames são:
– raio x
– mamografia
– ultrassonografia
– ressonância
Utilizando os conceitos de (função, vetor e Struct) desenvolva as funcionalidades abaixo:
O programa deverá possuir um menu com as seguintes opções:
- Cadastrar exame
- Imprimir todos os exames cadastrados
- faça uma pesquisa dos dados de mascolino e feminino;
- faça uma função com maiores de 18 anos;
-faça uma função procurando nomes;
-faça uma função que guarde o numero de raios-x;
*/

#include<stdio.h>
#include <string.h>
int i;
typedef struct dados{
	char nome[10]; 
	char sobrenome[20]; 
	int idade;
	int sexo; 
	int tipsexames;
	char masculino[10];
	char feminino[10];
	char raiox[20];
    char mamografia[20];
    char ultrassonografia[20];
    char ressonancia[20];
	 
}dados;

preencher(dados x[],int y)
{
	printf("\nPrograma de Registros de Exames\n\n");
	for(i=0;i<y;i++)
	{
		
	printf("\nDigite seu nome:\n");
		scanf("%s",&x[i].nome);
		
	printf("\nDigite seu sobrenome:\n");
		scanf("%s",&x[i].sobrenome);
		
	printf("\nDigite sua idade:\n");
		scanf("%d",&x[i].idade);
		
	printf("\nDigite um numero para o seu sexo, 1- Para masculino, 2 Para feminino:\n");
		scanf("%d",&x[i].sexo);		

	printf("\nDigite um numero para o tipo do exame, 1 raio x, 2 mamografia, 3 ultrassonografia, 4 ressonancia:\n");
	scanf("%d",&x[i].tipsexames);
	
	}
}

	todos(dados x[],int y)
{
	printf ("\n----------DADOS GERAIS----------\n");	
	for(i=0;i<y;i++)
	{
	printf("Nome:%s\n", x[i].nome);
    
    printf("Sobrenome:%s\n", x[i].sobrenome);
    
    printf("Idade:%d\n", x[i].idade);
    
    	switch(x[i].sexo){	
					case 1:
		printf("Sexo = %s\n",  x[i].masculino);
		break;
		
		case 2:
		printf("Sexo= %s\n",  x[i].feminino);
		break;
			}
   
    	switch(x[i].tipsexames){
		case 1:
		
		printf("Exame: %s\n", x[i].raiox);	
		break;
		
		case 2:
		
		printf("Exame: %s\n", x[i].mamografia);		
		break;
		
		case 3:
		
		printf("Exame: %s\n", x[i].ultrassonografia);	
		break;
		
		case 4:
			
		printf("Exame: %s\n", x[i].ressonancia);	
		break;
			} 
		printf("\n");
	}
}


sexo(dados x[],int y){
	printf("\n Registros de dados masculinos e femininos Sexos\n");	
	
			for(i=0;i<=y;i++){
			switch(x[i].sexo){	
					case 1:
		printf ("\n----------DADOS GERAIS----------\n");
		strcpy( x[i].masculino, "Masculino");
		printf("Nome = %s",  x[i].masculino);
	

		break;
		
		case 2:
		printf ("\n----------DADOS GERAIS----------\n");
		strcpy( x[i].feminino, "Feminino");
		printf("Nome = %s",  x[i].feminino);
		break;
		
			}
			}					
}

exames(dados x[],int y)
{
	printf ("\n----------Registros de Exames---------\n");

			for(i=0;i<=3;i++){
			switch(x[i].tipsexames){
		case 1:
		strcpy( x[i].raiox, "Raio-x");
		printf("Exame: %s\n", x[i].raiox);	
		break;
		
		case 2:
		strcpy( x[i].mamografia, "Mamografia");
		printf("Exame: %s\n", x[i].mamografia);		
		break;
		
		case 3:
		strcpy( x[i].ultrassonografia, "Ultrassonografia");
		printf("Exame: %s\n", x[i].ultrassonografia);	
		break;
		
		case 4:
			strcpy( x[i].ressonancia, "Ressonancia");
		printf("Exame: %s\n", x[i].ressonancia);	
		break;
			}
    	}
}
    	
    	imprimir3(dados x[],int y){
	printf("\n Registros de dados masculinos e femininos Sexos\n");	
	
			for(i=0;i<=3;i++){
			switch(x[i].sexo){	
					case 1:
		printf ("\n----------DADOS GERAIS----------\n");
		printf(" Sexo: %s\n", x[i].masculino);
		printf(" Nome: %s\n",x[i].nome);
		printf(" Sobrenome: %s\n",x[i].sobrenome);
		printf(" Idade: %d\n",x[i].idade);
		printf(" Tipo de Exame: %d\n",x[i].tipsexames);
		printf("\n");
		break;
		
		case 2:
		printf ("\n----------DADOS GERAIS----------\n");
		printf(" Sexo: %s\n",x[i].feminino);	
			printf(" Nome: %s\n",x[i].nome);
		printf(" Sobrenome: %s\n",x[i].sobrenome);
		printf(" Idade: %d\n",x[i].idade);
		printf(" Tipo de Exame: %d\n",x[i].tipsexames);
		break;
		
			}
			}	
}
		
			imprimir4(dados x[],int y){
	printf("\n Registros de dados para maiores de 18\n");	
	
			for(i=0;i<=3;i++){
			if(x[i].idade>=18){
		printf(" Sexo-masculino-1 ou 2-Feminino: %d\t",x[i].sexo);
		printf(" Nome: %s\t",x[i].nome);
		printf(" Sobrenome: %s\t",x[i].sobrenome);
		printf(" Idade: %d\t",x[i].idade);
		printf(" Tipo de Exame: %d\t",x[i].tipsexames);
		printf("\n");
			}
			else{
			printf("\n Menor!\n");
		printf(" Sexo-masculino-1  ou  2-Feminino: %d\t",x[i].sexo);
		printf(" Nome: %s\t",x[i].nome);
		printf(" Sobrenome: %s\t",x[i].sobrenome);
		printf(" Idade: %d\t",x[i].idade);
		printf(" Tipo de Exame: %d\t",x[i].tipsexames);
		printf("\n");
			}
			}
		}	

	
	imprimir5(dados x[],int y){
			
			
			int retorno;	
			char xl[10];
			printf("Digite um nome para achar o seus dados\n");
			scanf("%s",&xl);
		
			for(i=0;i<=3;i++){
			
			retorno = strcmp(xl, x[i].nome);
			if(retorno==0){
		printf("\n Registro Encontrado!\n");
		printf(" Sexo-masculino-1 ou 2-Feminino: %d\n",x[i].sexo);
		printf(" Nome: %s\n",x[i].nome);
		printf(" Sobrenome: %s\n",x[i].sobrenome);
		printf(" Idade: %d\n",x[i].idade);
		printf(" Tipo de Exame: %d\n",x[i].tipsexames);
		printf("\n");
			}
		}
	}
		imprimir6(dados x[],int y,int r){
			
		
	
			for(i=0;i<=3;i++){
			
			if(x[i].tipsexames==1){
				r=r+1;
			}
			else{
				r=r;
			}
			
			}
			return r;
		}
		
		



main (){
	
	dados x[50];
	char nomes[10];
	int opcao;
	int z=0;
	
		preencher(x,3);
		//sexo(x,3);	
		exames(x,3);
		//todos(x,3);
		
		//imprimir3(x,3);
		//imprimir4(x,3);
		//printf("A quantidade de raio-x e: %d\n",imprimir6(x,3,z));
		//imprimir5(x,3);
		}
		
		
		//Quando precisar de opção
		/*	printf("Cadastrado Finalizado!\n");	
		printf("Digite 1 para imprimir o cadastro\n");
		scanf("%d",&opcao);
		
			while(opcao>2){

		printf("\nOpcao Invalida\n");
		printf("Digite 1 para imprimir o cadastro\n");
		scanf("%d",&opcao);
		}
		imprimir(x,3);
		sexo(x,3);
		imprimir3(x,3);
		imprimir4(x,3);
		printf("A quantidade de raio-x e: %d\n",imprimir6(x,3,z));
		imprimir5(x,3);*/
		
		// Se precisar de um menu com switch
		/*main (){
	dados x[50];
	int i;
	char nomes[10];
	int opcao;
	
	printf("\nPrograma de Registros de Exames\n");
	
	printf("\nDigite 1- Para cadastrar o exame, 2- Para ver os exames cadastrados:\n");
    scanf("%d", &opcao);

	switch(opcao){
		case 1:
			preencher(x,3);		
		break;
	
	
		case 2:			
			imprimir(x,3);
		break;
		default:
		printf("\nNao e uma das opcoes digitadas\n");	
	
	}	 				
}*/


// Quando necessitar  de pegar algo no main!
/*
int procura(int n[6],int i, int j,int au){

for(i=0; i<6;i++){
		if(n[i]>j){
			 au=au+1;
		}
		else{ 
			au=au;
		}
	}	
	 return au;	
}


main(){
	int a[6];
	int y;
	int quant=0;
	int pequeno=0;
	int k;
	int l;
	int aux=0;
	vetor1(a,y);

		printf("\nDigite um valor para ser procurado:\n");
		scanf("%d",&k);	
	printf("\nA quantidade de numeros maiores que esse e: %d\n",procura(a,y,k,aux));

}
*/



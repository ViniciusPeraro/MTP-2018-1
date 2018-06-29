//Vinicius Peraro 11721ECP007
#include<stdio.h>
#include<stdlib.h>
#define tam 100
void definir(float vetor[tam]){
	int i;
	for(i=0;i<tam;i++){
 	vetor[i]= 0.01*(rand()%101+50);
	}
}
float somar(float vetor[tam],int n){
	if(n==1){
		return vetor[0];
	}
	else 
	return vetor[n-1]+somar(vetor,n-1);
}
float multiplicar(float vetor[tam],int n){
	if(n==1){
		return vetor[0];
	}
	else 
	return vetor[n-1]*multiplicar(vetor,n-1);
}
void printar(float vetor[tam]){
	int i=0;
	for (i=0;i<tam;i++){	
		printf("%.2f\t",vetor[i]);
	}
}
int main (){
	srand(123456);
	float vet[tam],resultado;
	int i,op,n=tam;
	definir(vet);
	Menu:
	printf("Menu:\n1.Somatorio.\n2.Produtorio.\n3.Printar os valores dos vetores e fechar o programa.\nOpcao: ");
	scanf("%d",&op);
	getchar();
	if(op<1 || op>3){
		printf("Opcao invalida.");
		goto Menu;
	}
	switch(op){
		case 1:resultado=somar(vet,n);printf("\nSomatorio:%f\n\n",resultado);goto Menu;//break;
		case 2:resultado=multiplicar(vet,n);printf("\nProdutorio:%f\n\n",resultado);goto Menu;//break;
		case 3:printf("\n");printar(vet);printf("\n");break;
	}
	return 0;
}

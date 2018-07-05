//Vinicius Peraro de Oliveira 11721ECP007
#include <stdio.h>
#include <string.h>
struct dimensoes{
	float largura;
	float profundidade;
	float altura;
};
struct produtos{
	char nome[64];
	float preco;
	struct dimensoes din;	
}pro[2];
void cadastro(int n){
	if(n<=0){ printf("A opcao de Cadastrar um Produto na Posicao 0 nao esta disponivel.\n\n");} 
	else if(n!=0){
		scanf("%s", &(pro[n].nome));
		getchar();
		scanf("%f %f %f %f",&pro[n].preco,&pro[n].din.altura,&pro[n].din.largura,&pro[n].din.profundidade);
		getchar();
		printf("Produto %d cadastrado com sucesso!\n\n",n);
	}
	n==0;
}
void ler(int n){
	if(n<=0){ printf("A opcao de Consultar um Produto na Posicao 0 nao esta disponivel.\n\n");} 
	else {
		if(strlen(pro[n].nome)!=0){
			printf("%s, R$%.2f Altura:%.2fm Largura:%.2fm Profundidade:%.2fm\n\n",pro[n].nome,pro[n].preco,pro[n].din.altura,pro[n].din.largura,pro[n].din.profundidade);
		} else 
			printf("Produto nao Cadastrado\n\n");
	}
}
int main(){
	int op,n=0;
	Menu:
	printf("Menu:\n1.Cadastro.\n2.Consulta.\n3.Fechar Programa.\nOpcao: ");
	scanf("%d",&op);
	getchar();
	switch(op){
		case 1: scanf("%d",&n);getchar();cadastro(n);goto Menu;
		case 2:	scanf("%d",&n);getchar();ler(n);goto Menu;
		case 3: return 0;
	}	
}

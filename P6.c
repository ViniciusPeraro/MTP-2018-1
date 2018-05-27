//Vinicius Peraro 11721ECP007
#include <stdio.h>
int some(int n,int vet[20]){
	int i;
	float r=0;
	for (i=0;i<n;i++){
		r=r+vet[i];
	}
	return r;
}
void media(int n,float r){;
	printf("Media = %.1f",r/n);
}
int main(void){
	int n,i,r,vet[20]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	inicio:
	printf("Insira uma quantidade entre 5 a 20: ");
	scanf("%d",&n);
	getchar();
	if (n<5 || n>20){
		goto inicio;
	}
	for (i=0;i<n;i++){
		scanf("%d",&vet[i]);
		getchar();
	}
	r=some(n,vet);
	media(n,r);
}

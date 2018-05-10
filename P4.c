//Vinicius Peraro de Oliveira 11721ECP007
#include <stdio.h>
int main(){
	char str[256];
	scanf("%s",&str);
	int i,nada;
	for (i=0;str[i]!='\0';i++){
		str[i]=(int)str[i];
		if (str[i]>=48 && str[i]<=57){
			printf("%d",str[i]-48);
		} else {
			nada=0;
		}
	}
	if(nada==0){
		printf("%d",nada);
	}
}

//Vinicius Peraro de Oliveira 11721ECP007
#include <stdio.h>
int stdlen(char str[]){
	int i,n;
	for(i=0;str[i]!='\0';i++){
	}
	return i;
}
int main(){
	char str[256];
	scanf("%s",str);
	int x=stdlen(str),in[x],i;
	for (i=0;str[i]!='\0';i++){
		in[i]=(int)str[i];
		if (in[i]>=48 && in[i]<=57){
			printf("%d",in[i]-48);
		} 
	}
}

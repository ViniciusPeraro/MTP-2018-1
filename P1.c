//Vinicius Peraro de Oliveira 11721ECP007
#include <stdio.h>
int main(void)
{
    int i,st=0;
    unsigned char bi[255];
    printf("Insira uma sequencia de '0' e '1': ");
    scanf("%s",bi);
    for(i=0;bi[i]!='\0';i++){
    	
        if(st==0){
        	if(bi[i]=='0'){st = 0;}
            if(bi[i]=='1'){st = 1;}
        }
    	else if(st==1){
            if(bi[i]=='1'){st = 0;}
            if(bi[i]=='0'){st = 2;}
        }
        else if(st==2){
            if(bi[i]=='1'){st = 2;}
            if(bi[i]=='0'){st = 1;}
        }
    }
    if(st==0){
        printf("\nE multiplo de 3.");
    }
    else if(st!=0){
        printf("\nNao e multiplo de 3.");
    }
    return 0;
}

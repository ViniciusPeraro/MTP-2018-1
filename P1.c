//Vinicius Peraro de Oliveira 11721ECP007
#include <stdio.h>
int main(void)
{
    int i,st=0;
    char bi[255];
    scanf("%s",&bi);
    for(i=0;bi[i]!='\0';i++){
        if(st==0)
        {
               if(bi[i]=='0'){st = 0;}
            if(bi[i]=='1'){st = 1;}
        }
           else if(st==1)
        {
            if(bi[i]=='1'){st = 0;}
            if(bi[i]=='0'){st = 2;}
        }
           else if(st==2)
        {
            if(bi[i]=='1'){st = 2;}
            if(bi[i]=='0'){st = 1;}
           }
    }
    if(st==0)
    {
        printf("O numero inserido e multiplo de 3");
    }
    else if(st!=0)
    {
        printf("O numero inserido nao e multiplo de 3");
    }
}


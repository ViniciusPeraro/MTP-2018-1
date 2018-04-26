//Vinicius Peraro de Oliveria 11721ECP007
#include <stdio.h>
int bi(int op)
{
	char str[256];
    int i;
    int n=0;
    gets(str);
    for(i=0;str[i];i++){
        	if(str[i] == '1')
    	n = (n*2)+1;
        	if(str[i] == '0')
        n = (n*2);
    }
    printf("%d + %s",op,str);
    return n;
}
void deci(int n,int op) 
{
	int r,i;
	printf("%d + %d retorna ",op,n);
	for(i = 31; i >= 0; i--)
	{
		r = n >> i;
			if(r & 1) 
			{
				printf("1");
   			} 
			else {
        		printf("0");
   		}
 	}
 }
int main (void){
	int op,n;
	printf("Menu\n1.Binario para Decimal\n2.Binario para Hexadecimal\n3.Hexadecimal para Decimal\n4.Hexadecimal para Binario\n5.Decimal para Binário\n6.Decimal para Hexadecimal\n7.Octal para Decimal\n8.Decimal para Octal\nOpcao escolhida: ");
	scanf("%d",&op);
	switch (op)
	{
		case 1 :bi(op);n=bi(op);printf(" retorna '%d'",n);break;
		case 2 :bi(op);n=bi(op);printf(" retorna '%x'",n);break;
		case 3 :scanf("%x",&n);printf(" retorna '%d'",n);break;
		case 4 :scanf("%x",&n);deci(n,op);break;
		case 5 :scanf("%d",&n);deci(n,op);break;
		case 6 :scanf("%d",&n);printf(" retorna '%x'",n);break;
		case 7 :scanf("%o",&n);printf(" retorna '%d'",n);break;
		case 8 :scanf("%d",&n);printf(" retorna '%o'",n);break;	
	}
}

//Vinicius Peraro 11721ECP007
#include <stdio.h>
int A(int a,int b){
    if (a==0){
    	return b+1;	
	}
    if (a>0 && b==0){
    	return A(a-1, 1);	
	}
    if (a>0 && b>0){
    	return A(a-1,A(a,b-1));
	}
    return A(a-1,A(a,b-1));
}
int main ()
{
    int n=0, m=0;
    printf("Insira o valor de M e N (nessa ordem): ");
    scanf("%d %d",&m,&n);
    getchar();
    printf("resulta em: %d",A(m, n));
    return 0;
}

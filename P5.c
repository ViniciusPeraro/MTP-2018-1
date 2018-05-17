//Vinicius Peraro de Oliveira 11721ECP007
#include <stdio.h>
int main (){
    int op,i,n[64];
    char str[255];
    int *pi = (int *) str;
    char *ps = (char *) &n;
    printf("Menu:\n1.Codificar\n2.Decodificar\nOpcao: ");
    scanf("%d",&op);
    switch(op){
    case 1:
    	i=getchar();
        printf("Insira uma frase\n");
        fgets(str,255,stdin);
        for(i=0;str[i]!=0;i++){
            if(str[i]==10){str[i]=0;}
        }
		while(*pi!=0){
			printf("%d ",*pi);
			pi++;
		}
        break;
    case 2:
    	i=getchar();
        printf("Insira um numero\n");
        for(i=0;i<64;i++){
            scanf("%d",&n[i]);
            if(getchar()=='\n')
            {
                break;
            }
        }
        while(*ps!=0){
			printf("%c",*ps);
			ps++;
		}
        break;
    }
}

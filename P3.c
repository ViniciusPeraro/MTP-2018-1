//Vinicius Peraro de Oliveira 11721ECP007
#include <stdio.h>
int binario (int n){
	int b,i;
	for(i=31;i>=0;i--){
		b=n>>i;
		if(b&1){
			printf("1");
   		} 
		else{
        	printf("0");
   		}
 	}
 }
int NOR (){
	int x,nb;
	scanf("%d",&x);
	printf("\nNOT %d (",x);
	nb=binario(x);
	printf(") : %d (",~x);
	nb=binario(~x);
	printf(")\n\n");
}
int AND (){
	int x,y,nb;
	scanf("%d %d",&x,&y);
	printf("\n%d (",x);
	nb=binario(x);
	printf(") AND %d (",y);
	nb=binario(y);
	printf(") : %d (",x & y);
	nb=binario(x & y);
	printf(")\n");
}
int OR (){
	int x,y,nb;
	scanf("%d %d",&x,&y);
	printf("\n%d (",x);
	nb=binario(x);
	printf(") OR %d (",y);
	nb=binario(y);
	printf(") : %d (",x | y);
	nb=binario(x | y);
	printf(")");
}
int XOR (){
	int x,y,nb;
	scanf("%d %d",&x,&y);
	printf("\n%d (",x);
	nb=binario(x);
	printf(") XOR %d (",y);
	nb=binario(y);
	printf(") : %d (",x ^ y);
	nb=binario(x ^ y);
	printf(")");
}
int RS (){
	int x,y,nb;
	scanf("%d %d",&x,&y);
	printf("\n%d (",x);
	nb=binario(x);
	printf(") >> %d (",y);
	nb=binario(y);
	printf(") : %d (",x >> y);
	nb=binario(x >> y);
	printf(")");
}
int LS (){
	int x,y,nb;
	scanf("%d %d",&x,&y);
	printf("\n%d (",x);
	nb=binario(x);
	printf(") << %d (",y);
	nb=binario(y);
	printf(") : %d (",x << y);
	nb=binario(x << y);
	printf(")");
}
int main (void){
	int op;
	Menu:
	printf("Menu:\n1. NOT.\n2. AND.\n3. OR.\n4. XOR.\n5. Right Shift.\n6. Left Shift.\nOpcao: ");
	scanf("%d",&op);
	switch(op){
		case 1: NOR();break;
		case 2: AND();break;
		case 3: OR();break;
		case 4: XOR();break;
		case 5: RS();break;
		case 6: LS();break;
	}
	if (op < 1 || op > 6){
		printf("Comando invalido !!\nEscolha outra opcao: ");
		goto Menu;
	}
}

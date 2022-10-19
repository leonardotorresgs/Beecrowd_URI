#include <iostream>

int main() {
	int x, z, soma=0, cont=1;
	
	scanf("%d", &x);
	
	do{
		scanf("%d", &z);	
	}while(z<=x);
	
	soma = x;	
	do{
		soma = soma + (x+1);		
		cont++;
		x++;
//		printf("%d %d\n", soma, cont);	
 	}while(soma<=z);
	
	printf("%d\n", cont);
}

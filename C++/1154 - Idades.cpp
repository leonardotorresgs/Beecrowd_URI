#include <iostream>

int main() {
	double n, soma=0, cont=0;
	
	do{
		scanf("%lf", &n);
		if(n>0){
		soma+=n;
		cont++;
		}
	}while(n>0);
	printf("%.2lf\n", soma/cont);
}

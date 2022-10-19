#include <iostream>

int main(){
	double a, b, n1, n2, media;
	int op;
	
	do{
		do{
			scanf("%lf", &a);
			if((a<0) || (a>10)) printf("nota invalida\n");
			else n1=a;
		}while(n1!=a);
		
		do{
			scanf("%lf", &b);
			if((b<0) || (b>10)) printf("nota invalida\n");
			else n2=b;
		}while(n2!=b);
		
		media=(n1+n2)/2;
		printf("media = %.2lf\n", media);
		
		do{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &op);
		}while((op!=1) && (op!=2));
	}while(op!=2);
}

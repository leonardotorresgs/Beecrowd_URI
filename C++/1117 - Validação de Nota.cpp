#include <iostream>

int main(){
	double a, b, n1=0, n2=0, media;
	
	do{
		scanf("%lf", &a);
		if((a<0) || (a>10)) printf("nota invalida\n");
		else n1=a;
	}while(n1==0);
	
	do{
		scanf("%lf", &b);
		if((b<0) || (b>10)) printf("nota invalida\n");
		else n2=b;
	}while(n2==0);
	
	media = (n1+n2)/2;
	printf("media = %.2lf\n", media);
}

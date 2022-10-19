#include <iostream>
int main(){
	
	int x=1, a, soma;
	while(x!=0){
		scanf("%d", &x);
		if (x==0) break;
		soma=0;
		a=0;
		while(a<5){
			if(x%2==0){
				soma+=x;
				a++;
			}
			x++;
		}
		printf("%d\n", soma);
	}
}

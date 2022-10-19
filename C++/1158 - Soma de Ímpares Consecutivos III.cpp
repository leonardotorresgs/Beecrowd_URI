#include <iostream>

int main(){
	int n, x, y, a, soma;
	
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d %d", &x, &y);
		a=0;
		soma=0;
		while(a<y){
			if(x%2!=0){
				soma+=x;
				a++;
			}
			x++;
		}
		printf("%d\n", soma);
	}
}

#include <iostream>

int main(){
	int m=1, n=1, soma;
	
	while((m>0) && (n>0)){
		scanf("%d %d", &m, &n);
		soma=0;
		if((m<n) && (m>0) && (n>0)){
			for(int i=m;i<=n;i++){
			printf("%d ", i);	
			soma+=i;
			}
			printf("Sum=%d\n", soma);
		}
		else if((m>n) && (m>0) && (n>0)){
			for(int i=n;i<=m;i++){
				printf("%d ", i);
				soma+=i;
			}
			printf("Sum=%d\n", soma);
		}
	}
}

#include <iostream>

int main(){
	int soma, i, x, y;
	
	scanf("%d", &x);
	scanf("%d", &y);
	
	if(x<y){
		for(i=x;i<=y;i++){
			if(i%13!=0) soma=soma+i;
		}
	}
	else if(x>y){
		for(i=y;i<=x;i++){
			if(i%13!=0) soma=soma+i;
		}
	}
	printf("%d\n", soma);
}

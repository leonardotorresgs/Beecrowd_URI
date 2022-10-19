#include <iostream>

int main(){
	int i, x;
	
	do{
		scanf("%d", &x);
		if(x!=0){
			for(i=1;i<x;i++){
				printf("%d ", i);
			}
			printf("%d\n", x);
		}
	}while(x!=0);
}

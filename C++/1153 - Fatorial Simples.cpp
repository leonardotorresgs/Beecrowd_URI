#include <iostream>

int main(){
	int i, n, fat=1;
	
	scanf("%d", &n);
	
	for(i=n;i>=1;i--){
		fat*=i;
	}
	printf("%d\n", fat);
}

#include <iostream>

int main(){
	int i, x, y;
	
	scanf("%d %d", &x, &y);
	
	for(i=1;i<=y;i++){
		if(i%x!=0) printf("%d ", i);
		else printf("%d\n", i);
	}
}

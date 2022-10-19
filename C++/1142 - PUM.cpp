#include <iostream>

int main() {
	int i, n;
	
	scanf("%d", &n);
	for(i=1;i<=n*4;i++){
		if(i%4==0){
			printf("PUM");
			if(i<n*4) printf("\n");
		}
		else printf("%d ", i);
	}
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(){
 
// int n, i;
 
// scanf("%d", &n);
 
// for(i=1;i<=n*4;i+=4){
//  printf("%d ", i);
//  printf("%d ", i+1);
//  printf("%d ",i+2);
//  printf("PUM\n");
// }
//}

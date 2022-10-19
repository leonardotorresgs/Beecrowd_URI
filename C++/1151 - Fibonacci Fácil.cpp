#include <iostream>
int main(){
	int n, f, f_a=1, f_aa=0;
	
	scanf("%d", &n);
	
	if (n>0) printf("0 ");
	if (n>1) printf("1 ");
	for(int i=2;i<n;i++){ 
		f = f_aa + f_a;
		f_aa = f_a;
		f_a = f;
		if (i==n-1) printf("%d\n", f);
		else printf("%d ", f);
	}
}

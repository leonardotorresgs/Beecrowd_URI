#include <iostream>

int main() {
	int i, n;
	double x, y;
	float result;
	
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%lf %lf", &x, &y);
		if (y==0) printf("divisao impossivel\n");
		else {
			result = x/y;
			printf("%.1f\n", result);	
		}
	}
}

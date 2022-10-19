#include <iostream>
using namespace std;

int main(){
	int t, n, num, n1, n2;
	
	cin >> t;
	
	for(int i=0;i<t;i++){
		cin >> n;
		if(n>0){
			int fib[n];
			n1 = 0;
			n2 = 1;
			fib[0] = 0;
			for(int i=1;i<=n;i++){
				fib[i] = n1 + n2;
				n1 = n2;
				n2 = fib[i];
			}
			cout << "Fib(" << n << ") = " << fib[n-1] << endl;	
		}
		else cout << "Fib(0) = 0" << endl;
	}
}

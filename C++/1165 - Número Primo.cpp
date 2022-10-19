#include<iostream>
using namespace std;

int main(){
	
	int n, x, cont;
	
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> x;
		cont = 0;
		
		for(int j=2;j<=x/2;j++){
			if(x%j==0){
				cont++;
			}
		}
		
		if(cont>0) cout << x << " nao eh primo" << endl;
		else cout << x << " eh primo" <<endl;
	}
}

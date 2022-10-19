#include <iostream>
using namespace std;

int main(){
	int v, N[10];
	
	cin >> v;
	
	for(int i=0;i<10;i++){
		N[i] = v;
		v += v;	
	}
	
	for(int i=0;i<10;i++){
		cout << "N[" << i << "] = " << N[i] << endl;
	}
}

#include <iostream>
using namespace std;

int main(){
	int N[20], aux, j=19;
	
	for(int i=0;i<20;i++){
		cin >> N[i];
	}
	
	for(int i=0;i<10;i++){
		aux = N[i];
		N[i] = N[j];
		N[j] = aux;
		j--;
	}
	
	for(int i=0;i<20;i++){
		cout << "N[" << i << "] = " << N[i] << endl;
	}
}

#include <iostream>
using namespace std;

int main(){
	
	int t, pA, pB, anos;
	float g1, g2;
	
	cin >> t;
	
	for(int i=0;i<t;i++){
		cin >> pA >> pB >> g1 >> g2;
		anos = 0;
		
		do{
			pA += (g1*pA)/100;
			pB += (g2*pB)/100;
					
			anos++;
			
			if(anos>100) break;
			
		}while(pA<=pB);
		
		if (anos<=100)
			cout << anos << " anos." << endl;
		else
			cout << "Mais de 1 seculo." << endl;
	}
}

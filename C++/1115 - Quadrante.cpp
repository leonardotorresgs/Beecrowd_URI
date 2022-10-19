#include <iostream>

int main(){
	int x, y;
	
	do {
		scanf("%d %d", &x, &y);
		if((x>0) && (x!=0)){
			if(y>0) printf("primeiro\n");
			else printf("quarto\n");
		}
		else if ((x<0) && (x!=0)) {
			if(y>0) printf("segundo\n");
			else printf("terceiro\n");
		}
	} while((x!=0) && (y!=0));
}

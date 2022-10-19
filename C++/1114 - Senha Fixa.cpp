#include <iostream>

int main(){
	int entrada, senha = 0;
	
	while(senha == 0){
		scanf("%d", &entrada);
		if (entrada == 2002){
			senha++;
		}
		else printf("Senha Invalida\n");
	}
	printf("Acesso Permitido\n");
}

#include <iostream>

int main(){
	int gols_inter, gols_gremio, resposta, inter=0, gremio=0, empate=0, grenal=0;
	
	do{
		scanf("%d %d", &gols_inter, &gols_gremio);
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &resposta);
		if (gols_inter>gols_gremio) inter++;
		else if (gols_inter<gols_gremio) gremio++;
		else empate++;
		grenal++;
	}while(resposta==1);
	
	printf("%d grenais\n", grenal);
	printf("Inter:%d\n", inter);
	printf("Gremio:%d\n", gremio);
	printf("Empates:%d\n", empate);
	
	if(inter>gremio) printf("Inter venceu mais\n");
	else if(inter<gremio) printf("Gremio venceu mais\n");
	else printf("Não houve vencedor\n");
}

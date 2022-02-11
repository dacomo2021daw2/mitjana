#include <stdio.h>

int main() {
	float suma=0.0;
	float nou_valor=0.0;
	int numero_repeticions=0;
	char consulta='s';
	
	while(consulta=='s') {
		printf("Dòna la següent dada: ");
		scanf("%f",&nou_valor);
		suma+=nou_valor;
		numero_repeticions++;
		printf("Vols continuar (s/n): ");
		scanf("%s",&consulta); 
	}
	printf("La mitjana resultant és: %.2f\n",suma/numero_repeticions);
	return 0;
}

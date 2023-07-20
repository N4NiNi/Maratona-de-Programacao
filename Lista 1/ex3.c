#include <stdio.h>
#include <stdlib.h>

int main(void){    	
    // Seu código vai aqui
	int vet[100];
	int maior = 0;
	for(int i=0; i<100; i++){
		scanf("%d", &vet[i]);
		if(vet[i] >= maior){
			maior = vet[i];
		}
		if(vet[i] == 0){
			printf("%d\n", maior);
			break;
		}
	}
    return 0;
}
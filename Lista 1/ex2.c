#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Lendo a entrada do exercício
	int P, R;
	scanf("%d %d",&P, &R);
	if(P == 0){
		printf("C\n");
	}else if(P == 1 && R==0){
		printf("B\n");
	}else{
		printf("A\n");
	}
    // Seu código vai aqui
	return 0;
}
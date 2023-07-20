#include <stdio.h>

void bubble_sort (int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {

        for (j = 0; j < n - 1; j++) {

            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main(void) {
  int vet[3];
  int ord[3];

  for(int i = 0; i<3; i++){
    scanf("%d", &vet[i]);
    ord[i]=vet[i];
  }
  bubble_sort(ord, 3);

  for(int i = 0; i<3; i++){
    printf("%d\n", ord[i]);
  }
  printf("\n");
  for(int i = 0; i<3; i++){
    printf("%d\n", vet[i]);
  }
  
}
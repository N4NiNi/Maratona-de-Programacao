#include <stdio.h>

#define MAX_LENGTH 100000

int main() {
    int n;
    scanf("%d", &n);

    for (int z = 0; z < n; z++) {
        char cadeia[MAX_LENGTH];
        scanf("%s", cadeia);

        char stack[MAX_LENGTH];
        int top = -1; // Topo da pilha

        int i = 0;
        while (cadeia[i] != '\0') {
            char current = cadeia[i];
            if (current == '{' || current == '(' || current == '[') {
                // Empilha o caractere de abertura
                top++;
                stack[top] = current;
            } else if (current == '}' || current == ')' || current == ']') {
                // Verifica se o caractere de fechamento corresponde ao topo da pilha
                if (top < 0 || (current == '}' && stack[top] != '{') || 
                              (current == ')' && stack[top] != '(') || 
                              (current == ']' && stack[top] != '[')) {
                    // Não corresponde, a sequência é inválida
                    //printf("N\n");
                    break;
                } else {
                    // Corresponde, desempilha o caractere de abertura
                    top--;
                }
            }
            i++;
        }

        // Verifica se a pilha está vazia (todos os caracteres foram verificados corretamente)
        if (top == -1) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}

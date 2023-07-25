#include <stdio.h>

int main() {
    int d, sumTime;
    scanf("%d %d", &d, &sumTime);

    int minTime[d], maxTime[d];
    int totalMinTime = 0, totalMaxTime = 0;

    for (int i = 0; i < d; i++) {
        scanf("%d %d", &minTime[i], &maxTime[i]);
        totalMinTime += minTime[i];
        totalMaxTime += maxTime[i];
    }

    if (sumTime >= totalMinTime && sumTime <= totalMaxTime) {
        printf("YES\n");
        int remainingTime = sumTime - totalMinTime;

        for (int i = 0; i < d; i++) {
    // Calcula quanto tempo gastar na atividade 'i'
    int timeToSpend;

    // Verifica se ainda há tempo restante para gastar em atividades
    if (remainingTime > 0) {
        // Verifica se o tempo restante é menor que o tempo máximo possível para a atividade 'i'
        if (remainingTime < maxTime[i] - minTime[i]) {
            // Se sim, o tempo a ser gasto é o tempo mínimo da atividade 'i' mais o tempo restante disponível
            timeToSpend = minTime[i] + remainingTime;
        } else {
            // Caso contrário, pode-se gastar o tempo máximo possível na atividade 'i'
            timeToSpend = maxTime[i];
        }
        // Atualiza o tempo restante subtraindo o tempo gasto na atividade 'i'
        remainingTime -= (timeToSpend - minTime[i]);
    } else {
        // Se não há tempo restante, então o tempo a ser gasto é o tempo mínimo da atividade 'i'
        timeToSpend = minTime[i];
    }

    // Imprime o tempo a ser gasto na atividade 'i'
    printf("%d ", timeToSpend);
}

        printf("\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

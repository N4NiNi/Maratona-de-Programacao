#include <stdio.h>
#include <math.h>

int getDigits(int number) {
    int digits = 0;
    while (number != 0) {
        number /= 10;
        digits++;
    }
    return digits;
}

int main(void) {
    int n = 1;
    while (n >= 1) {
        scanf("%d", &n);
        if (n < 1) {
            break;
        }
        
        int maxNumber = pow(2, 2 * n - 2);
        int maxDigits = getDigits(maxNumber);
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int number = pow(2, j + i);
                int digits = getDigits(number);
                for (int k = 0; k < maxDigits - digits; k++) {
                    printf(" ");
                }
                printf("%d", number);
                if (j != n - 1) {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

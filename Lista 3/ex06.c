#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main(void) {
    int n;
    scanf("%d", &n);
    int agenda[n][2];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &agenda[i][0], &agenda[i][1]);
    }

    int dp[n];
    dp[n - 1] = 1;

    for (int i = n - 2; i >= 0; i--) {
        int nextCompatible = -1;
        for (int j = i + 1; j < n; j++) {
            if (agenda[i][1] <= agenda[j][0]) {
                nextCompatible = j;
                break;
            }
        }
        if (nextCompatible != -1) {
            dp[i] = 1 + dp[nextCompatible];
        } else {
            dp[i] = 1;
        }
        dp[i] = max(dp[i], dp[i + 1]);
    }

    printf("%d\n", dp[0]);
    return 0;
}

#include <stdio.h>

int main(void) {
    int a1, a2, k1, k2, n;
    int min_n, max_n;

    scanf("%d", &a1);
    scanf("%d", &a2);
    scanf("%d", &k1);
    scanf("%d", &k2);
    scanf("%d", &n);

    min_n = 0;
    max_n = 0;
    if(n <= ((a1*(k1-1)) + (a2*(k2-1)))){
        min_n = 0;
    }else{
        min_n = n - ((a1*(k1-1)) + (a2*(k2-1)));
    }

    if(k1<=k2){
        if(n <= (a1*k1)){
            max_n = n/k1;
        }else{
            max_n = a1 + ((n - (a1*k1))/k2);
        }
    }else{
        if(n <= (a2*k2)){
            max_n = n/k2;
        }else{
            max_n = a2 + ((n - (a2*k2))/k1);
        }

    }


    printf("%d %d\n", min_n, max_n);

    




}
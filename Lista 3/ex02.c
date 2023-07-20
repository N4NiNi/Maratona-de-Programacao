#include <stdio.h>
//bubble sort
void sort(int *a, int *b, int n){
    int i, j, temp_a, temp_b;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-1-i; j++){
            if(a[j] > a[j+1]){
                temp_a = a[j+1];
                temp_b = b[j+1];
                a[j+1] = a[j];
                b[j+1] = b[j];
                a[j] = temp_a;
                b[j] = temp_b;
            }
        }
    }
}

int main(void) {
    int s, n;
   
    int d_fla =0;

    scanf("%d %d", &s, &n);
    int f_dragon[n];
    int xp[n];
    for(int i=0; i<n; i++){
        scanf("%d %d", &f_dragon[i], &xp[i]);
    }
    sort(f_dragon, xp, n);
    
    for(int i=0; i<n; i++){
      //printf("%d %d", f_dragon[i], xp[i]);
        if(s > f_dragon[i]){
            s += xp[i];
        }else{
            d_fla = 1;
            break;
        }
    }
    if(d_fla == 0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}
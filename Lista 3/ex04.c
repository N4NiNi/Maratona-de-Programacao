#include <stdio.h>
int main(void){
    int n;
    int b =0;
    int c=0;
    int r=0;
    scanf("%d", &n);
    int vetor;
    for(int i=0;i<n;i++){
        scanf("%d", &vetor);
        if (vetor > 0)
        {
            b = b+vetor;
        }else{
            c = c+vetor;
        }
        
    }
    r = b-c;
    printf("%d\n", r);

}
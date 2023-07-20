#include <stdio.h>
#include <stdlib.h>

int main(){    	
  int vet[16];
  int h,p,f;
  int direct;
  int best;

  scanf("%d %d %d %d", &h, &p, &f, &direct);

  for (int i = 0; i<16; i++){
    f++;
    if(f == 16){
      f =0;
    }

    if(f == h){
      best = 1;//helecop antihorario
      break;
    }else if (f == p){
      best = -1;
      break;
    }
  }

  if(direct == best){
    printf("S\n");
  }else{
    printf("N\n");
  }

  
}
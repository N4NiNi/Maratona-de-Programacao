#include <stdio.h>
#include <stdlib.h>

int fb(n){
  if (n == 0 || n == 1){
    return 1;
  }
  return fb(n-1)+fb(n-2);
}

int main(){    	
  int n;
  scanf("%d", &n);
  printf("%d\n", fb(n));
  return 0;
  
}

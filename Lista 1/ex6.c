#include <stdio.h>
#include <stdlib.h>

int main(){    	
  int a, b;
  int i = 0;

  scanf("%d %d", &a, &b);
  while(b >= a){
    a = a*3;
    b = b*2;
    i++;
  }
  printf("%d\n", i);
}
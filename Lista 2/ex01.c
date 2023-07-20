#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  int h;
  int m;
  int s;

  if(n >= 3600){
    h = n/3600;
    m = (n%3600)/60;
    s = (n%3600)%60;
  }else if (n < 3600 && n>59){
    h = 0;
    m = n/60;
    s = n%60;
  }else{
    h = 0;
    m = 0;
    s = n;
  }
  printf("%d:%d:%d\n", h, m, s);
}
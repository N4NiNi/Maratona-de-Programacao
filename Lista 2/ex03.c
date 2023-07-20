#include <stdio.h>
double fatorial(int n)
{
  double fat;
  
  if ( n <= 1 )
    return (1);
  else
  {
    fat = n * fatorial(n - 1);
    return (fat);
  }
}
int main(void){
  int n;
  scanf("%d", &n);
  printf("%.lf\n", fatorial(n));
  
}
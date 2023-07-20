#include <stdio.h>
#include <math.h>

int main(void) {
  double a,b,c;
  double delta;
  double raiz, x1,x2;
  scanf("%lf %lf %lf", &a, &b, &c);

  if(a == 0){
    printf("Impossivel calcular\n");
    return 0;
  }

  delta = (b*b) - (4*a*c);

  if(delta <= 0){
    printf("Impossivel calcular\n");
    return 0;
  }
  raiz = sqrt(delta);
  x1 = (-(b)+raiz)/(2*a);
  x2 = (-(b)-raiz)/(2*a);
  printf("R1 = %.5lf\n", x1);
  printf("R2 = %.5lf\n", x2);
  
  
  

  
  
  
  
}
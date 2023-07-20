#include <stdio.h>
#include <math.h>

int main(void) {
  float valor;
  int nota100 = 0;
  int nota50 = 0;
  int nota20 = 0;
  int nota10 = 0;
  int nota5 = 0;
  int nota2 = 0;
  int m1 = 0;
  int m050 = 0; 
  int m025 = 0; 
  int m010 = 0;
  int m05 = 0; 
  int m01 = 0;
  
  
  scanf("%f", &valor);

  if(valor>=100){
    nota100 = valor/100;
    valor = valor - (nota100*100);
  }
  if(valor >=50){
    nota50 = valor/50;
    valor = valor - (nota50*50);
  }
  if(valor >=20){
    nota20 = valor/20;
    valor = valor - (nota20*20);
  }
  if(valor >=10){
    nota10 = valor/10;
    valor = valor - (nota10*10);
  }
  if(valor >=5){
    nota5 = valor/5;
    valor = valor - (nota5*5);
  }
  if(valor >=2){
    nota2 = valor/2;
    valor = valor - (nota2*2);
  }
  if(valor >= 1){
    m1 = valor/1;
    valor  = valor -(m1*1);
  }
  valor = valor * 100;
  if(valor >= 50){
    m050 = valor/50;
    valor = valor -(m050*50);
  }
  if(valor >= 25){
    m025 = valor/25;
    valor = valor -(m025*25);
  }
  if(valor >= 10){
    m010 = valor/10;
    valor = valor -(m010*10);
  }
  if(valor >= 5){
    m05 = valor/5;
    valor = valor -(m05*5);
  }
  if(valor >= 1){
    m01 = round(valor)/1;
    valor = valor -(m01*1);
  }

  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n", nota100);
  printf("%d nota(s) de R$ 50.00\n", nota50);
  printf("%d nota(s) de R$ 20.00\n", nota20);
  printf("%d nota(s) de R$ 10.00\n", nota10);
  printf("%d nota(s) de R$ 5.00\n", nota5);
  printf("%d nota(s) de R$ 2.00\n", nota2);

  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n", m1);
  printf("%d moeda(s) de R$ 0.50\n", m050);
  printf("%d moeda(s) de R$ 0.25\n", m025);
  printf("%d moeda(s) de R$ 0.10\n", m010);
  printf("%d moeda(s) de R$ 0.05\n", m05);
  printf("%d moeda(s) de R$ 0.01\n", m01);

  
}
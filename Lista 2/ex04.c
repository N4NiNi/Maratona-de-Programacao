#include <stdio.h>

int main(void){
  int n;
  int vetimp[5];
  int vetpar[5];
  int contpar=0;
  int contimp=0;

  for(int i=0; i<15; i++){
    scanf("%d",&n);
    if(n%2 == 0){
      
      vetpar[contpar]=n;
      contpar++;
      
    }else{
      vetimp[contimp]=n;
      contimp++;  
      
    }
    if(contimp == 5 || i == 14){
        for(int j=0;j<contimp;j++){
          printf("impar[%d] = %d\n", j,vetimp[j]);
          
        }
        contimp=0;
    }
    
    if(contpar == 5 || i == 14){
        for(int j=0;j<contpar;j++){
          printf("par[%d] = %d\n", j,vetpar[j]);
        }
        contpar=0;
      }

    
  }
  
  
}
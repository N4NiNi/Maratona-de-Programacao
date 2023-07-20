#include <stdio.h>
int main(void){
    int n;
    char cadeia[100000];
    char selecionada;
    char proibido[2];
    int cont = 0;
    int flag = 1;
    int check = 0;
    scanf("%d", &n);
    for(int z=0;z<n; z++){
        scanf("%s", cadeia);
        cont = 0;
        check = 0;
        while(cadeia[cont] != '\0'){
            cont++;
            //printf("%d\n", cont);
        }
        for(int i=0;i<cont;i++){
           if(cadeia[cont-i-1] == '{' || cadeia[cont-i-1] == '(' || cadeia[cont-i-1] == '['){
                check++;
                if(cadeia[cont-i-1] == '{'){
                    selecionada = '}';
                    proibido[0] = ')';
                    proibido[1] = ']';

                    //printf("entre aqui }\n");
                }else if(cadeia[cont-i-1] == '('){
                    selecionada = ')';
                    proibido[0] = '}';
                    proibido[1] = ']';
                    //printf("entre aqui )\n");

                }else{
                    selecionada = ']';
                    proibido[0] = '}';
                    proibido[1] = ')';
                    //printf("entre aqui ]\n");
                }
                for(int j=cont-i-1;j<cont;j++){
                    if(cadeia[j] == proibido[0] || cadeia[j] == proibido[1]){
                        flag = 1;
                        break;
                    }
                    if(cadeia[j] == selecionada){
                        check++;
                        flag = 0;
                        cadeia[j] = 'x';
                        break;
                    }else{
                        flag = 1;
                    }

                }
                if(flag == 1){
                    break;
                }
            } 
        }
        if(flag == 0 && check == cont){
            printf("S\n");
        }else{
            printf("N\n");
        }
        
    }
    


}
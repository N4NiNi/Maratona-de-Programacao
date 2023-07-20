#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int n;
	int l;
	int a = 0;
	int b = 0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &l);
		if(l == 2){
			b= !b;	
		}
		a = !a;
	}
	printf("%d\n", a);
	printf("%d\n", b);
	
    return 0;
}
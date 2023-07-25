#include <stdio.h>
#include <stdlib.h>

struct Fila {

	int capacidade;
	int *dados;
	int primeiro;
	int ultimo;
	int nItens; 

};

void criarFila( struct Fila *f, int c ) { 

	f->capacidade = c;
	f->dados = (int*) malloc (f->capacidade * sizeof(int));
	f->primeiro = 0;
	f->ultimo = -1;
	f->nItens = 0; 

}

void inserir(struct Fila *f, int v) {

	if(f->ultimo == f->capacidade-1)
		f->ultimo = -1;

	f->ultimo++;
	f->dados[f->ultimo] = v; // incrementa ultimo e insere
	f->nItens++; // mais um item inserido

}

int remover( struct Fila *f ) { // pega o item do comeÃ§o da fila

	int temp = f->dados[f->primeiro++]; // pega o valor e incrementa o primeiro

	if(f->primeiro == f->capacidade)
		f->primeiro = 0;

	f->nItens--;  // um item retirado
	return temp;

}

int estaVazia( struct Fila *f ) { // retorna verdadeiro se a fila estÃ¡ vazia

	return (f->nItens==0);

}

int estaCheia( struct Fila *f ) { // retorna verdadeiro se a fila estÃ¡ cheia

	return (f->nItens == f->capacidade);
}

void mostrarFila(struct Fila *f){

	int cont, i;

	for ( cont=0, i= f->primeiro; cont < f->nItens; cont++){

		printf("%d\t",f->dados[i++]);

		if (i == f->capacidade)
			i=0;

	}
	printf("\n\n");

}

//pilha
struct Pilha {

    int capacidade;
    int topo;
    int *dados;

};

void criarPilha(struct Pilha *p, int c) {

    p->capacidade = c;
    p->topo = -1;
    p->dados = (int*) malloc (p->capacidade * sizeof(int));

}

void empilhar(struct Pilha *p, int v) {

    p->topo++;
    p->dados[p->topo] = v; // incrementa o topo e insere

}

int desempilhar(struct Pilha *p) {

    int aux = p->dados[p->topo];
    p->topo--; // decrementa o topo
    return aux;

}

int estaVaziaPilha(struct Pilha *p) {

    return (p->topo == -1);

}

int estaCheiaPilha(struct Pilha *p) {

    return (p->topo == p->capacidade-1);

}

void mostrarPilha(struct Pilha *p) {

    printf("Pilha: ");
    for(int i=p->topo; i>=0; i--)
        printf("%d ", p->dados[i]);
    printf("\n");

}

int main(void) {
    int n;
    struct Fila caminhao;
    struct Pilha rua;
    scanf("%d", &n);
    while(n != 0){
        
        criarFila(&caminhao, n);
        criarPilha(&rua, n);
    
        for(int i=0; i<n; i++){
            int x;
            scanf("%d", &x);
            inserir(&caminhao, x);
        }
    
        //verificar se é possivel ordenar usando a rua
        int i=1;
        while(i<=n){
            if(!estaVazia(&caminhao) && caminhao.dados[caminhao.primeiro] == i){
                remover(&caminhao);
                i++;
            }else if(!estaVaziaPilha(&rua) && rua.dados[rua.topo] == i){
                desempilhar(&rua);
                i++;
            }else if(!estaVazia(&caminhao)){
                empilhar(&rua, caminhao.dados[caminhao.primeiro]);
                remover(&caminhao);
            }else{
                break;
            }
        }
        if(i == n+1){
            printf("yes\n");
        }else{
            printf("no\n");
        }

       //esvaziar a rua

    
    scanf("%d", &n);
    }

}
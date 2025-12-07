#include<stdio.h>
#include<stdlib.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

void exibe(struct Caixa* c){
    while(c!=NULL){
        printf("%d \n", c->valor);
        c= c->prox;
    }
    printf("\n");
}
int main(){
    
    struct Caixa *c1= malloc(sizeof*c1);
    struct Caixa *c2=malloc(sizeof*c2);
    struct Caixa *c3=malloc(sizeof*c3);
    struct Caixa *c4=malloc(sizeof*c4);
    struct Caixa *c5=malloc(sizeof*c5);

    c1->valor= 1;
    c2->valor= 3;
    c3->valor= 9;
    c4->valor= 7;
    c5->valor= 5;

    c1->prox= c2;
    c2->prox= c3;
    c3->prox= c4;
    c4->prox= c5;
    c5->prox= NULL;
    
    exibe(c1);
    
    struct Caixa* cabeca = c1;
    struct Caixa* removida= c3;
    
    //remover a caixa no indice 2
    c2->prox=c4;
    exibe(cabeca);
    
    //inserir a caixa removida no início da lista
    removida->prox=NULL;
    removida->prox= cabeca;
    cabeca= removida;
    exibe(cabeca);

    free(c1);
    free(c2);
    free(c3);
    free(c4);
    free(c5);

    return 0;
}

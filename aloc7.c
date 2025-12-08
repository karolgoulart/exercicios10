#include<stdio.h>
#include<stdlib.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

struct Caixa* concatena (struct Caixa* l1, struct Caixa* l2){
    if(l1==NULL) return l2; 
    Caixa* atual= l1;
    while(atual->prox != NULL){
        atual= atual->prox
    }
    atual->prox=l2;
    
    return l1;
}

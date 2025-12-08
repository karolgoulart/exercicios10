#include<stdio.h>
#include<stdlib.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

struct Caixa* concatena (struct Caixa* l1, struct Caixa* l2){
    if(l1==NULL) return l2;
    struct Caixa* atual= l1;
    while(atual->prox != NULL){
        atual= atual->prox;
    }
    
    struct Caixa* aux=l2;
    while(aux != NULL){
        struct Caixa* busca= l1;
        while(busca != NULL && busca->valor != auxvalor){
            busca= busca->prox;
        }
        if (busca==NULL){ 
            struct Caixa* novo= malloc(sizeof(struct Caixa));
            novo->valor= aux->valor;
            novo->prox= NULL;
            atual->prox= novo;
            atual= novo;
        }
        
        aux= aux->prox;
    }
    return l1;
}

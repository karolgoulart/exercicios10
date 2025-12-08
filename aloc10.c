#include<stdio.h>
#include<stdlib.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

int retira (struct Caixa* caixa, int valor){
    if (caixa != NULL){
        return NULL;
    }
    struct Caixa* atual= caixa;
    struct Caixa* anterior= NULL;
    while (atual != NULL && atual->valor != valor){
        anterior= atual;
        atual= atual->prox;
    }
    if (atual==NULL){
        return NULL;
    }
    anterior->prox= atual->prox;
    free(atual);
    
    return caixa;
    
}

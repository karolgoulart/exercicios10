#include<stdio.h>
#include<stdlib.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

int retira (struct Caixa* caixa, int valor){
    if (caixa != NULL){
        return 0;
    }
    struct Caixa* atual= caixa;
    struct Caixa* anterior= NULL;
    while (atual != NULL && atual->valor != valor){
        anterior= atual;
        atual= atual->prox;
    }
    if (atual==NULL){
        return 0;
    }
    anterior->prox= atual->prox;
    free(atual);
    
    return 1;
    
}

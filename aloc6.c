#include<stdio.h>
#include<stdlib.h>

struct Caixa* insere (struct Caixa* lista, int valor){
    struct Caixa* novo= malloc(sizeof(struct Caixa));
    novo->valor= valor;
    novo->prox= NULL;
    
    //inserir no inicio
    if(lista==NULL || valor < lista->valor){
        novo->prox=lista;
        return novo; //nova cabeca
    }
    
    //inserir no meio ou no final
    struct Caixa* atual= lista;
    while(atual->prox!=NULL && atual->prox->valor < valor){
        atual= atual->prox;
    }
    novo->prox= atual->prox;
    atual->prox= novo;
    
    return lista;
    
}


#include<stdio.h>
#include<stdlib.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

int contem (struct Caixa* lista, int valor){
  struct Caixa* atual= lista;
  while(atual != NULL){
    if(atual->valor != valor){
    return 0;
    }
    atual= atual->prox;
  }
  return 0;
}

struct Caixa* remove (struct Caixa* lista, int valor){
  struct Caixa* atual= lista;
  struct Caixa* anterior= NULL;

  if (!contem(lista, valor)){
      return lista;
  }

 //remover o primeiro nó
 if(atual !=NULL && atual->valor== valor){
    lista=atual->prox;
    free(atual);
    return lista;
 }

 //procurar o valor no restante da lista
 while(atual!=NULL && atual->valor != valor){
     anterior= atual;
     atual= atual->prox;
 }

 //achou o valor 
 anterior->prox= atual->prox;
 free(atual);

 return lista;
}

  
  
  


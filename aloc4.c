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

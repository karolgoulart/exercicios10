#include<stdio.h>
#include<stdlib.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

void imprime(struct Caixa* L){
    struct Caixa* atual= L;
    while( atual->prox != NULL){
        printf("%d", atual->valor);
        atual= atual->prox;
    }
}

int main(){
    struct Caixa* L= NULL;
    int x=0;
    
    while(x != -1){
        printf("Insira um número (-1 para parar): ");
        scanf("%d", &x);
        struct Caixa* novo= malloc(sizeof(struct Caixa));
        novo->valor=x;
        novo->prox=NULL;
        
        if (L==NULL){
            L= novo;
        }
        else{ 
            struct Caixa* atual= L;
            while(atual->prox != NULL){
                atual=atual->prox;
            }
        atual->prox=novo;
        }
    }
    imprime(L);
    return 0;
}

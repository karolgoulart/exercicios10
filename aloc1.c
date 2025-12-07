#include<stdio.h>
#include<stdlib.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

int main(){
    
    struct Caixa *c1= malloc(sizeof*c1);
    struct Caixa *c2=malloc(sizeof*c2);
    struct Caixa *c3=malloc(sizeof*c3);
    struct Caixa *c4=malloc(sizeof*c4);
    struct Caixa *c5=malloc(sizeof*c5);

    c1->valor= 1
    c2->valor= 3
    c3->valor= 9
    c4->valor= 7
    c5->valor= 5

    c1->prox= c2;
    c2->prox= c3;
    c3->prox= c4;
    c4->prox= c5;
    c5->prox= NULL;

    free(c1);
    free(c2);
    free(c3);
    free(c4);
    free(c5);

    return 0;
}


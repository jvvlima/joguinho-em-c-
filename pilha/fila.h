#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int valor;
    no *proximo;
}no;
typedef struct {
    no *inicio;
    no *fim;
}fila;


fila* cria_fila(fila, no){
    no *novo = malloc(sizeof(fila));
    novo -> inicio = NULL;
    novo -> fim = NULL;
    return novo;
}


int fila_push(fila *inicio , fila* fim, int i){
    fila* novo = malloc(sizeof(fila));
    if(fila ->inicio == NULL){
        printf("A fila esta vazia\n");
    }

}
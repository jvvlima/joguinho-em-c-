#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

//integrantes Fernando Rosa, João Victor Vaz, Arthur Moura, Vitória Ribeiro, Ana Marques//

//definindo o dado Pilha//
// a pilha terá em cada "membro" um valor numerico//
// e um ponteiro que aponta para o proximo item da pilha//
typedef struct{
    int numero;
    struct Pilha *proximo;
}Pilha;

//função para criar a pilha//
Pilha *cria_pilha(int x, Pilha *topo){
    Pilha *p = malloc(sizeof(Pilha));
    if(p != NULL){
        p -> numero = x;
        p -> proximo = topo;
    }
    return p;
}

//função para a operacao push//
//a função aloca memória dinamicamente, se a alocação for possível//
// ele passa um novo topo para a pilha//

int pilha_push (int i, Pilha *topo){
    Pilha *novo = malloc(sizeof(Pilha));
    if(novo != NULL){
    novo -> numero = i;
    novo -> proximo = topo;
    topo = novo;
    }
    return i;
}


//função para o operação pop//
//a função aloca dinamicamente a memória, se a alocação for possível//
//remove o ponteiro que aponta para o topo, retornando o ponteiro que//
//aponta para o próximo item da pilha//
Pilha* pilha_pop(Pilha **topo){
    if(*topo != NULL){
        Pilha *remover = *topo;
        *topo = (*topo) -> proximo;
        free (remover);
        return remover; 
    }
    else{
    printf ("Pilha vazia\n");
    }
    return NULL;
}
    


#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct Arvore{
    struct Arvore *menor;
    struct Arvore *maior;
    int valor;
};

struct Arvore* create_tree(int value) {
    struct Arvore* t = (struct Arvore*)malloc(sizeof(struct Arvore));

    if (t == NULL) {
        printf("Error allocationg memory!");
        return t;
    } 

    t->valor = value;
    t->menor = NULL;
    t->maior = NULL;

    return t;
}

void push_menor(struct Arvore* no, int new_value) {
    struct Arvore* new = (struct Arvore*)malloc(sizeof(struct Arvore));
    if (new == NULL) {
        printf("Error allocating memory!\n");
        return;
    } 

    new->valor = new_value;
    new->maior = no;
    new->menor = NULL;

}

void push_maior(struct Arvore* no, int new_value) {
    struct Arvore* new = (struct Arvore*)malloc(sizeof(struct Arvore));
    if (new == NULL) {
        printf("Error allocating memory!\n");
        return;
    } 

    new->valor = new_value;
    new->maior = NULL;
    new->menor = no;

}

void libera_arvore(struct Arvore* t) {
    while (t != NULL) {
        struct Arvore* auxMaior = t->maior;
        free(t);
        free(t->menor);
        t = auxMaior;
    }
}

void imprime_no(struct Arvore* no){
    if(no!=NULL){
        printf("%d ", no->valor);
        imprime_no(no->maior);
    }
}

void fila_imprime(struct Arvore* fila){
    imprime_no(fila->menor);
}

void main() {
    int value;

    printf("Insira um valor diferente de 0:\nPS: 0 irá encerar o programa!\n");
    scanf("%d", &value);

    if (value == 0) {
        printf("Bye, bye! :)");
    }

    struct Arvore* tree = create_tree(value);

    while (value != 0) {
        if (value == 0) {
            libera_arvore(tree);
            printf("Bye, bye! :)");
        }

        if (tree->valor > value) {
            push_menor(tree, value);
            imprime_no(tree);
        } else if (tree->valor < value) {
            push_maior(tree, value);
            imprime_no(tree);
        } else if (tree->valor == value) {
            printf("Valor já inserido! Insira um novo valor.");
        }

        printf("Insira um valor diferente de 0:\nPS: 0 irá encerar o programa!\n");
        scanf("%d", &value);
    }
    
    libera_arvore(tree);
    printf("Bye, bye! :)");

}
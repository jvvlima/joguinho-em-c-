#include <stdlib.h>
#include <stdio.h>
#include "circulo.h"

typedef struct{
    float centrox;
    float centroy;
    float raio;
}Circulo;

Circulo *circ_cria(float x, float y, float r){
    Circulo *c = malloc(sizeof(Circulo));
    c -> centrox = x;
    c -> centroy = y;
    c -> raio = r;

    return c;
}

void circ_libera(Circulo *c){
    FREE(*c);
}

float circ_area(Circulo *c){
    float area = c -> raio * c -> raio * 3.14;
    return area;
}

int circ_concentricos(Circulo *c1, Circulo *c2){
    if(c1 -> centrox == c2 -> centrox && c1 -> centroy == c2 -> centroy){
        printf("os circulos sao concenctricos\n");
    }else{
        printf("os circulos nao sao concenctricos\n");
    }
}

float circ_raio(Circulo *c){
    float raio = c -> raio;
    return raio;
}

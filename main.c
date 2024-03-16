#include <stdio.h>
#include "libmatematica.h"
#include <math.h>

int main () {
    float angulo_radianos = 1.047;
    float aux = calcular_cosseno(angulo_radianos);
    printf("o cosseno de %f é aproximadamente %f", angulo_radianos, aux);
    return 0;
}
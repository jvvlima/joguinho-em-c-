#include "../figuras-hpp/Quadrado.hpp"
#include "../figuras-hpp/Figura2D.hpp"


Quadrado::Quadrado(float lado)
:Figura2D(lado, lado) { }

float Quadrado::getArea() {
    return (this->lado * this->lado);
}

#include "../figuras-hpp/Cubo.hpp"
#include "../figuras-hpp/Figura3D.hpp"

Cubo::Cubo(float lado)
:Figura3D(lado, lado, lado) { }

float Cubo::getVolume() {
    return (this->lado * this->lado * this->lado);
}

float Cubo::getArea() {
    return ((this->lado * this->lado) * 6);
}
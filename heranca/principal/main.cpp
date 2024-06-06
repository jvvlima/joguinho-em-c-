#include <vector>
#include "../figuras-hpp/Figura.hpp"
#include "../figuras-hpp/Quadrado.hpp"
#include "../figuras-hpp/Cubo.hpp"

int main() {
    std::vector<Figura*> figuras;

    figuras.push_back(new Quadrado(5.0));
    figuras.push_back(new Cubo(3.0));
    figuras.push_back(new Quadrado(4.0));
    figuras.push_back(new Cubo(2.0));

    for (auto figura : figuras) {
        std::cout << "Área: " << figura->getArea() << std::endl;
    }

    for (auto figura : figuras) {
        delete figura;
    }

    return 0;
}
#ifndef QUADRADO
#define QUADRADO

#include "Figura2D.hpp"

class Quadrado : public Figura2D 
{
    private:
        float lado;

    public:
        Quadrado(float lado);
        virtual ~Quadrado() { std::cout << "Quadrado" << std::endl; };
        float getArea() override;
};

#endif
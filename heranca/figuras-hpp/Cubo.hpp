#ifndef CUBO 
#define CUBO 

#include <iostream>
#include "Figura3D.hpp"

class Cubo : public Figura3D 
{
    private:
        float lado;

    public:
        Cubo(float lado);
        virtual ~Cubo() { std::cout << "Cubo" << std::endl; };
        float getVolume() override;
        float getArea() override;
};

#endif
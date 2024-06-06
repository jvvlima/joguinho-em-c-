#ifndef FIGURA_3D
#define FIGURA_3D

#include "Figura.hpp"
#include <iostream>

class Figura3D : public Figura 
{
    public:
        Figura3D(float base, float altura, float largura);
        virtual float getVolume() = 0;
        virtual ~Figura3D() { std::cout << "Figura3D" << std::endl; };;
};

#endif
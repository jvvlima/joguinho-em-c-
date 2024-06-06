#ifndef FIGURA_2D
#define FIGURA_2D

#include "Figura.hpp"

class Figura2D : public Figura 
{
    public:
        Figura2D(float base, float altura);
        virtual ~Figura2D() { std::cout << "Figura2D" << std::endl; };
};

#endif
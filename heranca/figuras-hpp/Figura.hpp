#ifndef FIGURA
#define FIGURA

#include <iostream>

class Figura 
{
    public:
        Figura(float base, float altura);
        virtual float getArea() = 0;
        virtual ~Figura() { std::cout << "Figura" << std::endl; };;
};

#endif
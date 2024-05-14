#ifndef PEITORAL
#define PEITORAL

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Peitoral : public ArmaDefesa
{
    public:
        Peitoral(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif
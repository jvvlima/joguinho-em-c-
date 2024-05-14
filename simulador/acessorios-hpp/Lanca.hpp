#ifndef LANCA
#define LANCA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Lanca : public ArmaAtaque
{
    public:
        Lanca(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif
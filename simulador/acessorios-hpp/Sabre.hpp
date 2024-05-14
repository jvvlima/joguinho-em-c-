#ifndef SABRE
#define SABRE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Sabre : public ArmaAtaque
{
    public:
        Sabre(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif
#ifndef PIRATA
#define PIRATA
#include "../core-simulador-hpp/Personagem.hpp"
class Pirata : public Personagem
{
    public:
        Pirata(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif
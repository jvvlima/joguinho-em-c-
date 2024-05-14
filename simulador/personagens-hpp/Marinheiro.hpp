#ifndef MARINHEIRO
#define MARINHEIRO
#include "../core-simulador-hpp/Personagem.hpp"
class Marinheiro : public Personagem
{
    public:
        Marinheiro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif
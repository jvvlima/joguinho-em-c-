#ifndef CAPITAO
#define CAPITAO
#include "../core-simulador-hpp/Personagem.hpp"
class Capitao : public Personagem
{
    public:
        Capitao(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif
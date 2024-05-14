#ifndef CIVIL
#define CIVIL
#include "../core-simulador-hpp/Personagem.hpp"
class Civil : public Personagem
{
    public:
        Civil(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif
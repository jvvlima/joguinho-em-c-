#ifndef ALMIRANTE
#define ALMIRANTE
#include "../core-simulador-hpp/Personagem.hpp"
class Almirante : public Personagem
{
    public:
        Almirante(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif
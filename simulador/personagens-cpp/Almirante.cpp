#include "../personagens-hpp/Almirante.hpp"

Almirante::Almirante(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Almirante::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Almirante::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Almirante::pegarDescricao() 
{
    return "A lei esta acima de tudo";
}
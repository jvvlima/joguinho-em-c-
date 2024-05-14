#include "../personagens-hpp/Pirata.hpp"

Pirata::Pirata(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Pirata::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Pirata::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Pirata::pegarDescricao() 
{
    return "Arrr";
}
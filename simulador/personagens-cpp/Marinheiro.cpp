#include "../personagens-hpp/Marinheiro.hpp"

Marinheiro::Marinheiro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Marinheiro::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Marinheiro::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Marinheiro::pegarDescricao() 
{
    return "Parado em nome da lei";
}
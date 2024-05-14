#include "../personagens-hpp/Capitao.hpp"

Capitao::Capitao(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Capitao::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Capitao::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Capitao::pegarDescricao() 
{
    return "Voce nao eh pareo para mim!";
}
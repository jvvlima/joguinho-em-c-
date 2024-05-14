#include "../personagens-hpp/Civil.hpp"

Civil::Civil(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Civil::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Civil::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Civil::pegarDescricao() 
{
    return "Eu nao fiz nada, eu juro";
}
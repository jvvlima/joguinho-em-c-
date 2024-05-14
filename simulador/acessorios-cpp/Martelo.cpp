#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Martelo.hpp"

Martelo::Martelo(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Martelo::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Martelo::gerarRuidoAtaque()
{
    return "ten ten";
}

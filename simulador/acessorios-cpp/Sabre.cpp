#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Sabre.hpp"

Sabre::Sabre(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Sabre::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Sabre::gerarRuidoAtaque()
{
    return "flow";
}

#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Peitoral.hpp"

Peitoral::Peitoral(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Peitoral::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Peitoral::getResistencia() 
{
    return this->resistencia;
}
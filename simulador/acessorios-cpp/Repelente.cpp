#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Repelente.hpp"

Repelente::Repelente(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Repelente::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Repelente::getResistencia() 
{
    return this->resistencia;
}
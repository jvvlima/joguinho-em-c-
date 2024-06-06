#include "funcionario.hpp"
#include <iostream>

Funcionario::Funcionario(std::string nome, int id, double salarioBase) 
: nome(nome), id(id), salarioBase(salarioBase) {}

double Funcionario::calcularSalarioTotal() {
    return salarioBase;
}

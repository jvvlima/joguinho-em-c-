#include "estagiario.hpp"

Estagiario::Estagiario(std::string nome, int id, double salarioBase, double salarioFixo) 
: Funcionario(nome, id, salarioBase), salarioFixo(salarioFixo) {}

double Estagiario::calcularSalarioTotal() {
    return salarioFixo;
}
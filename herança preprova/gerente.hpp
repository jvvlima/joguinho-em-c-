#ifndef GERENTE
#define GERENTE

#include "funcionario.hpp"

class Gerente : public Funcionario {
private:
    double bonusAnual;

public:
    Gerente(std::string nome, int id, double salarioBase, double bonusAnual);
    double calcularSalarioTotal() override;
};

#endif
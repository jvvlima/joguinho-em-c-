#ifndef ESTAGIARIO
#define ESTAGIARIO

#include "funcionario.hpp"

class Estagiario : public Funcionario {
private:
    double salarioFixo;

public:
    Estagiario(std::string nome, int id, double salarioBase, double salarioFixo);
    double calcularSalarioTotal() override;
};

#endif
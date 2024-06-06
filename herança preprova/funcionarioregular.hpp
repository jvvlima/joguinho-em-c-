#ifndef FUNCIONARIOREGULAR
#define FUNCIONARIOREGULAR

#include "funcionario.hpp"

class FuncionarioRegular : public Funcionario {
public:
    FuncionarioRegular(std::string nome, int id, double salarioBase);
};

#endif
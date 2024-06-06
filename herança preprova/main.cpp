#include <iostream>
#include "funcionarioregular.hpp"
#include "gerente.hpp"
#include "estagiario.hpp"

int main() {
    FuncionarioRegular funcionarioRegular("Fernando Rosa", 145, 2500.00);
    Gerente gerente("Leticia Vieira", 987, 9000.00, 1500.00);
    Estagiario estagiario("Arthur Moura", 421, 900.00, 900.00);

    std::cout << "Funcionário Regular: " << funcionarioRegular.calcularSalarioTotal() << std::endl;
    std::cout << "Gerente: " << gerente.calcularSalarioTotal() << std::endl;
    std::cout << "Estagiário: " << estagiario.calcularSalarioTotal() << std::endl;

    return 0;
}
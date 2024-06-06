#include <vector>
#include <iostream>

using namespace std;

class Veiculo {
protected:
 std::string marca;
 std::string modelo;
 int capacidade; 
public:
 Veiculo(const std::string& marca, const std::string& modelo, int
capacidade)
 : marca(marca), modelo(modelo), capacidade(capacidade) {}
 virtual void exibirDados() const {
 std::cout << "Marca: " << marca << ", Modelo: " << modelo <<
", Capacidade: " << capacidade << " toneladas\n";
 }
};


class Caminhao : public Veiculo {
private:
 int eixos;
public:
 Caminhao(const std::string& marca, const std::string& modelo, int
capacidade, int eixos)
 : Veiculo(marca, modelo, capacidade), eixos(eixos) {}
 void exibirDados() const override {
 std::cout << "Caminhão - ";
 Veiculo::exibirDados();
 std::cout << "Eixos: " << eixos << "\n";
 }
};


class Van : public Veiculo {
private:
 int passageiros;
public:
 Van(const std::string& marca, const std::string& modelo, int
capacidade, int passageiros)
 : Veiculo(marca, modelo, capacidade), passageiros(passageiros)
{}
 void exibirDados() const override {
 std::cout << "Van - ";
 Veiculo::exibirDados();
 std::cout << "Passageiros: " << passageiros << "\n";
 }
};


int main() {
    vector<Veiculo*> veiculos;

    Caminhao caminhao("Mercedes", "1313", 20, 3);
    Van van("Peugeot", "Boxer", 1, 8);

    veiculos.push_back(&caminhao);
    veiculos.push_back(&van);

    for (auto it : veiculos) {
        it->exibirDados();
        cout << endl;
    }

    return 0;
}
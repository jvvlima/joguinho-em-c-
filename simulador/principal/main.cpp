#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/Capacete.hpp"
#include "../acessorios-hpp/Calca.hpp"
#include "../acessorios-hpp/Botas.hpp"
#include "../acessorios-hpp/Peitoral.hpp"
#include "../acessorios-hpp/Repelente.hpp"
#include "../acessorios-hpp/Faca.hpp"
#include "../acessorios-hpp/Espada.hpp"
#include "../acessorios-hpp/Sabre.hpp"
#include "../acessorios-hpp/Martelo.hpp"
#include "../acessorios-hpp/Lanca.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Civil.hpp"
#include "../personagens-hpp/Almirante.hpp"
#include "../personagens-hpp/Marinheiro.hpp"
#include "../personagens-hpp/Capitao.hpp"
#include "../personagens-hpp/Pirata.hpp"
#include "../core-simulador-hpp/Simulador.hpp"
using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma  = new Rosa("Super Rosa Amarela",0,10);
    ArmaAtaque* faca1  = new Faca("Faca de Vidro",0,20);
    ArmaAtaque* sabre1  = new Sabre("Sabre Laser",5,20);
    ArmaAtaque* espada1  = new Espada("Espada Medieval",5,25);
    ArmaAtaque* lanca1  = new Lanca("Lança de Metal",3,10);
    ArmaAtaque* martelo1  = new Martelo("Martelo de Batalha",10,10);
    ArmaAtaque* arma2 = new Colher("Colher de Pata",0,50);
    ArmaDefesa* escudo = new Escudo("Latão", 1);
    ArmaDefesa* botas1 = new Botas("Botas de ferro", 2);
    ArmaDefesa* repelente1 = new Repelente("Contra dengue", 6);
    ArmaDefesa* calca1 = new Calca("Calca Jeans", 8);
    ArmaDefesa* capacete1 = new Capacete("Capacete de Moto", 3);
    ArmaDefesa* peitoral1 = new Peitoral("Peitoral de Tecido", 4);
    
    Personagem* p1 = new Chaves(1, "Chaves", 100, arma, escudo);
    Personagem* p2 = new Capitao(1, "Capitao Cueca", 100, sabre1, capacete1);
    Personagem* p3 = new Almirante(1, "Almirante no Mirante", 100, espada1, calca1);
    Personagem* p4 = new Pirata(2, "Barba Negra", 100, faca1, peitoral1);
    Personagem* p5 = new Marinheiro(2, "Marnheiro da Marinha", 100, lanca1, botas1);
    Personagem* p6 = new Civil(2, "Policial Civil", 100, martelo1, repelente1);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 1);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    simulador->adicionarPersonagem(p5, 2);
    simulador->adicionarPersonagem(p6, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}
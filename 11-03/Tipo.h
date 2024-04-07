#include <iostream>

using namespace std;

class Tipo {
protected:
    int id;
    string descricao; // Usamos std::string para a vari�vel descricao

public:
    // Construtores
    Tipo(): id(0), descricao("") {} // Construtor padr�o
    Tipo(int id, string descricao) : id(id), descricao(descricao) {} // Construtor parametrizado

    // M�todos getters
    int getId() { return this->id; }
    string getDescricao() { return this->descricao; }

    // M�todos setters
    void setId(int id) { this->id = id; }
    void setDescricao(string descricao) { this->descricao = descricao; }

    void imprimir() {cout << "\nTipo: " << this->id << "-" << this->descricao << endl; } // Impress�o
};

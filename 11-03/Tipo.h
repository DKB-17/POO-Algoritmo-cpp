#include <iostream>

using namespace std;

class Tipo {
protected:
    int id;
    string descricao; // Usamos std::string para a variável descricao

public:
    // Construtores
    Tipo(): id(0), descricao("") {} // Construtor padrão
    Tipo(int id, string descricao) : id(id), descricao(descricao) {} // Construtor parametrizado

    // Métodos getters
    int getId() { return this->id; }
    string getDescricao() { return this->descricao; }

    // Métodos setters
    void setId(int id) { this->id = id; }
    void setDescricao(string descricao) { this->descricao = descricao; }

    void imprimir() {cout << "\nTipo: " << this->id << "-" << this->descricao << endl; } // Impressão
};

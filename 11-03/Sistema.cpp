#include <iostream>

using namespace std;

#include "Tipo.h"
#include "Pessoa.h"

int main(){

    Tipo tipo1;
    tipo1.imprimir();
    tipo1.setId(1);
    tipo1.setDescricao("Aluno");
    tipo1.imprimir();

    Tipo tipo2(2, "Professor");
    tipo2.imprimir();

    Pessoa pessoa1;
    pessoa1.imprimir();
    pessoa1.setId(15);
    pessoa1.setDescricao("Funcionario");
    pessoa1.imprimir();

    Pessoa pessoa2 (46, "Zina", 20, tipo1);
    pessoa2.imprimir();

    cout << "\n ID de tipo de Pessoa: " << pessoa2.Tipo::getId() << endl;
    cout << "\n ID de Pessoa: " << pessoa2.getId() << endl;
    cout << "\n ID de Pessoa: " << pessoa2.Pessoa::getId() << endl;

}

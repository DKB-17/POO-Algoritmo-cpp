#include <iostream>

using namespace std;

#ifndef PROFISSAO_H
    #include "Profissao.h"
#endif // PROFISSAO_H
#ifndef LOCADOR_H
    #define LOCADOR_H
#endif // LOCADOR_H

class Locador: public Profissao{
private:
    int id;
    string nome;
    string cidade;
    string estado;
    int idade;
    float salario;

public:
    Locador();
    Locador(int, string, string, string, int, float, Profissao);

    //gettes
    int getId() const{return this->id;}
    string getNome() const{return this->nome;}
    string getCidade() const{return this->cidade;}
    string getEstado() const{return this->estado;}
    int getIdade() const{return this->idade;}
    float getSalario() const{return this->salario;}


    //setters
    void setId(int id){this->id = id;}
    void setNome(string nome) {this->nome = nome;}
    void setCidade(string cidade) {this->cidade = cidade;}
    void setEstado  (string estado) {this->estado = estado;}
    void setIdade(int idade) {this->idade = idade;}
    void setSalario(float salario) {this->salario = salario;}

    void imprimir();

    void leitura();

};

Locador::Locador(){
    this->id = 0;
    this->nome = "";
    this->cidade = "";
    this->estado = "";
    this->idade = 0;
    this->salario = 0.0;
    Profissao();
};

Locador::Locador(int id, string nome, string cidade, string estado, int idade, float salario, Profissao profissao){
    this->id = id;
    this->nome = nome;
    this->cidade = cidade;
    this->estado = estado;
    this->idade = idade;
    this->salario = salario;
    Profissao::setId(profissao.getId());
    Profissao::setDescricao(profissao.getDescricao());
};

void Locador::imprimir(){
    cout << "\nLocador";
    cout << "\nId: " << getId();
    cout << "\nNome: " << getNome();
    cout << "\nCidade: " << getCidade();
    cout << "\nEstado: " << getEstado();
    cout << "\nIdade: " << getIdade();
    cout << "\nSalario: " << getSalario();
    Profissao::imprimir();
};

void Locador::leitura(){
    int id, idade;
    float salario;
    string nome,cidade,estado;

    cout << "\n\nLeitura Locador";
    cout << "\nId: ";
    cin >> id;
    cout << "\nNome: ";
    fflush(stdin);
    getline(cin, nome);
    cout << "\nCidade: ";
    getline(cin, cidade);
    cout << "\nEstado: ";
    getline(cin, estado);
    fflush(stdin);
    cout << "\nIdade: ";
    cin >> idade;
    cout << "\nSalario: ";
    cin >> salario;

    setId(id);
    setNome(nome);
    setCidade(cidade);
    setEstado(estado);
    setIdade(idade);
    setSalario(salario);

    Profissao::leitura();
}



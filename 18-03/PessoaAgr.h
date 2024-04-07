#include <iostream>

class PessoaAgr{
    //atributos
private:
    int id;
    string nome;
    int idade;
    Tipo tipo;

    //metodos
public:
    PessoaAgr();
    PessoaAgr(int, string, int, Tipo);


    //gets
    int getId(){return this->id;}
    string getNome(){return this->nome;}
    int getIdade(){return this->idade;}
    Tipo getTipo(){return this->tipo;}

    void imprimir();

};

PessoaAgr::PessoaAgr(int id, string nome, int idade, Tipo tipo){
    this->id = id;
    this->nome = nome;
    this->idade = idade;
    this->tipo = tipo;
    //this->tipo = Tipo(tipo.getId, tipo.getDescricao);
    //this->tipo.setId(tipo.getId());
    //this->tipo.setDescricao(tipo.setDescricao());
};

PessoaAgr::PessoaAgr(){
    this->id = 0;
    this->nome = "";
    this->idade = 0;
    //this->tipo = Tipo(tipo.getId(), tipo.getDescricao());
    //this->tipo.setId(9999);
    //this->tipo.setDescricao("");

};

void PessoaAgr::imprimir(){

    cout << "\n Imprimir Pessoa com obj agregado\n";
    cout << "ID: " << this->id << endl;
    cout << "Nome: " << this->nome << endl;
    cout << "Idade: " << this->idade << endl;
    cout << "ID Tipo: " << this->tipo.getId() << endl;
    cout << "Descricao: " << this->tipo.getDescricao() << endl;
};

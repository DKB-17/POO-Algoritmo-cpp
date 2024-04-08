#include <iostream>

using namespace std;

#ifndef PROFISSAO_H
    #define PROFISSAO_H
#endif // PROFISSAO_H

class Profissao{
private:
    int id;
    string descricao;

public:
    Profissao():id(0),descricao(""){};
    Profissao(int id, string descricao):id(id),descricao(descricao){};

    //getters
     int getId() const{return this->id;}
     string getDescricao() const{return this->descricao;}

     //setters
     void setId(int id){this->id = id;}
     void setDescricao(string descricao){this->descricao = descricao;}

     void imprimir();

     void leitura();

};

void Profissao::imprimir(){
    cout << "\n\nProfissao";
    cout << "\nId Profissao: " << getId() << "\nDescricao: " << getDescricao() << endl;
};

void Profissao::leitura(){
    int id;
    string descricao;
    cout << "\nLeitura de Profissao" << endl;
    cout << "Id Profissao: ";
    cin >> id;
    cout << "Descricao: ";
    fflush(stdin);
    getline(cin, descricao);
    fflush(stdin);
    setId(id);
    setDescricao(descricao);
}

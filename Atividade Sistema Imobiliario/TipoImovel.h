#include <iostream>

using namespace std;

#ifndef TIPOIMOVEL_H
    #define TIPOIMOVEL_H
#endif // TIPOIMOVEL_H

class TipoImovel{
private:
    int id;
    string descricao;
public:
    TipoImovel():id(0),descricao(""){}
    TipoImovel(int id, string descricao):id(id),descricao(descricao){}

    // getters
    int getId()const{return this->id;}
    string getDescricao(){return this->descricao;}

    //setters
    void setId(int id){this->id = id;}
    void setDescricao(string descricao){this->descricao = descricao;}

    void imprimir();

    void leitura();
};

void TipoImovel::imprimir(){
    cout << "\n\nTipo de Imovel";
    cout << "\nId Tipo de Imovel: " << getId() << "\nDescricao: " << getDescricao() << endl;
};

void TipoImovel::leitura(){
    int id;
    string descricao;
    cout << "\nLeitura de Tipo Imovel" << endl;
    cout << "Id Tipo de Imovel: ";
    cin >> id;
    cout << "Descricao: ";
    fflush(stdin);
    getline(cin, descricao);
    fflush(stdin);
    setId(id);
    setDescricao(descricao);
}

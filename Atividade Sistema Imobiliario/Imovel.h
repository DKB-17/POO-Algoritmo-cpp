#include <iostream>

using namespace std;

#ifndef TIPOIMOVEL_H
    #include "TipoImovel.h"
#endif // TIPOIMOVEL_H

#ifndef IMOVEL_H
    #define IMOVEL_H
#endif

class Imovel: public TipoImovel{
private:
    int id;
    string rua;
    string bairro;
    string cidade;
    bool ocupado;

public:
    Imovel():id(0),rua(""),bairro(""),cidade(""),ocupado(false),TipoImovel(){};
    Imovel(int, string, string, string, bool, TipoImovel);

    //getters
    int getId()const{return this->id;}
    string getRua()const{return this->rua;}
    string getBairro()const{return this->bairro;}
    string getCidade()const{return this->cidade;}
    bool getOcupado()const{return this->ocupado;}

    //setters
    void setId(int id){this->id = id;}
    void setRua(string rua){this->rua = rua;}
    void setBairro(string bairro){this->bairro = bairro;}
    void setCidade(string cidade){this->cidade = cidade;}
    void setOcupado(bool ocupado){this->ocupado = ocupado;}

    void imprimir();

    void leitura();

};

Imovel::Imovel(int id, string rua, string bairro, string cidade, bool ocupado, TipoImovel tipoImovel){
    this->id = id;
    this->rua = rua;
    this->bairro = bairro;
    this->cidade = cidade;
    this->ocupado = ocupado;
    this->TipoImovel::setId(tipoImovel.getId());
    this->TipoImovel::setDescricao(tipoImovel.getDescricao());
};

void Imovel::imprimir(){
    cout << "\n\nImovel";
    cout << "\nId Imovel: " << getId();
    cout << "\nEndereco: " << getRua() << " - " << getBairro() << ", " << getCidade();
    cout << "\nOcupado: ";
    if (getOcupado()){
        cout << "SIM";
    }else{
        cout << "NAO";
    }
    TipoImovel::imprimir();
}

void Imovel::leitura(){
    int id, ocupado;
    string rua,bairro,cidade;

    cout << "\n\nLeitura Imovel";
    cout << "\nId Imovel: ";
    cin >> id;
    cout << "\nRua: ";
    fflush(stdin);
    getline(cin, rua);
    cout << "\nBairro: ";
    getline(cin, bairro);
    cout << "\nCidade: ";
    getline(cin, cidade);
    fflush(stdin);
    do {
    cout << "\nOcupado:([1]Sim ou [0]Nao) ";
    cin >> ocupado;
    if(ocupado < 0 || ocupado > 1){
        cout << "invalida a opcao" << endl;
    }
    } while (ocupado < 0 || ocupado > 1);
    setId(id);
    setRua(rua);
    setBairro(bairro);
    setCidade(cidade);
    switch (ocupado){
    case 0:
        setOcupado(false);
        break;
    case 1:
        setOcupado(true);
        break;
    default:
        break;
    }
    TipoImovel::leitura();
};


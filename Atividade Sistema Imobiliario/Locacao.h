#include <iostream>

using namespace std;

#ifndef LOCACAO_H
    #define LOCACAO_H
#endif // LOCACAO_H

#ifndef LOCADOR_H
    #include "Locador.h"
#endif // LOCADOR_H

#ifndef IMOVEL_H
    #include "Imovel.h"
#endif // IMOVEL_H

class Locacao{
private:
    int id;
    Imovel imovel;
    Locador locador;
    string data;
    float valor;

public:
    Locacao();
    Locacao(int, Imovel, Locador, string, float);

    //getters
    int getId()const{return this->id;}
    Imovel getImovel()const{return this->imovel;}
    Locador getLocador()const{return this->locador;}
    string getData()const{return this->data;}
    float getValor()const{return this->valor;}

    //setters

    void setId(int id){this->id = id;}
    void setImovel(Imovel imovel){this->imovel = imovel;}
    void setLocador(Locador locador){this->locador = locador;}
    void setData(string data){this->data = data;}
    void setValor(float valor){this->valor = valor;}

    void imprimir();

    void leitura();

    void aumento();
    void aumento(float);
};

Locacao::Locacao(){
    this->id = 0;
    this->imovel = Imovel();
    this->locador = Locador();
    this->data = "00/00/0001";
    this->valor = 0.0;
};

Locacao::Locacao(int id, Imovel imovel, Locador locador, string data, float valor){
    this->id = id;
    this->imovel = imovel;
    this->locador = locador;
    this->data = data;
    this->valor = valor;
};

void Locacao::imprimir(){
    cout << "\nLocacao";
    cout << "\nId locacao: " << getId();
    this->imovel.imprimir();
    this->locador.imprimir();
    cout << "\nData: " << getData();
    cout << "\nValor: " << getValor();
};

void Locacao::leitura(){
    int id;
    string data;
    float valor;
    char op;

    cout << "\n\nLeitura Locacao";
    cout << "\nId Locacao: ";
    cin >> id;
    cout << "\nAdicionar imovel:(S ou N)";
    cin >> op;
    if (op == 'S'){
        this->imovel.leitura();
    }else{
        this->imovel;
    }
    cout << "\nAdicionar locador:(S ou N)";
    cin >> op;
    if (op == 'S'){
        this->locador.leitura();
    }else{
        this->locador;
    }
    cout << "\nData:";
    fflush(stdin);
    getline(cin, data);
    fflush(stdin);
    cout << "\nValor:";
    cin >> valor;

    setId(id);
    setData(data);
    setValor(valor);
};

void Locacao::aumento(){
    setValor((getValor()* 1.1));
};

void Locacao::aumento(float percentual){
    setValor((getValor() * (1.0 + percentual)));
};

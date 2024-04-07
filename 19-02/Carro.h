// carro.h

#include <iostream>
using namespace std;

class Carro{
    //atributos
    private:
        int id;
        string modelo;
        int ano;
        string cor;
        float valor;
        float desc = 0.05;

    //metodos
    public:
        void ler();
        void imprimir();
        void desconto();
};

// Implementação dos metodos

void Carro::ler(){
        cout << "Ler Dados do Carro" << endl;

        cout << "Id: ";
        cin >> id;

        cout << "Modelo: ";
        cin >> modelo;

        cout << "Ano: ";
        cin >> ano;

        cout << "Cor: ";
        cin >> cor;

        cout << "Valor R$: ";
        cin >> valor;
    };

void Carro::imprimir(){
        cout << "Imprimir carro" << endl;
        cout << "Id: " << id << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Ano: " << ano << endl;
        cout << "Cor: " << cor << endl;
        cout << "Valor R$: " << valor << endl;
    };

void Carro::desconto(){
        cout << "Desconto: " << this->valor * desc;
        this->valor = this->valor * (1 - desc);
        cout << "Valor: " << this->valor;
    };

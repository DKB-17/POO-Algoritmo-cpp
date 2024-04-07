// main.cpp

#include <iostream>
#include <stdio.h>

using namespace std;

class Carro{
    //atributos
    public:
        int id;
        string modelo;
        int ano;
        string cor;
        float valor;

    //metodos
    void ler(){
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
    }
    void imprimir(){
        cout << "Imprimir carro" << endl;
        cout << "Id: " << id << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Ano: " << ano << endl;
        cout << "Cor: " << cor << endl;
        cout << "Valor R$: " << valor << endl;
    }
    void desconto(){
    }
};


int main()
{
    Carro car1; // instanciacao do objeto car1 do tipo Carro

    car1.ler(); //invocacao do metodo ler, para o objeto car1
    car1.imprimir();

    Carro car2; // instanciacao do objeto car2 do tipo Carro
    car2.ler(); //invocacao do metodo ler, para o objeto car2
    car2.imprimir();

    return 0;
}

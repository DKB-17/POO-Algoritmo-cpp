#include <iostream>

class Conta{
    private: // encapsulamento dos atributos
        int id;
        string banco;
        int numConta;
        float saldo;


    public: // Metodos
            Conta(int, string, int, float);
            Conta(int, string, int);
            Conta();

            void imprimir();

            //getters
            int getId();
            string getBanco();
            int getNumConta();
            float getSaldo();

            //setters
            int setId(int);
            string setBanco(string);
            int setNumConta(int);
            float setSaldo(float);


};
Conta::Conta(){
    this->id = 0;
    this->banco = "";
    this->numConta = 0;
    this->saldo = 0;
}

Conta::Conta(int id, string banco, int numConta){
    this->id = id;
    this->banco = banco;
    this->numConta = numConta;
    this->saldo = 0;
}

Conta::Conta(int id, string banco, int numConta, float saldo){
    this->id = id;
    this->banco = banco;
    this->numConta = numConta;
    this->saldo = saldo;
}

void Conta::imprimir(){
    cout << "\nImprimir Conta\n";
    cout << "ID: " << id << endl;
    cout << "Banco: " << banco << endl;
    cout << "Num Conta: " << numConta << endl;
    cout << "Saldo: " << saldo << endl;
}

int Conta::getId(){
    return this->id;
}

string Conta::getBanco(){
    return this->banco;
}

int Conta::getNumConta(){
    return this->numConta;
}

float Conta::getSaldo(){
    return this->saldo;
}

int Conta::setId(int id){
    this->id = id;
}

string Conta::setBanco(string banco){
    this->banco = banco;
}

int Conta::setNumConta(int numConta){
    this->numConta = numConta;
}

float Conta::setSaldo(float saldo){
    this->saldo = saldo;
}




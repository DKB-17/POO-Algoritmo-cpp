#include <iostream>

using namespace std;

//Data.h
class Data{
    //Atributos
    private:
        int dia;
        int mes;
        int ano;

    //Metodos
    public:
        Data();
        Data(int dia,int mes,int ano);
        void ler();
        void imprimir();

        // getters
        int getDia();
        int getMes();
        int getAno();

        //setters
        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);
};

//Construtor padrao
Data::Data(){
    this->dia = 0;
    this->mes = 0;
    this->ano = 0;
}
//Construtor parametrizado
Data::Data(int dia, int mes, int ano){
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
};

//Corpo dos metodos pertencentes a classe
void Data::ler(){
    int d,m,a;
    cout << "Informe a data - (DD-MM-YY)" << endl;
    cout << "Dia: ";
    cin >> d;
    cout << "Mes: ";
    cin >> m;
    cout << "Ano: ";
    cin >> a;
    setDia(d);
    setMes(m);
    setAno(a);
}
void Data::imprimir(){
    cout << "Imprimindo Data" << endl;
    cout << this->dia << "/" << this->mes << "/" << this->ano << endl;
}

int Data::getDia(){
    return this->dia;
}
int Data::getMes(){
    return this->mes;
}
int Data::getAno(){
    return this->ano;
}

void Data::setDia(int dia){
    this->dia = dia;
}
void Data::setMes(int mes){
    this->mes = mes;
}
void Data::setAno(int ano){
    this->ano = ano;
}

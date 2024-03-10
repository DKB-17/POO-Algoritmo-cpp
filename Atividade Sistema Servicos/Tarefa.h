#include <iostream>

using namespace std;

class Tarefa{
private:
    int id;
    string descricao;
    int tipo;
    float valorHora;
    int qtdeTrabalhada;
public:
    Tarefa(); //Construtor padrao
    Tarefa(int, string, int, float, int); //Construtor parametrizado

    //metodos geters
    int getId();
    string getDescricao();
    int getTipo();
    float getValorHora();
    int getQtdeTrabalhada();

    //metodos seters
    void setId(int);
    void setDescricao(string);
    void setTipo(int);
    void setValorHora(float);
    void setQtdeTrabalhada(int);

    void imprimir(); // impressao
    void leitura(); // leitura

};

Tarefa::Tarefa(){
    this->id = 0;
    this->descricao= "";
    this->tipo = 0;
    this->valorHora = 0.0;
    this->qtdeTrabalhada = 0;
}

Tarefa::Tarefa(int id, string descricao, int tipo, float valorHora , int qtdeTrabalhada){
    /*
    this->id = id;
    this->descricao = descricao;
    this->tipo = tipo;
    this->valorHora = valorHora;
    this->qtdeTrabalhada = qtdeTrabalhada;
    */





}

int Tarefa::getId(){
    return this->id;
}

string Tarefa::getDescricao(){
    return this->descricao;
}

int Tarefa::getTipo(){
    return this->tipo;
}

float Tarefa::getValorHora(){
    return this->valorHora;
}

int Tarefa::getQtdeTrabalhada(){
    return this->qtdeTrabalhada;
}

void Tarefa::setId(int id){
    do{
    if (id < 0){
        cout << "Id invalido \n Digite outro id:";
        cin >> id;
    }
    }while(id < 0);
    this->id = id;
}

void Tarefa::setDescricao(string descricao){\
    while(descricao == ""){
        cout << "Descricao invalida \n Digite outra descricao:";
        cin >> descricao;
    };
    this->descricao = descricao;
}

void Tarefa::setTipo(int tipo){
    while(tipo <= 0){
        cout << "Tipo invalido \n Digite outro tipo:";
        cin >> tipo;

    };
    this->tipo = tipo;
}

void Tarefa::setValorHora(float valorHora){
    while(valorHora < 0){
        cout << "Valor Hora invalido \n Digite outro valor:";
        cin >> valorHora;
    };
    this->valorHora = valorHora;
}
void Tarefa::setQtdeTrabalhada(int qtdeTrabalhada){
    while(qtdeTrabalhada < 0){
        cout << "Quantidade invalida \n Digite outra quantidade:";
        cin >> qtdeTrabalhada;
    };
    this->qtdeTrabalhada = qtdeTrabalhada;
}

void Tarefa::imprimir(){
    cout << "Imprimindo Tarefa" << endl;
    cout << "Id: " << getId() << endl;
    cout << "Descricao: " << getDescricao() << endl;
    cout << "Tipo: " << getTipo() << endl;
    cout << "Valor da hora: " << getValorHora() << endl;
    cout << "Quantidade trabalhada: " << getQtdeTrabalhada() << endl;
}

void Tarefa::leitura(){
    int id, tipo, qtdeTrabalhada;
    float valorHora;
    string descricao;

    cout << "Lendo Tarefa" << endl;
    cout << "Id: ";
    cin >> id;
    setId(id);
    cout << "Descricao: ";
    fflush(stdin);
    getline(cin, descricao);
    fflush(stdin);
    setDescricao(descricao);
    cout << "Tipo: ";
    cin >> tipo;
    setTipo(tipo);
    cout << "Valor da hora: ";
    cin >> valorHora;
    setValorHora(valorHora);
    cout << "Quantidade trabalhada: ";
    cin >> qtdeTrabalhada;
    setQtdeTrabalhada(qtdeTrabalhada);
}


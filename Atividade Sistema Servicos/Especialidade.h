#include <iostream>

using namespace std;

class Especialidade{
private:
    int id;
    string descricao;
    int quantidade;
public:
    Especialidade(); //Construtor padrao
    Especialidade(int, string, int); //Construtor parametrizado

    //metodos geters
    int getId();
    string getDescricao();
    int getQuantidade();

    //metodos seters
    void setId(int);
    void setDescricao(string);
    void setQuantidade(int);

    void imprimir(); // impressao
    void leitura(); // leitura

};

Especialidade::Especialidade(){
    this->id = 0;
    this->descricao = "";
    this->quantidade = 0;
}

Especialidade::Especialidade(int id, string descricao, int quantidade){
    setId(id);
    setDescricao(descricao);
    setQuantidade(quantidade);
    /*
    this->id = id;
    this->descricao = descricao;
    this->quantidade = quantidade;
    */
}

int Especialidade::getId(){
    return this->id;
}

string Especialidade::getDescricao(){
    return this->descricao;
}

int Especialidade::getQuantidade(){
    return this->quantidade;
}

void Especialidade::setId(int id){
    while(id <= 0){
        cout << "Id invalido \n Digite outro id:";
        cin >> id;
    };
    this->id = id;
}

void Especialidade::setDescricao(string descricao){
    while (descricao == ""){
        cout << "Descricao invalida \n Digite outra descricao:";
        fflush(stdin);
        getline(cin, descricao);
        fflush(stdin);
    };
    this->descricao = descricao;
}

void Especialidade::setQuantidade(int quantidade){
    while(quantidade <= 0){
        cout << "Quantidade invalida \n Digite outra quantidade:";
        cin >> quantidade;
    };
    this->quantidade = quantidade;
}

void Especialidade::imprimir(){
    cout << "Imprimindo especialidade" << endl;
    cout << "Id: " << getId() << endl;
    cout << "Descricao: " << getDescricao() << endl;
    cout << "Quantidade: " << getQuantidade() << endl;
}

void Especialidade::leitura(){
    int id, quantidade;
    string descricao;

    cout << "Lendo especialidade" << endl;
    cout << "Id: ";
    cin >> id;
    setId(id);
    cout << "Descricao: ";
    fflush(stdin);
    getline(cin,descricao);
    fflush(stdin);
    setDescricao(descricao);
    cout << "Quantidade: ";
    cin >> quantidade;
    setQuantidade(quantidade);
}


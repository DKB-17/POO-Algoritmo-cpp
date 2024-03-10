#include <iostream>

using namespace std;

class TipoTarefa{
private:
    int id;
    string descricao;
public:
    TipoTarefa(); //Construtor padrao
    TipoTarefa(int, string); //Construtor parametrizado

    //metodos geters
    int getId();
    string getDescricao();

    //metodos seters
    void setId(int);
    void setDescricao(string);

    void imprimir(); // impressao
    void leitura(); // leitura

};

TipoTarefa::TipoTarefa(){
    this->id = 0;
    this->descricao = "";
}

TipoTarefa::TipoTarefa(int id, string descricao){
    setId(id);
    setDescricao(descricao);

    /*
    this->id = id;
    this->descricao = descricao;
    this->quantidade = quantidade;
    */
}

int TipoTarefa::getId(){
    return this->id;
}

string TipoTarefa::getDescricao(){
    return this->descricao;
}

void TipoTarefa::setId(int id){
    while(id <= 0){
        cout << "Id invalido \n Digite outro id:";
        cin >> id;
    };
    this->id = id;
}

void TipoTarefa::setDescricao(string descricao){
    while (descricao == ""){
        cout << "Descricao invalida \n Digite outra descricao:";
        fflush(stdin);
        getline(cin, descricao);
        fflush(stdin);
    };
    this->descricao = descricao;
}

void TipoTarefa::imprimir(){
    cout << "Imprimindo Tipo Tarefa" << endl;
    cout << "Id: " << getId() << endl;
    cout << "Descricao: " << getDescricao() << endl;
}

void TipoTarefa::leitura(){
    int id;
    string descricao;

    cout << "Lendo Tipo de Tarefa" << endl;
    cout << "Id: ";
    cin >> id;
    setId(id);
    cout << "Descricao: ";
    fflush(stdin);
    getline(cin,descricao);
    fflush(stdin);
    setDescricao(descricao);
}


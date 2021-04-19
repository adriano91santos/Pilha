#include <iostream>
#include "pilha.h"

using namespace std;

    pilha::pilha() //Construtora //stack
    {
        tamanho = 0;
        estrutura = new TipoItem[max_itens];
    }

    pilha::~pilha() //Destrutora // ~stack
    {
        delete [] estrutura;
    }

    bool pilha::estacheia() //isfull
    {
        return (tamanho == max_itens);
    }

    bool pilha::estavazia() //isempty
    {
        return (tamanho == 0);
    }
    
    void pilha::inserir(TipoItem item) //push
    {
        if (estacheia()){
            cout << "A pilha esta cheia!\n";
            cout << "Nao e possivel inserir elementos na pilha!\n";
        }else{
            estrutura [tamanho] = item;
            tamanho++;
        }
    }

    TipoItem pilha::remover() //pop
    {
        if (estavazia()){
            cout << "A pilha esta vazia!\n";
            cout << "Nao e possivel remover elementos";
            return 0;
        }else{
            tamanho--;
            return estrutura[tamanho];
        }
    }

    void pilha::imprimir() //print
    {
        cout << "Pilha: [ ";
        for (int i=0 ; i<tamanho ; i++){
            cout << estrutura[i] << " ";
        }
        cout << "]\n";
    }

    TipoItem pilha::qualtamanho() //lenght
    {
        return tamanho;
    }

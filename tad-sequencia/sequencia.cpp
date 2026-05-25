#include <iostream>
#include "sequencia.h"


//-------- Construtores e Destrutores para Gerenciamento de Memoria: ----------
Sequencia::Sequencia(int cap_inicial){
    capacidade = cap_inicial;
    tamanho_atual = 0;
    elementos = new int[capacidade];
}

Sequencia::~Sequencia(){
    delete[] elementos;
}

//------------------- Operacoes do TAD Sequencia: ----------------------------

void Sequencia::insert(int pos, int elem){
    //Verificacoes:
    if(tamanho_atual == capacidade){
        std::cout << "Erro: A sequencia ja esta cheia" << std::endl;
    }

    if(pos < 0 || pos > tamanho_atual){
        std::cout << "Erro: Posicao para insercao invalida" << std::endl;
    }

    //Movendo os elementos para inserir novo elemento
    for(int i = tamanho_atual; i > pos; i--){
        elementos[i] = elementos[i-1];
    }

    //Inserindo novo elemento
    elementos[pos] = elem;

    //Adiciona um elemento na qtd total de elementos
    tamanho_atual++;
}

void Sequencia::remove(int pos){
    //Verificacoes:
    if(pos < 0 || pos >= tamanho_atual){
        std::cout << "Erro: Posicao para insercao invalida" << std::endl;
    }

    //Reajustando elementos para preencher espaço do elemento removido
    for(int i = pos; i < tamanho_atual -1; i++){
        elementos[i] = elementos[i+1];
    }

    //Retira um elemento da qtd total de elementos
    tamanho_atual--;

}

int Sequencia::get(int pos){
    //Verficacao:
    if(pos < 0 || pos >= tamanho_atual){
        std::cout << "Erro: Posicao invalida";
        return -1;
    }
    //Retorna elemento da posicao especifica da sequencia
    return elementos[pos];

}

void Sequencia::print(){
    for(int i = 0; i < tamanho_atual; i++){
        std::cout << "[" << elementos[i] << "]" << " ";
    }
    std::cout << std::endl;
}
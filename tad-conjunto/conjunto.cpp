#include <iostream>
#include "conjunto.h"

//-------- Construtore e Destrutor para Gerenciamento da Memoria: ----------
Conjunto::Conjunto(int cap_inicial){
    capacidade = cap_inicial;
    tamanho_atual = 0;
    elementos = new int[capacidade];
}

Conjunto::~Conjunto(){
    delete[] elementos;
}

//------------------- Operacoes do TAD Conjunto: ----------------------------

void Conjunto::add(int elem){
    //Verifica se o vetor tem capacidade para armazernar elementos
    if(tamanho_atual == capacidade){
        std::cout << "Erro: O conjunto ja esta cheio";
    }
    //Verifica se o elemento esta contido no vetor 
    if(contains(elem) == false){
        elementos[tamanho_atual] = elem;
        tamanho_atual++;
    }
}


void Conjunto::remove(int elem){
    //Laço para remocao de um elemento e rearranjo do vetor
    for(int i = 0; i < tamanho_atual; i++){
        if(elementos[i] == elem){
            for(int j = i; j < tamanho_atual-1; j++){
                elementos[j] = elementos[j+1];
            }
        }
        tamanho_atual--;
        return;
    }
}

bool Conjunto::contains(int elem){
    //Verifica se elemento esta contido no vetor
    for(int i = 0; i < tamanho_atual; i++){
        if(elementos[i] == elem){
            return true;
        }
    }
    return false;
}

void Conjunto::print(){
    //Printa vetor especifico 
    std::cout << "{ ";
    for(int i = 0; i < tamanho_atual; i++){
        std::cout << elementos[i];
        if(i < tamanho_atual - 1){
            std::cout << ", ";
        }
    }
    std::cout << " }" << std::endl;
}


Conjunto* uniao(Conjunto& A, Conjunto& B){
    //Novo conjunto para armazenar a uniao de dois vetores
    Conjunto* novo_conjunto = new Conjunto(A.capacidade + B.capacidade);

    for(int i = 0; i < A.tamanho_atual; i++){
        novo_conjunto->add(A.elementos[i]);
    }

    for(int i = 0; i < B.tamanho_atual; i++){
        novo_conjunto->add(B.elementos[i]);
    }

    return novo_conjunto;
}

Conjunto* intersection(Conjunto& A, Conjunto& B){
    int menor_capacidade;
    //Verificacao para menor capacidade da intersecao
    if (A.tamanho_atual < B.tamanho_atual) {
        menor_capacidade = A.capacidade;
    } else {
        menor_capacidade = B.capacidade; 
    }
    //Novo conjunto para armazenar a intersecao de dois conjuntos
    Conjunto* novo_conjunto = new Conjunto(menor_capacidade);

    for(int i = 0; i < A.tamanho_atual; i++){ //Laco que adiciona os elementos em comum ao novo conjunto 
        if(B.contains(A.elementos[i])){
            novo_conjunto->add(A.elementos[i]); 
        }
    }
    return novo_conjunto;
}


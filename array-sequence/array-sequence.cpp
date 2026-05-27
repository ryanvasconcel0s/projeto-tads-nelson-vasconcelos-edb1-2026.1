#include <iostream>
#include "array-sequence.h"

//-------- Construtor e Destrutor para Gerenciamento da Memoria: ----------

ArraySequence::ArraySequence(int cap_inicial){
    capacidade = cap_inicial;
    tamanho_atual = 0;
    elementos = new int[capacidade];
}

ArraySequence::~ArraySequence(){
    delete[] elementos;
}

void ArraySequence::realocar(){

    capacidade *= 2;
    std::cout << "A V I S O: Array foi realocado e redimensionado com a capacidade: " << capacidade << std::endl;

    int* novo_array = new int[capacidade]; //novo_array, vetor temporario que possui nova capacidade 

    for(int i = 0; i < tamanho_atual; i++){//novo_array recebe os valores de elementos
        novo_array[i] = elementos[i];
    }

    delete[] elementos; //elementos eh "apagado"

    elementos = novo_array; //elementos recebe o endereco de novo_array com capacidade dobrada
}

//------------ Operações Array Sequence --------------------

void ArraySequence::insert(int pos, int value){
    if(pos < 0 || pos > tamanho_atual){
        std::cout << "Erro: Posicao digitada eh invalida" << std::endl;
        return;
    }

    if(tamanho_atual == capacidade) { //realoca e redimensiona o vetor quando a quantidade de elementos é igual capacidade
        realocar(); 
    }

    for(int i = tamanho_atual; i > pos; i--){
        elementos[i] = elementos[i-1];
    }
    
    elementos[pos] = value;
    tamanho_atual++;
}

void ArraySequence::pushBack(int value){
    insert(tamanho_atual, value);
}

void  ArraySequence::pushFront(int value){
    insert(0, value);
}

void ArraySequence::remove(int pos){
    if(pos < 0 || pos >= tamanho_atual){
        std::cout << "Erro: Posicao digitada eh invalida" << std::endl;
        return;
    }
    for(int i = pos; i < tamanho_atual - 1; i++){
        elementos[i] = elementos[i+1];
    }
    tamanho_atual--;
}

int ArraySequence::find(int value){
    for(int i = 0; i < tamanho_atual; i++){
        if(elementos[i] == value){
            return i;
        }
    }
    return -1;
}

int ArraySequence::size(){
    return tamanho_atual;
}

void ArraySequence::print(){
    for(int i = 0; i < tamanho_atual; i++){
        std::cout << "[" << elementos[i] << "] ";
    }
    std::cout << std::endl;
}

int ArraySequence::dimension(){
    return capacidade;
}

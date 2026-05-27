#include <iostream>
#include "sequencia.h"


int main(){

    std::cout << "---------- TAD SEQUENCIAL: TESTE -------------" << std::endl;

    Sequencia seq;

    /*
    Teste minimo: 
        ->Inserir 10 elementos no vetor, 
        ->Remover 2 elementos do meio e 
        ->Exibir a sequência antes e depois da remoção.
    */

    std::cout << "\nInserindo 10 elementos na sequencia .  .  ." << std::endl;
    for(int i = 0; i < 10; i++){
        seq.insert(i, (i+1)*10); //Adiciona elementos 10, 20, . . . , 100
    }

    std::cout << "Sequencia original: " << std::endl;
    seq.print();

    std::cout << "\nRemovendo 2 elementos do meio (posicao 4 e posicao 5) .  .  ." << std::endl;
    seq.remove(4); //remove elemento 50 (pos 4)
    seq.remove(4); //remove elemento 60 (pos 5 da sequencia original que foi deslocado para pos 4)

    std::cout << "Sequencia apos a remocao: " << std::endl;
    seq.print();

    //Teste para funcao get()
    std::cout << "\nNovos elementos das posicoes 4 e 5, apos remocao: \n" << seq.get(4) << " e " << seq.get(5);

    return 0;
}         
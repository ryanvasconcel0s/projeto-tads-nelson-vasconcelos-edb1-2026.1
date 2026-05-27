#include <iostream>
#include "array-sequence.h"


int main(){
    /*
    Teste mínimo:
    ● Inserir os valores: [10, 20, 30, 40]
    ● Inserir um elemento no início;
    ● Inserir um elemento no meio;
    ● Remover um elemento;
    ● Exibir a estrutura final.
    */


    std::cout << "---------- ARRAY SEQUENCE : TESTE -------------\n" << std::endl;

    ArraySequence sequence;
    std::cout << "Capacidade atual: " << sequence.dimension() << std::endl << std::endl;

    std::cout << "\nAdicionando valores 10, 20, 30, 40 a sequencia" << std::endl;
    //Adicionando os valores no final da sequencia de tal forma que a capacidade ira ser realocada
    sequence.pushBack(10); sequence.pushBack(20); 
    sequence.pushBack(30); sequence.pushBack(40);
    sequence.print();
    //Adicionando um valor no inicio da sequencia 
    std::cout << "\nAdicionando valor 5 ao inicio da sequencia: " << std::endl;
    sequence.pushFront(5);
    sequence.print();
    //Adicionando um valor em uma posicao especifica
    std::cout << "\nAdicionando valor 25 no meio da sequencia: " << std::endl;
    sequence.insert(2, 25);
    sequence.print();
    //Removendo um valor da sequencia
    std::cout << "\nRemovendo o valor 20 da sequencia: " << std::endl;
    sequence.remove(3);
    sequence.print();
    //Usando a funcao find(), para achar a posicao de um elemento
    std::cout <<"\nA posicao do valor 40 na sequencia eh: " << sequence.find(40) << std::endl;
    

    return 0;
}
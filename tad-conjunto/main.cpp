#include <iostream>
#include "conjunto.h"


int main(){
/*
    Teste minimo: 
    A = {1, 2, 3, 5}
    B = {3, 4, 5, 6}
    Exibir:
    ● União
    ● Interseção
*/
    Conjunto A;
    Conjunto B;

    std::cout << "---------- TAD CONJUNTO: TESTE -------------" << std::endl;

    A.add(1); A.add(2); A.add(3); A.add(5);
    B.add(3); B.add(4); B.add(5); B.add(6);

    std::cout << "\nSeja o conjunto A: "; A.print();
    std::cout << "Seja o conjunto B: "; B.print();

    Conjunto* C_uniao = uniao(A, B);
    std::cout << "\nA uniao eh dada por: "; C_uniao->print();

    Conjunto* C_intersecao = intersection(A, B);
    std::cout << "\nA intersecao eh dada por: ";C_intersecao->print();
    
    delete C_uniao;
    delete C_intersecao;

    return 0;
}
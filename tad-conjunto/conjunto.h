#ifndef CONJUNTO_H
#define CONJUNTO_H

class Conjunto{
    private:
        int* elementos;
        int tamanho_atual;
        int capacidade;

    public:
        //Construtor e destrutor
        Conjunto(int cap_inicial = 20);

        ~Conjunto();

        //Funcoes definidas para Conjunto
        void add(int elem); //Adiciona elemento ao conjunto 
        void remove(int elem); //Remove elemento do conjunto
        bool contains(int elem); //Verifica se elemento esta no conjunto
        void print(); //Printa na tela o vetor conjunto

        //Funcoes friends globais que nao pertecem a classe, mas podem modificar os dados da classe
        friend Conjunto* uniao(Conjunto& A, Conjunto& B);
        friend Conjunto* intersection(Conjunto& A, Conjunto& B);



};


#endif
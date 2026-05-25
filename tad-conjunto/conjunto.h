#ifndef CONJUNTO_H
#define CONJUNTO_H

class Conjunto{
    private:
        int* elementos;
        int tamanho_atual;
        int capacidade;

    public:
        Conjunto(int cap_inicial = 20);

        ~Conjunto();

        void add(int elem);
        void remove(int elem);
        bool contains(int elem);
        void print();

        //Funcoes friends globais que nao pertecem a classe, mas podem modificar os dados da classe
        friend Conjunto* uniao(Conjunto& A, Conjunto& B);
        friend Conjunto* intersection(Conjunto& A, Conjunto& B);



};


#endif
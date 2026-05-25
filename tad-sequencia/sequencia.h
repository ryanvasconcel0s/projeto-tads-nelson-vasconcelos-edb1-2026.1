#ifndef SEQUENCIA_H
#define SEQUENCIA_H

class Sequencia{
    private:
        int* elementos; //Vetor dinamico da sequencia 
        int capacidade; //Tamanho alocado na memoria
        int tamanho_atual; //Quantidade de elementos validos 

    public:
        //Construtor: inicia com capacidade inicial 15
        Sequencia(int cap_inicial = 15);

        //Destrutor: para liberar a memoria alocada de new
        ~Sequencia();

        //Operações definidas para Sequencia
        void insert(int pos, int elem);
        void remove(int pos);
        int get(int pos);
        void print();
};

#endif
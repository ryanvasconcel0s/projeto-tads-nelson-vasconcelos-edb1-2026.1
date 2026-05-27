#ifndef ARRAY_SEQUENCE 
#define ARRAY_SEQUENCE

class ArraySequence{
    private:
        int* elementos;
        int tamanho_atual;
        int capacidade;

        //Funcao para realacacao e redimensionamento do array elementos 
        void realocar();

        public:
        //Construtor e destrutor
        //Capacidade comeca em 2 e muda conforme a quantidade de elementos aumenta
        ArraySequence(int cap_inicial = 2);

        ~ArraySequence();

        //Funcoes definidas para Array Sequence
        void pushBack(int value); //Adiciona elemento ao final da sequencia
        void pushFront(int value);//Adiciona elemento no inicio da sequencia
        void insert(int pos, int value);//Adiciona elemento em uma posicao especifica
        void remove(int pos);//Remove elemento de uma posicao especifica
        int find(int value);//Encontra a posicao do elemento da sequencia
        int size();//Retorna a quantidade de elementos na sequencia 
        void print();//Printa o array elementos 
        int dimension();//Retorna a capacidade de elementos 


};

#endif
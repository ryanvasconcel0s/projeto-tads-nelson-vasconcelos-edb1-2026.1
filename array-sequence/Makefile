#Gerar o executável final
exec_arraySequence: main.o array-sequence.o
	g++ -Wall -std=c++17 -o exec_arraySequence main.o array-sequence.o

#Compilar o ficheiro principal
main.o: main.cpp array-sequence.h
	g++ -Wall -std=c++17 -c main.cpp

#Compilar a lógica da sequência
array-sequence.o: array-sequence.cpp array-sequence.h
	g++ -Wall -std=c++17 -c array-sequence.cpp

#Executar programa
run:
	./exec_arraySequence

#Limpar os ficheiros temporários
clean:
	rm -f exec_arraySequence *.o
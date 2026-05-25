#Gerar o executável final
exec_conjunto: main.o conjunto.o
	g++ -Wall -std=c++17 -o exec_conjunto main.o conjunto.o

#Compilar o ficheiro principal
main.o: main.cpp conjunto.h
	g++ -Wall -std=c++17 -c main.cpp

#Compilar a lógica da sequência
sequencia.o: conjunto.cpp conjunto.h
	g++ -Wall -std=c++17 -c conjunto.cpp

#Executar programa
run:
	./exec_conjunto

#Limpar os ficheiros temporários
clean:
	rm -f exec_conjunto *.o
#Gerar o executável final
exec_sequencia: main.o sequencia.o
	g++ -Wall -std=c++17 -o exec_sequencia main.o sequencia.o

#Compilar o ficheiro principal
main.o: main.cpp sequencia.h
	g++ -Wall -std=c++17 -c main.cpp

#Compilar a lógica da sequência
sequencia.o: sequencia.cpp sequencia.h
	g++ -Wall -std=c++17 -c sequencia.cpp

#Executar programa
run:
	./exec_sequencia

#Limpar os ficheiros temporários
clean:
	rm -f exec_sequencia *.o
# Trabalho Prático 1 - Tipos Abstratos de Dados (TADs)

Este repositório contém a implementação de três Tipos Abstratos de Dados (TADs) desenvolvidos em C++ para a disciplina de Estruturas de Dados Básicas I (IMD0029). 

O objetivo do projeto é aplicar conceitos de alocação dinâmica de memória e manipulação de ponteiros na *heap*, sem a utilização de bibliotecas prontas da Standard Template Library (STL).

## Estruturas Implementadas

O projeto está dividido em três módulos independentes:

1. **TAD Sequência:** Estrutura linear baseada em um array dinâmico com capacidade pré-definida. Permite inserção, remoção e acesso a elementos baseados em índices, realizando o deslocamento interno dos dados conforme necessário.
2. **TAD Conjunto:** Estrutura baseada na teoria dos conjuntos matemáticos. Não permite a inserção de elementos duplicados e implementa operações de busca linear, além das operações de União e Interseção, que retornam novos conjuntos alocados dinamicamente.
3. **Array Sequence:** Uma evolução da sequência padrão, caracterizada pelo redimensionamento dinâmico. Quando a capacidade do array é atingida, a estrutura aloca automaticamente um novo bloco de memória com o dobro da capacidade, transfere os dados e libera a memória antiga de forma segura.

## Ambiente de Desenvolvimento e Pré-requisitos

O desenvolvimento e os testes deste projeto foram realizados utilizando o terminal **UCRT** (Universal C Runtime, comumente via MSYS2 no Windows).

Para compilar e executar os códigos em sua máquina, é necessário ter instalado no seu ambiente:
* Compilador GCC (g++) com suporte ao padrão C++17.
* Ferramenta GNU Make.

## Como Compilar e Executar

Cada TAD possui o seu próprio diretório contendo seus arquivos fonte (`.cpp` e `.h`) e um arquivo `Makefile` configurado para automatizar o processo. 

Abaixo estão as instruções para testar cada uma das estruturas.

### 1. TAD Sequência

Navegue até o diretório do TAD Sequência e utilize os seguintes comandos no terminal:

* **Compilar o projeto:**
  ```bash
  make

* **Executar o programa de testes:**
  ```bash
  make run 

* **Limpar os arquivos temporários (.o) e o executável:**
  ```bash
  make clean

### 2. TAD Conjunto

Navegue até o diretório do TAD Conjunto e utilize os seguintes comandos no terminal:

* **Compilar o projeto:**
  ```bash
  make

* **Executar o programa de testes:**
  ```bash
  make run 

* **Limpar os arquivos temporários (.o) e o executável:**
  ```bash
  make clean


### 3. Array Sequence

Navegue até o diretório do Array Sequence e utilize os seguintes comandos no terminal:

* **Compilar o projeto:**
  ```bash
  make

* **Executar o programa de testes:**
  ```bash
  make run 

* **Limpar os arquivos temporários (.o) e o executável:**
  ```bash
  make clean
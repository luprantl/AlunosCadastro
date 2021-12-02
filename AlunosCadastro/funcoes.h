#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

// Estrutura de Alunos
struct Aluno {
	std::string nome;
	std::string matricula;
	float aep1;
	float prova1;
	float aep2;
	float prova2;
	float sub;
	float media;
	std::string status;
} typedef Aluno;

/**
* Esta fun��o � chamada para exibir o menu
* na tela do usu�rio e retornar a op��o
* selecionada
* retorna o char digitada pelo usu�rio
*/
char menu ();
Aluno alunos[100];

/**
* Esta fun��o � chamada para permitir
* o cadastro de um Aluno, retorna
* true caso o cadastro tenha ocorrido com sucesso
* ou false caso acontecer um problema
*/
bool cadastraAluno (Aluno);

void perguntaAluno(Aluno);
/* nessa funcao se espera true or false na leitura do arquivo*/
bool realizaLeituraAprovados();
//Funcao que cria lista de aprovados
bool realizaLeituraEmDP();
//realiza a leitura dos alunos em dependencia
bool realizaLeituraSubPrimeiro();
//realiza a leitura dos alunos em dependencia no primeiro
bool realizaLeituraSubSegundo();
//realiza a leitura dos alunos em dependencia no segundo semestre

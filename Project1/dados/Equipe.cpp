#include "Equipe.h"


Equipe::Equipe()
{
}
Equipe::Equipe(std::string nome, float custoHora, int numIntegrantes, float custoMobilizacao) {
	this->nome = nome;
	this->custoHora = custoHora;
	this->numIntegrantes = numIntegrantes;
	this->custoMobilizacao = custoMobilizacao;
}
Equipe::~Equipe()
{
}
std::string Equipe::get_nome()
{
	return nome;
}
float Equipe::get_custoHora()
{
	return custoHora;
}
void Equipe::set_custoHora(float custoHora)
{
	this->custoHora = custoHora;
}
int Equipe::get_numIntegrantes()
{
	return numIntegrantes;
}
void Equipe::set_numIntegrantes(int numIntegrantes)
{
	this->numIntegrantes = numIntegrantes;
}
float Equipe::get_custoMobilizacao()
{
	return custoMobilizacao;
}
void Equipe::set_custoMobilizacao(float custoMobilizacao)
{
	this->custoMobilizacao = custoMobilizacao;
}

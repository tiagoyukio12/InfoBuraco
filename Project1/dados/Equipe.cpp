#include "Equipe.h"


Equipe::Equipe()
{
}
Equipe::Equipe(std::string nome, int custoHora, int numIntegrantes, int custoMobilizacao) {
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
int Equipe::get_custoHora()
{
	return custoHora;
}
void Equipe::set_custoHora(int custoHora)
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
int Equipe::get_custoMobilizacao()
{
	return custoMobilizacao;
}
void Equipe::set_custoMobilizacao(int custoMobilizacao)
{
	this->custoMobilizacao = custoMobilizacao;
}
int Equipe::getCusto(int horas) {
	return custoMobilizacao + horas * custoHora;
}

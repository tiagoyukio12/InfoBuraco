#include "Equipamento.h"


Equipamento::Equipamento() 
{
}

Equipamento::Equipamento(std::string nome, int custoHora) {
	this->nome = nome;
	this->custoHora = custoHora;
}

Equipamento::~Equipamento() 
{
}
std::string Equipamento::get_nome() 
{
    return nome;
}
int Equipamento::get_custoHora() 
{
    return custoHora;
}
void Equipamento::set_custoHora(int custoHora) 
{
    this->custoHora = custoHora;
}
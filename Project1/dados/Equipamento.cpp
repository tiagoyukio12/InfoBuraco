#include "Equipamento.h"


Equipamento::Equipamento() 
{
}

Equipamento::Equipamento(std::string nome, float custoHora) {
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
float Equipamento::get_custoHora() 
{
    return custoHora;
}
void Equipamento::set_custoHora(float custoHora) 
{
    this->custoHora = custoHora;
}
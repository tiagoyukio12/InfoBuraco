#include "./Funcionalidade.h"
//Begin section for file Funcionalidade.cpp
//TODO: Add definitions that you want preserved
//End section for file Funcionalidade.cpp


Funcionalidade::Funcionalidade() 
{
}
int Funcionalidade::getId()
{
	return this->id;
}
void Funcionalidade::setId(int id)
{
	this->id = id;
}
string Funcionalidade::getNome()
{
	return this->nome;
}
void Funcionalidade::setNome(string nome)
{
	this->nome = nome;
}
Funcionalidade::~Funcionalidade() 
{
}

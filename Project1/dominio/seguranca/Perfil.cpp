#include "./Perfil.h"


vector<Funcionalidade*>* Perfil::getFuncionalidades()
{
	return this->funcionalidades;
}

void Perfil::setFuncionalidades(vector<Funcionalidade*>* funcionalidades)
{
	this->funcionalidades = funcionalidades;
}

Perfil::Perfil() 
{
}
void Perfil::setNome(string nome)
{
	this->nome = nome;
}
string Perfil::getNome()
{
	return this->nome;
}
Perfil::~Perfil() 
{
}

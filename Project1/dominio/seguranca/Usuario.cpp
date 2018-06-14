#include "./Usuario.h"

Usuario::Usuario() 
{
	this->login = "Teste";
	this->senha = "Senha teste";
	this->dataCadastro = time_t();
	this->ativo = true;
	this->perfis = new vector<Perfil*>();
	Perfil * p = new Perfil();
	this->perfis->push_back(p);
	this->id = 0;

}
void Usuario::setLogin(string login)
{
	this->login = login;
}
void Usuario::setSenha(string senha)
{
	this->senha = senha;
}
void Usuario::setDataCadastro(time_t dataCadastro)
{
	this->dataCadastro = dataCadastro;
}
void Usuario::setId(int id)
{
	this->id = id;
}
void Usuario::setAtivo(bool ativo)
{
	this->ativo = ativo;
}
void Usuario::setPerfis(vector<Perfil*>* perfis)
{
	this->perfis = perfis;

}
Usuario::~Usuario() 
{
}

string Usuario::getLogin()
{
	return this->login;
}

string Usuario::getSenha()
{
	return this->senha;
}

int Usuario::getId()
{
	return this->id;
}

bool Usuario::isAtivo()
{
	return this->ativo;
}

vector<Perfil*>* Usuario::getPerfis()
{
	return this->perfis;
}

time_t Usuario::getDataCadastro()
{
	return this->dataCadastro;
}

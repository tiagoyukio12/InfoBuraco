#include "Material.h"


Material::Material()
{
}
Material::Material(std::string nome, int custoUnidade, std::string unidade) {
	this->nome = nome;
	this->custoUnidade = custoUnidade;
	this->unidade = unidade;
}
Material::~Material()
{
}
std::string Material::get_nome()
{
	return nome;
}
int Material::get_custoUnidade()
{
	return custoUnidade;
}
void Material::set_custoUnidade(int custoUnidade)
{
	this->custoUnidade = custoUnidade;
}
std::string Material::get_unidade()
{
	return unidade;
}

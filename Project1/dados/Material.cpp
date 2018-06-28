#include "Material.h"


Material::Material()
{
}
Material::Material(std::string nome, float custoUnidade, std::string unidade) {
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
float Material::get_custoUnidade()
{
	return custoUnidade;
}
void Material::set_custoUnidade(float custoUnidade)
{
	this->custoUnidade = custoUnidade;
}
std::string Material::get_unidade()
{
	return unidade;
}
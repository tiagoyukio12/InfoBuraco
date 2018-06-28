#include "QuantidadeMaterial.h"


QuantidadeMaterial::QuantidadeMaterial()
{
}
QuantidadeMaterial::QuantidadeMaterial(float quantidade, Material * material) {
	this->quantidade = quantidade;
	this->material = material;
}
QuantidadeMaterial::~QuantidadeMaterial()
{
}
float QuantidadeMaterial::get_quantidade()
{
	return quantidade;
}
void QuantidadeMaterial::set_quantidade(float quantidade)
{
	this->quantidade = quantidade;
}
Material * QuantidadeMaterial::get_material()
{
	return material;
}
void QuantidadeMaterial::set_material(Material * material)
{
	this->material = material;
}

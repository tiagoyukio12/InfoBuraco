#ifndef QUANTIDADEMATERIAL_H
#define QUANTIDADEMATERIAL_H
#include "Material.h"



class QuantidadeMaterial
{
private:
	float quantidade;
	Material * material;
public:
	QuantidadeMaterial();
	
	QuantidadeMaterial(float quantidade, Material * material);

	~QuantidadeMaterial();

	float get_quantidade();

	void set_quantidade(float quantidade);

	Material * get_material();

	void set_material(Material * material);
};
#endif

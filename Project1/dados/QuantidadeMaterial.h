#ifndef QUANTIDADEMATERIAL_H
#define QUANTIDADEMATERIAL_H
#include "Material.h"



class QuantidadeMaterial
{
private:
	int quantidade;
	Material * material;
public:
	QuantidadeMaterial();
	
	QuantidadeMaterial(int quantidade, Material * material);

	~QuantidadeMaterial();

	int get_quantidade();

	void set_quantidade(int quantidade);

	Material * get_material();

	void set_material(Material * material);
};
#endif

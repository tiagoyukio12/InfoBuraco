#ifndef MATERIAL_H
#define MATERIAL_H
#include <string>



class Material
{
private:
	std::string nome;
	float custoUnidade;
	std::string unidade;
public:
	Material();

	Material(std::string nome, float custoUnidade, std::string unidade);

	~Material();

	std::string get_nome();

	float get_custoUnidade();

	void set_custoUnidade(float custoUnidade);

	std::string get_unidade();
};
#endif

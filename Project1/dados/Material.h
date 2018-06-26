#ifndef MATERIAL_H
#define MATERIAL_H
#include <string>



class Material
{
private:
	std::string nome;
	int custoUnidade;
	std::string unidade;
public:
	Material();

	Material(std::string nome, int custoUnidade, std::string unidade);

	~Material();

	std::string get_nome();

	int get_custoUnidade();

	void set_custoUnidade(int custoUnidade);

	std::string get_unidade();
};
#endif

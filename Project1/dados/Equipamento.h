#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H
#include <string>


class Equipamento
{
private:
	std::string nome;
	int custoHora;
public:
	Equipamento();

	Equipamento(std::string nome, int custoHora);

	~Equipamento();

	std::string get_nome();

	int get_custoHora();

	void set_custoHora(int custoHora);
};
#endif

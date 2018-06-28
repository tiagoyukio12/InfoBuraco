#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H
#include <string>


class Equipamento
{
private:
	std::string nome;
	float custoHora;
public:
	Equipamento();

	Equipamento(std::string nome, float custoHora);

	~Equipamento();

	std::string get_nome();

	float get_custoHora();

	void set_custoHora(float custoHora);
};
#endif

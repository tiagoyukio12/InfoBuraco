#ifndef RELATORIO_H
#define RELATORIO_H
#include <list>
#include <iostream>
#include <fstream>
#include "OrdemDeServico.h"

class Relatorio
{
private:
	std::list<OrdemDeServico *> *listaOS;
public:
	Relatorio(std::list<OrdemDeServico *> *listaOS);

	~Relatorio();

	void gerarRelFis();

	void gerarRelFisFin();
};
#endif

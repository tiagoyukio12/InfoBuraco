#include "Relatorio.h"



Relatorio::Relatorio(std::list<OrdemDeServico *> *listaOS)
{
	this->listaOS = listaOS;
}

Relatorio::~Relatorio()
{
}

void Relatorio::gerarRelFis()
{
	std::ofstream myfile;
	myfile.open("relatorio_fisico.txt");
	myfile << "Relatorio Fisico\n";
	for (std::list<OrdemDeServico *>::iterator it = (*listaOS).begin(); it != (*listaOS).end(); ++it) {
		myfile << "\n\nID: " << (*it)->get_id();
		myfile << "\nData de Finalizacao: " << (*it)->get_dataFim()->getDate();
	}
	myfile.close();
}

void Relatorio::gerarRelFisFin()
{
	std::ofstream myfile;
	myfile.open("relatorio_fisico-financeiro.txt");
	myfile << "Relatorio Fisico-Financeiro";
	for (std::list<OrdemDeServico *>::iterator it = (*listaOS).begin(); it != (*listaOS).end(); ++it) {
		myfile << "\n\nID: " << (*it)->get_id();
		myfile << "\nData de Finalizacao: " << (*it)->get_dataFim()->getDate();
		myfile << "\nCusto Total: R$ " << (*it)->get_custoTotal();
	}
	myfile.close();
}

#include "OrdemDeServico.h"


OrdemDeServico::OrdemDeServico(int id, Date * dataInicio, Date * dataFim, float estimativaHoras, float estimativaCusto, bool finalizado, Buraco * buraco, int prioridade, float custoTotal)
{
	this->id = id;
	this->dataInicio = dataInicio;
	this->dataFim = dataFim;
	this->estimativaHoras = estimativaHoras;
	this->estimativaCusto = estimativaCusto;
	this->finalizado = finalizado;
	this->buraco = buraco;
	this->prioridade = prioridade;
	this->custoTotal = custoTotal;
}
OrdemDeServico::~OrdemDeServico() 
{
}
int OrdemDeServico::get_id() 
{
    return id;
}
void OrdemDeServico::set_id(int id) 
{
    this->id = id;
}
Date * OrdemDeServico::get_dataInicio() 
{
    return dataInicio;
}
void OrdemDeServico::set_dataInicio(Date * dataInicio) 
{
    this->dataInicio = dataInicio;
}
Date * OrdemDeServico::get_dataFim() 
{
    return dataFim;
}
void OrdemDeServico::set_dataFim(Date * dataFim) 
{
    this->dataFim = dataFim;
}
float OrdemDeServico::get_estimativaHoras() 
{
    return estimativaHoras;
}
void OrdemDeServico::set_estimativaHoras(float estimativaHoras) 
{
    this->estimativaHoras = estimativaHoras;
	estimativaCusto = calcularCustoTotal(estimativaHoras);
}
float OrdemDeServico::get_estimativaCusto() 
{
    return estimativaCusto;
}
void OrdemDeServico::set_estimativaCusto(float estimativaCusto) 
{
    this->estimativaCusto = estimativaCusto;
}
bool OrdemDeServico::get_finalizado() 
{
    return finalizado;
}
void OrdemDeServico::set_finalizado(bool finalizado) 
{
    this->finalizado = finalizado;
}
Buraco * OrdemDeServico::get_buraco() 
{
    return buraco;
}
void OrdemDeServico::set_buraco(Buraco * buraco) 
{
	this->buraco = buraco;
}
std::list<Equipamento*> OrdemDeServico::getListaEquipamento()
{
	return listaEquipamento;
}
void OrdemDeServico::addListaEquipamento(Equipamento * equipamento)
{
	listaEquipamento.push_back(equipamento);
}
std::list<Equipe*> OrdemDeServico::getListaEquipe()
{
	return listaEquipe;
}
void OrdemDeServico::addListaEquipe(Equipe * equipe)
{
	listaEquipe.push_back(equipe);
}
std::list<Material*> OrdemDeServico::getListaMaterial()
{
	return listaMaterial;
}
void OrdemDeServico::addListaMaterial(Material * material)
{
	listaMaterial.push_back(material);
}
int OrdemDeServico::get_prioridade() 
{
    return prioridade;
}
void OrdemDeServico::set_prioridade(int prioridade) 
{
    this->prioridade = prioridade;
}
float OrdemDeServico::get_custoTotal() 
{
    return custoTotal;
}
void OrdemDeServico::set_custoTotal(float custoTotal) 
{
    this->custoTotal = custoTotal;
}
std::list<Foto*> OrdemDeServico::getListaFoto()
{
	return listaFoto;
}
void OrdemDeServico::addListaFoto(Foto * foto)
{
	listaFoto.push_back(foto);
}
std::list<QuantidadeMaterial*> OrdemDeServico::getListaQuantidadeMaterial()
{
	return listaQuantMat;
}
void OrdemDeServico::addListaQuantidadeMaterial(QuantidadeMaterial * quantidadeMaterial)
{
	listaQuantMat.push_back(quantidadeMaterial);
}
float OrdemDeServico::calcularCustoTotal(float horas) 
{
	// TODO: algoritmo para calcular custo a partir de materiais, equipamentos, etc.
	float custoMateriais = 0, custoEquipes = 0, custoEquipamentos = 0;
	
	for (std::list<QuantidadeMaterial *>::iterator it = listaQuantMat.begin(); it != listaQuantMat.end(); ++it) {
		custoMateriais += (*it)->get_material()->get_custoUnidade() * (*it)->get_quantidade();
	}
	for (std::list<Equipe *>::iterator it = listaEquipe.begin(); it != listaEquipe.end(); ++it) {
		custoEquipes += (*it)->get_custoHora() * horas + (*it)->get_custoMobilizacao();
	}
	for (std::list<Equipamento *>::iterator it = listaEquipamento.begin(); it != listaEquipamento.end(); ++it) {
		custoEquipamentos += (*it)->get_custoHora() * horas;
	}

    return custoMateriais + custoEquipes + custoEquipamentos;
}

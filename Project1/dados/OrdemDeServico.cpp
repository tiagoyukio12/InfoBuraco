#include "OrdemDeServico.h"


OrdemDeServico::OrdemDeServico(int id, Date * dataInicio, Date * dataFim, int estimativaHoras, int estimativaCusto, bool finalizado, Buraco * buraco, int prioridade, int custoTotal)
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
int OrdemDeServico::get_estimativaHoras() 
{
    return estimativaHoras;
}
void OrdemDeServico::set_estimativaHoras(int estimativaHoras) 
{
    this->estimativaHoras = estimativaHoras;
}
int OrdemDeServico::get_estimativaCusto() 
{
    return estimativaCusto;
}
void OrdemDeServico::set_estimativaCusto(int estimativaCusto) 
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
int OrdemDeServico::get_custoTotal() 
{
    return custoTotal;
}
void OrdemDeServico::set_custoTotal(int custoTotal) 
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
	return listaQuantidadeMaterial;
}
void OrdemDeServico::addListaQuantidadeMaterial(QuantidadeMaterial * quantidadeMaterial)
{
	listaQuantidadeMaterial.push_back(quantidadeMaterial);
}
int OrdemDeServico::calcularCustoTotal() 
{
	// TODO: algoritmo para calcular custo a partir de materiais, equipamentos, etc.
    return 0;
}

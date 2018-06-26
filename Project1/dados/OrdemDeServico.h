#ifndef ORDEMDESERVICO_H
#define ORDEMDESERVICO_H
#include <list>
#include "Foto.h"
#include "Date.h"
#include "Buraco.h"
#include "Equipamento.h"
#include "Equipe.h"
#include "QuantidadeMaterial.h"



class OrdemDeServico
{
private:
	int id;
	Date * dataInicio;
	Date * dataFim;
	int estimativaHoras;
	int estimativaCusto;
	bool finalizado;
	Buraco * buraco;
	std::list<Equipamento *> listaEquipamento;
	std::list<Equipe *> listaEquipe;
	std::list<Material *> listaMaterial;
	int prioridade;
	int custoTotal;
	std::list<Foto *> listaFoto;
	std::list<QuantidadeMaterial *> listaQuantMat;
public:
	OrdemDeServico(int id, Date * dataInicio, Date * dataFim, int estimativaHoras, int estimativaCusto, bool finalizado, Buraco * buraco, int prioridade, int custoTotal);

	~OrdemDeServico();

	int get_id();

	void set_id(int id);

	Date * get_dataInicio();

	void set_dataInicio(Date * dataInicio);

	Date * get_dataFim();

	void set_dataFim(Date * dataFim);

	int get_estimativaHoras();

	void set_estimativaHoras(int estimativaHoras);

	int get_estimativaCusto();

	void set_estimativaCusto(int estimativaCusto);

	bool get_finalizado();

	void set_finalizado(bool finalizado);

	Buraco * get_buraco();

	void set_buraco(Buraco * buraco);
	
	std::list<Equipamento *> getListaEquipamento();

	void addListaEquipamento(Equipamento * equipamento);

	std::list<Equipe *> getListaEquipe();

	void addListaEquipe(Equipe * equipe);

	std::list<Material *> getListaMaterial();

	void addListaMaterial(Material * material);

	int get_prioridade();

	void set_prioridade(int prioridade);

	int get_custoTotal();

	void set_custoTotal(int custoTotal);

	std::list<Foto *> getListaFoto();

	void addListaFoto(Foto * foto);

	std::list<QuantidadeMaterial *> getListaQuantidadeMaterial();

	void addListaQuantidadeMaterial(QuantidadeMaterial * quantidadeMaterial);

	int calcularCustoTotal(int horas);
};
#endif

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
	float estimativaHoras;
	float estimativaCusto;
	bool finalizado;
	Buraco * buraco;
	std::list<Equipamento *> listaEquipamento;
	std::list<Equipe *> listaEquipe;
	std::list<Material *> listaMaterial;
	int prioridade;
	float custoTotal;
	std::list<Foto *> listaFoto;
	std::list<QuantidadeMaterial *> listaQuantMat;
public:
	OrdemDeServico(int id, Date * dataInicio, Date * dataFim, float estimativaHoras, float estimativaCusto, bool finalizado, Buraco * buraco, int prioridade, float custoTotal);

	~OrdemDeServico();

	int get_id();

	void set_id(int id);

	Date * get_dataInicio();

	void set_dataInicio(Date * dataInicio);

	Date * get_dataFim();

	void set_dataFim(Date * dataFim);

	float get_estimativaHoras();

	void set_estimativaHoras(float estimativaHoras);

	float get_estimativaCusto();

	void set_estimativaCusto(float estimativaCusto);

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

	float get_custoTotal();

	void set_custoTotal(float custoTotal);

	std::list<Foto *> getListaFoto();

	void addListaFoto(Foto * foto);

	std::list<QuantidadeMaterial *> getListaQuantidadeMaterial();

	void addListaQuantidadeMaterial(QuantidadeMaterial * quantidadeMaterial);

	float calcularCustoTotal(float horas);
};
#endif

#ifndef NOTIFICACAO_H
#define NOTIFICACAO_H
#include <string>
#include <list>
#include "Date.h"
#include "Foto.h"



class Notificacao
{
private:
	std::string nomeCidadao;
	std::string contato;
	Date * data;
	std::list<Foto *> listaFoto;
public:
	Notificacao(std::string nomeCidadao, std::string contato, Date * data);

	~Notificacao();

	std::string get_nomeCidadao();

	std::string get_contato();

	Date * get_data();

	std::list<Foto *> getListaFoto();

	void addListaFoto(Foto * foto);
};
#endif

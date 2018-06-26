#include "Notificacao.h"


Notificacao::Notificacao(std::string nomeCidadao, std::string contato, Date * data)
{
	this->nomeCidadao = nomeCidadao;
	this->contato = contato;
	this->data = data;
}
Notificacao::~Notificacao()
{
}

std::string Notificacao::get_nomeCidadao()
{
	return nomeCidadao;
}

std::string Notificacao::get_contato()
{
	return contato;
}

Date * Notificacao::get_data()
{
	return data;
}

std::list<Foto *> Notificacao::getListaFoto() {
	return listaFoto;
}

void Notificacao::addListaFoto(Foto * foto) {
	listaFoto.push_back(foto);
}

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

std::list<Foto *> Notificacao::getListaFoto() {
	return listaFoto;
}

void Notificacao::addListaFoto(Foto * foto) {
	listaFoto.push_back(foto);
}

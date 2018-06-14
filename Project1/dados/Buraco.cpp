#include "Buraco.h"


Buraco::Buraco(int id, Date * dataprimeiro, std::string endereco, int tamanho, std::string posRelativa, std::string regiao)
{
	this->id = id;
	this->dataPrimeiro = dataPrimeiro;
	this->endereco = endereco;
	this->tamanho = tamanho;
	this->posRelativa = posRelativa;
	this->regiao = regiao;
}
Buraco::~Buraco()
{
}
int Buraco::get_id()
{
	return id;
}
void Buraco::set_id(int id)
{
	this->id = id;
}

int Buraco::get_tamanho()
{
	return tamanho;
}
void Buraco::set_tamanho(int tamanho)
{
	this->tamanho = tamanho;
}

std::list<Notificacao *> Buraco::getListaNotificacao() {
	return listaNotificacao;
}

void Buraco::addListaNotificacao(Notificacao * notificacao) {
	listaNotificacao.push_back(notificacao);
}

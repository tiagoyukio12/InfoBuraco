#ifndef BURACO_H
#define BURACO_H
#include <string>
#include <list>
#include "Date.h"
#include "Notificacao.h"


class Buraco
{
private:
	int id;
	Date * dataPrimeiro;
	std::string endereco;
	int tamanho;
	std::string posRelativa;
	std::list<Notificacao *> listaNotificacao;
	std::string regiao;
public:
	Buraco(int id, Date * dataprimeiro, std::string endereco, int tamanho, std::string posRelativa, std::string regiao);

	~Buraco();

	int get_id();

	void set_id(int id);

	Date * get_dataPrimeiro();

	std::string get_endereco();

	int get_tamanho();

	void set_tamanho(int tamanho);

	std::string get_posRelativa();

	std::list<Notificacao *> getListaNotificacao();

	void addListaNotificacao(Notificacao * notificacao);

	std::string get_regiao();
};
#endif

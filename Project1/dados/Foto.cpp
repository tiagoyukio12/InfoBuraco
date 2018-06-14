#include "Foto.h"


Foto::Foto() {

}
Foto::Foto(int id, std::string nome_arquivo)
{
	this->id = id;
	this->nome_arquivo = nome_arquivo;
}
Foto::~Foto()
{
}
int Foto::get_id()
{
	return id;
}

std::string Foto::get_nome_arquivo() {
	return nome_arquivo;
}

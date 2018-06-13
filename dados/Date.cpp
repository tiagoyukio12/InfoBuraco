#include "Date.h"


Date::Date(int dia, int mes, int ano)
{
	this->dia = dia;
	this->mes = mes;
	this->ano = ano;
}

Date::~Date()
{
}

string Date::getDate()
{
	return to_string(dia) + "/" + to_string(mes) + "/" + to_string(ano);
}

#include "Date.h"


Date::Date(int dia, int mes, int ano)
{
	this->dia = dia;
	this->mes = mes;
	this->ano = ano;
}

Date::Date()
{}

Date::~Date()
{
}

std::string Date::getDate()
{
	return std::to_string(dia) + "/" + std::to_string(mes) + "/" + std::to_string(ano);
}

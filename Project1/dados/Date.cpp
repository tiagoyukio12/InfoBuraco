#include "Date.h"


Date::Date(int dia, int mes, int ano)
{
	this->dia = dia;
	this->mes = mes;
	this->ano = ano;
}

Date::Date(std::string data)
{
	dia = std::stoi(data.substr(8, 2));
	mes = std::stoi(data.substr(5, 2));
	ano = std::stoi(data.substr(0, 4));
}

Date::~Date()
{
}

std::string Date::getDate()
{
	return std::to_string(dia) + "/" + std::to_string(mes) + "/" + std::to_string(ano);
}

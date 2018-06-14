#pragma once
#include <string>

class Date
{
private:
	int dia;
	int mes;
	int ano;
public:
	Date(int dia, int mes, int ano);
	Date();
	~Date();

	// Retorna data no formato dd/mm/yyyy
	std::string getDate();
};


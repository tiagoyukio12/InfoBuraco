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
	Date(std::string data);
	~Date();

	// Retorna data no formato dd/mm/yyyy
	std::string getDate();
};


#pragma once
#include <string>

using namespace::std;

class Date
{
private:
	int dia;
	int mes;
	int ano;
public:
	Date(int dia, int mes, int ano);
	~Date();

	// Retorna data no formato dd/mm/yyyy
	string getDate();
};


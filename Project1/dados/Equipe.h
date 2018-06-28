#ifndef EQUIPE_H
#define EQUIPE_H
#include <string>



class Equipe
{
private:
	std::string nome;
	float custoHora;
	int numIntegrantes;
	float custoMobilizacao;
public:
	Equipe();

	Equipe(std::string nome, float custoHora, int numIntegrantes, float custoMobilizacao);
	
	~Equipe();
	
	std::string get_nome();
	
	float get_custoHora();
	
	void set_custoHora(float custoHora);
	
	int get_numIntegrantes();
	
	void set_numIntegrantes(int numIntegrantes);
	
	float get_custoMobilizacao();
	
	void set_custoMobilizacao(float custoMobilizacao);
};
#endif

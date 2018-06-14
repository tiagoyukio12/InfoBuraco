#ifndef EQUIPE_H
#define EQUIPE_H
#include <string>



class Equipe
{
private:
	std::string nome;
	int custoHora;
	int numIntegrantes;
	int custoMobilizacao;
public:
	Equipe();

	Equipe(std::string nome, int custoHora, int numIntegrantes, int custoMobilizacao);
	
	~Equipe();
	
	std::string get_nome();
	
	int get_custoHora();
	
	void set_custoHora(int custoHora);
	
	int get_numIntegrantes();
	
	void set_numIntegrantes(int numIntegrantes);
	
	int get_custoMobilizacao();
	
	void set_custoMobilizacao(int custoMobilizacao);
};
#endif

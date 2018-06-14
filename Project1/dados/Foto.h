#ifndef FOTO_H
#define FOTO_H
#include <string>



class Foto
{
private:
	int id;
	std::string nome_arquivo;
public:
	Foto();

	Foto(int id, std::string nome_arquivo);

	~Foto();

	int get_id();

	std::string get_nome_arquivo();
};
#endif

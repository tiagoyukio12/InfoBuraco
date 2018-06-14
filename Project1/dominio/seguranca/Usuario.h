#ifndef USUARIO_H
#define USUARIO_H
#include "./Perfil.h"
#include <ctime>

class Usuario
{

    private:
        vector <Perfil*> * perfis;
        string login;
		string senha;
		time_t dataCadastro;
		bool ativo;
        int id;
    public:

        Usuario(); 

		void setLogin(string login);
		void setSenha(string senha);
		void setDataCadastro(time_t dataCadastro);
		void setId(int id);
		void setAtivo(bool ativo);
		void setPerfis(vector<Perfil*>* perfis);

		string getLogin();
		string getSenha();
		int getId();
		bool isAtivo();
		vector<Perfil*> * getPerfis();
		time_t getDataCadastro();

		bool permissaoFuncionalidade(std::string nomeDaFuncionalidade);
		bool Usuario::permissaoFuncionalidade(int idDaFuncionalidade);

        virtual ~Usuario(); 



};  //end class Usuario



#endif

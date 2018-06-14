#ifndef USUARIODAO_H
#define USUARIODAO_H

#include "../dominio/seguranca/Usuario.h"
#include "PerfilDAO.h" //Dependency Generated Source:UsuarioDAO Target:PerfilDAO
#include "MySQLDAO.h"
#include <memory>

class UsuarioDAO
{
    public:

        UsuarioDAO(); 

        virtual ~UsuarioDAO(); 

		//Metodos nao implementados
		///std::shared_ptr<Usuario> selecionarPeloId(int id);
		///std::shared_ptr<Usuario> selecionarPeloLogin(string login);

        //<p>Retorna o objeto Usuário junto com os perfis dele.</p>
		std::shared_ptr<Usuario> selecionarPeloLoginESenha(string login, string senha);

		std::shared_ptr<Usuario> carregarUsuario(std::shared_ptr<Usuario> usuario);

};  //end class UsuarioDAO



#endif

#ifndef USUARIODAO_H
#define USUARIODAO_H

#include "../dominio/seguranca/Usuario.h"
#include "PerfilDAO.h" //Dependency Generated Source:UsuarioDAO Target:PerfilDAO
#include "MySQLDAO.h"

class UsuarioDAO
{
    public:

        UsuarioDAO(); 

        virtual ~UsuarioDAO(); 

        Usuario* selecionarPeloId(int id); 

        Usuario* selecionarPeloLogin(string login); 

        //<p>Retorna o objeto Usuário junto com os perfis dele.</p>
        Usuario* selecionarPeloLoginESenha(string login, string senha);

        Usuario* carregarUsuario(Usuario* id); 

};  //end class UsuarioDAO



#endif

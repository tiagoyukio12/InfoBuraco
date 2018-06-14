#ifndef CONTROLLERSEGURANCA_H
#define CONTROLLERSEGURANCA_H

#include "Usuario.h"
#include "../../dao/UsuarioDAO.h" //Dependency Generated Source:ControllerSeguranca Target:UsuarioDAO
#include "../../dao/PerfilDAO.h"
#include <memory>

class ControllerSeguranca
{
    public:

        ControllerSeguranca(); 
        virtual ~ControllerSeguranca(); 
		std::shared_ptr<Usuario> logar(string login, string senha);
		std::shared_ptr<Usuario> deslogar(string login);
		std::shared_ptr<Usuario> carregarFuncionalidades(std::shared_ptr<Usuario> usuario);

};  //end class ControllerSeguranca



#endif

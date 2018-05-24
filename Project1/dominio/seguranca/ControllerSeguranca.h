#ifndef CONTROLLERSEGURANCA_H
#define CONTROLLERSEGURANCA_H

#include "Usuario.h"
#include "../../dao/UsuarioDAO.h" //Dependency Generated Source:ControllerSeguranca Target:UsuarioDAO
#include "../../dao/PerfilDAO.h"

class ControllerSeguranca
{
    public:

        ControllerSeguranca(); 
        virtual ~ControllerSeguranca(); 
        Usuario* logar(string login, string senha);
        Usuario* deslogar(string login);
        Usuario* carregarFuncionalidades(Usuario * usuario); 

};  //end class ControllerSeguranca



#endif

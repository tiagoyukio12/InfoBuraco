#ifndef PERFILDAO_H
#define PERFILDAO_H

#include "../dominio/seguranca/Perfil.h"
#include "MySQLDAO.h"
#include "FuncionalidadeDAO.h" //Dependency Generated Source:PerfilDAO Target:FuncionalidadeDAO

class PerfilDAO
{

    public:

        PerfilDAO(); 
        virtual ~PerfilDAO(); 

        //<p>Carrega as funcionalidades do Perfil</p>
        Perfil * selecionarPeloNome(string nome); 

};  //end class PerfilDAO



#endif

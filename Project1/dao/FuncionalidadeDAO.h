#ifndef FUNCIONALIDADEDAO_H
#define FUNCIONALIDADEDAO_H

#include "../dominio/seguranca/Funcionalidade.h"
#include "MySQLDAO.h"


class FuncionalidadeDAO
{

    public:
        FuncionalidadeDAO(); 

        virtual ~FuncionalidadeDAO(); 
        Funcionalidade* selecionarPeloId(int id); 

};  //end class FuncionalidadeDAO



#endif

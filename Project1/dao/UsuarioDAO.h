#ifndef USUARIODAO_H
#define USUARIODAO_H

#include <string>
#include <exception>
#include "MySQLDAO.h"
#include "Usuario.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

class UsuarioDAO
{
    public:

		UsuarioDAO();


        virtual ~UsuarioDAO(); 

        //Retorna o objeto Usuario junto com os perfis dele.
		Usuario* getUsuario(std::string login, std::string senha);

		void createUsuario(std::string login, std::string senha);

private:


	std::string seed = "Info buraco 2018";
};  //end class UsuarioDAO


#endif
#ifndef USUARIO_H
#define USUARIO_H

#include <vector>
#include <string>
#include "MySQLDAO.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>


class Usuario
{
    public:

        Usuario(std::string Username, std::vector<std::string> Permissoes); 

        virtual ~Usuario(); 

		bool temPermissao(std::string Funcionalidade);

		std::vector<std::string> getPermissoes() { return minhasPermissoes; }

		std::string getUsername();

		sql::PreparedStatement *Usuario::prepareQuery(std::string UnboundQuery, std::string Funcionalidade);
private:

	std::vector<std::string> minhasPermissoes;
	std::string Username = "";

};  //end class Usuario



#endif

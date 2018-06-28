#include "Usuario.h"

Usuario::Usuario(std::string Username, std::vector<std::string> Permissoes) : Username(Username), minhasPermissoes(Permissoes)
{
}

Usuario::~Usuario()
{
}

bool Usuario::temPermissao(std::string Funcionalidade)
{
	for (std::string perm : minhasPermissoes)
	{
		if (perm == Funcionalidade) { return true; }
	}

	return false;
}

std::string Usuario::getUsername()
{
	return Username;
}

sql::PreparedStatement *Usuario::prepareQuery(std::string UnboundQuery, std::string Funcionalidade)
{
	if (!temPermissao(Funcionalidade)) { return nullptr; }

	sql::Connection * connection = nullptr;
	sql::Statement* statement = nullptr;
	sql::PreparedStatement * preparedStatement = nullptr;
	sql::ResultSet *resultSet = nullptr;
	//Pegar conexão
	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();
	// Preparar Query que busca ID do Usuario
	preparedStatement = connection->prepareStatement(UnboundQuery);

	return preparedStatement;
}

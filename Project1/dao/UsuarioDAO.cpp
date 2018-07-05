#include "UsuarioDAO.h"


UsuarioDAO::UsuarioDAO() 
{
}
UsuarioDAO::~UsuarioDAO() 
{
	
}

Usuario* UsuarioDAO::getUsuario(std::string login, std::string senha)
{
	std::vector<std::string> Permissoes;

	sql::Connection * connection				= nullptr;
	sql::Statement* statement					= nullptr;
	sql::PreparedStatement * preparedStatement	= nullptr;
	sql::ResultSet *resultSet					= nullptr;
	//Pegar conexão
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
	// Preparar Query que busca ID do Usuario
		preparedStatement = connection->prepareStatement("SELECT id_usuario FROM usuarios where nome = ? and senha = SHA1(AES_ENCRYPT(?,?))");
		preparedStatement->setString(1, login.c_str());
		preparedStatement->setString(2, senha.c_str());
		preparedStatement->setString(3, (seed+login).c_str());
	// Executar Query	
		resultSet = preparedStatement->executeQuery();
	// Processar Query
		if (resultSet->next())
		{
			// Preparar e executar Query de busca de Permissoes
			preparedStatement = connection->prepareStatement("SELECT funcionalidade FROM permissoes WHERE id_usuario = ?");
			int ID = resultSet->getInt("id_usuario");
			preparedStatement->setInt(1, resultSet->getInt("id_usuario"));
			resultSet = preparedStatement->executeQuery();
			std::string Func = "";
			while (resultSet->next()) {
				Func = resultSet->getString("funcionalidade").c_str();
				if (Func != "") { Permissoes.push_back(Func); }
			};
		}
		else { return nullptr; }

		return new Usuario(login, Permissoes);
}

// Nao sei pq, esse metodo nao ta funcionando
void UsuarioDAO::createUsuario(std::string login, std::string senha)
{
	sql::Connection * connection = nullptr;
	sql::Statement* statement = nullptr;
	sql::PreparedStatement * preparedStatement = nullptr;
	sql::ResultSet *resultSet = nullptr;
	//Pegar conexão
	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();
	// Preparar Query que busca ID do Usuario
	preparedStatement = connection->prepareStatement("INSERT INTO usuarios (nome, senha) VALUES('?',SHA1(AES_ENCRYPT('?','?')))");
	preparedStatement->setString(1, login.c_str());
	preparedStatement->setString(2, senha.c_str());
	preparedStatement->setString(3, (seed + login).c_str());
	// Executar Query	
	resultSet = preparedStatement->executeQuery();
	// Processar Query
	if (resultSet->next())
	{
	}
}

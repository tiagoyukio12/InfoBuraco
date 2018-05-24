#include "PerfilDAO.h"
PerfilDAO::PerfilDAO() 
{
}

PerfilDAO::~PerfilDAO() 
{
}

Perfil* PerfilDAO::selecionarPeloNome(string nome) 
{
	string log;
	Perfil * perfil = nullptr;
	Funcionalidade * funcionalidade = nullptr;
	vector<Funcionalidade*>* funcionalidades = nullptr;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {

		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT id, descricao FROM funcionalidades inner join perfil_funcionalidades on funcionalidades.id = perfil_funcionalidades.id_funcionalidade and perfil_funcionalidades.nome_perfil = ?");
		preparedStatement->setString(1, nome.c_str());
		perfil = new Perfil();
		perfil->setNome(nome);

		resultSet = preparedStatement->executeQuery();
		funcionalidades = new vector<Funcionalidade*>();
		while (resultSet->next()) {
			funcionalidade = new Funcionalidade();
			funcionalidade->setId(resultSet->getInt(1)); 
			funcionalidade->setNome(resultSet->getString(2).c_str());
			funcionalidades->push_back(funcionalidade);
		}
		perfil->setFuncionalidades(funcionalidades);
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
		funcionalidades = nullptr;
		perfil = nullptr;
	}
	return perfil;
}

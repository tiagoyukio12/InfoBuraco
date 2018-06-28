#include "MySQLDAO.h"

MySQLDAO* MySQLDAO::instance = 0;

MySQLDAO::MySQLDAO() 
{
	
	sql::Statement *stmt;
	sql::PreparedStatement *pstmt;
	std::string log = "";
	setDBLogin();

	try
	{
		driver = get_driver_instance();
		conn = driver->connect(url.c_str(), user.c_str(), pass.c_str());
	}
	catch (sql::SQLException e)
	{
		log = e.what();
	}

}
void MySQLDAO::setDBLogin()
{
	// 0 --> db dado pela prof
	// 1 --> db do michelet
	// 2 --> db do nosso AWS ADMIN
	// 3 --> db nosso do AWS grupo_a

	switch (dbToConnect)
	{
	case 0: // db dada pela prof
		this->url = "tcp://143.107.102.55:3306/db_a";
		this->pass = "grupo_a";
		this->user = "grupo_a";
		break;
	case 1: // db do michelet
		this->url = "tcp://143.107.102.55:3306/teste";
		this->pass = "teste";
		this->user = "teste";
		break;
	case 2: // AWS admin
		this->url = "tcp://labsoft.cefvsq2qpt4t.us-east-1.rds.amazonaws.com:3306/db_a";
		this->pass = "infoburaco";
		this->user = "infoburaco";
		break;

	case 3:
	default: // AWS grupo_a
		this->url = "tcp://labsoft.cefvsq2qpt4t.us-east-1.rds.amazonaws.com:3306/db_a";
		this->pass = "grupo_a";
		this->user = "grupo_a";
		break;
	}

}

MySQLDAO::~MySQLDAO() 
{
	delete conn;
}
MySQLDAO* MySQLDAO::getInstance()
{
	if (instance == 0)
		instance = new MySQLDAO();
	return instance;
}
sql::Connection * MySQLDAO::getConnection()
{
	return conn;
}

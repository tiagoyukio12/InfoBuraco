#include "MySQLDAO.h"



MySQLDAO* MySQLDAO::instance = 0;



MySQLDAO::MySQLDAO() 
{
	
	sql::Statement *stmt;
	sql::PreparedStatement *pstmt;
	string log = "";
	this->url = "tcp://143.107.102.55:3306/teste"; // TODO: Por dados do NOSSO DB e Popular ele.
	this->pass = "teste";
	this->user = "teste";
	try
	{
		driver = get_driver_instance();
		//for demonstration only. never save password in the code!
		//conn = driver->connect("tcp://143.107.102.55:3306/teste", "teste", "teste");
		conn = driver->connect(url.c_str(), user.c_str(), pass.c_str());
	}
	catch (sql::SQLException e)
	{
		log = e.what();

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

#ifndef MYSQLDAO_H
#define MYSQLDAO_H
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <string>

class MySQLDAO{
	private:
		sql::Driver * driver;
		sql::Connection * conn;
		std::string url;
		std::string user;
		std::string pass;

		int dbToConnect = 3;

		static MySQLDAO *instance;
		MySQLDAO();

		void MySQLDAO::setDBLogin();

    public:

        virtual ~MySQLDAO(); 
		static MySQLDAO* getInstance();
		sql::Connection * getConnection();

};  //end class MySQLDAO



#endif

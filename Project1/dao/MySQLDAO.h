#ifndef MYSQLDAO_H
#define MYSQLDAO_H
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <iostream>
using namespace std;


class MySQLDAO{
	private:
		sql::Driver * driver;
		sql::Connection * conn;
		string url;
		string user;
		string pass;		
		static MySQLDAO * instance;
		MySQLDAO(); //TODO: PQ o Construtor eh private?

    public:

        virtual ~MySQLDAO(); 
        static MySQLDAO* getInstance(); 
		sql::Connection * getConnection();

};  //end class MySQLDAO



#endif

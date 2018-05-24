#ifndef FUNCIONALIDADE_H
#define FUNCIONALIDADE_H

#include <iostream>
using namespace std;

class Funcionalidade
{

    private:
        string nome;
        int id;

    public:

        Funcionalidade(); 
		int getId();
		void setId(int id);
		string getNome();
		void setNome(string nome);

        virtual ~Funcionalidade(); 



};  //end class Funcionalidade



#endif

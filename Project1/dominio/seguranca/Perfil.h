#ifndef PERFIL_H
#define PERFIL_H
#include <vector>
#include <iostream>
#include "Funcionalidade.h"

using namespace std;

class Perfil
{

    private:

        vector<Funcionalidade*> * funcionalidades;

        int id;
		string nome;

    public:
		vector<Funcionalidade*> * getFuncionalidades();
		void setFuncionalidades(vector<Funcionalidade*>* funcionalidades);

        Perfil(); 
		void setNome(string nome);
		string getNome();
		        
        virtual ~Perfil(); 

};  //end class Perfil



#endif

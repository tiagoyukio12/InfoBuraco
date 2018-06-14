#ifndef GERENCIADORDEPERFISDEUSUARIO_H
#define GERENCIADORDEPERFISDEUSUARIO_H

#include "../dominio/seguranca/Perfil.h"
#include "../dominio/seguranca/Funcionalidade.h"





class GerenciadorDePerfisDeUsuario
{
    public:
        GerenciadorDePerfisDeUsuario(); 
        virtual ~GerenciadorDePerfisDeUsuario(); 

        void autorizar(Perfil *perfil, Funcionalidade *funcionalidade); 
        void autenticar(); 

};  //end class GerenciadorDePerfisDeUsuario



#endif

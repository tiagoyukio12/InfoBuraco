#include "ControllerSeguranca.h"

ControllerSeguranca::ControllerSeguranca() 
{
}
ControllerSeguranca::~ControllerSeguranca() 
{
}
Usuario* ControllerSeguranca::logar(string login, string senha)
{
	//Usuário Mock
	Usuario * usuario = nullptr;
	UsuarioDAO* usuarioDao = new UsuarioDAO();

	usuario = usuarioDao->selecionarPeloLoginESenha(login, senha);

	if (usuario != nullptr) {
		usuario = usuarioDao->carregarUsuario(usuario);
	}

	return usuario;
	//fim usuário mock
}
Usuario* ControllerSeguranca::deslogar(string login)
{
	Usuario * usuario = nullptr;
	return usuario;
}
Usuario* ControllerSeguranca::carregarFuncionalidades(Usuario* usuario) 
{
	
	PerfilDAO * pd = new PerfilDAO();
	Perfil* perfil = nullptr;
	vector<Perfil*>::iterator it;
	vector<Perfil*>* temp = new vector<Perfil*>();
	
	for (it = usuario->getPerfis()->begin(); it != usuario->getPerfis()->end(); it++) {
		perfil = pd->selecionarPeloNome((*it)->getNome());
		temp->push_back(perfil);
	}
	usuario->setPerfis(temp);
	return usuario;
}

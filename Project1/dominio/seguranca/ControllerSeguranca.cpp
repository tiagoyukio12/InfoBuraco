#include "./ControllerSeguranca.h"

ControllerSeguranca::ControllerSeguranca() 
{
}
ControllerSeguranca::~ControllerSeguranca() 
{
}
std::shared_ptr<Usuario> ControllerSeguranca::logar(string login, string senha)
{
	//Usuário Mock
	std::shared_ptr<Usuario> usuario = nullptr;
	std::shared_ptr <UsuarioDAO> usuarioDao(new UsuarioDAO());

	usuario = usuarioDao->selecionarPeloLoginESenha(login, senha);

	if (usuario != nullptr) {
		usuario = usuarioDao->carregarUsuario(usuario);
	}

	return usuario;
	//fim usuário mock
}
std::shared_ptr<Usuario> ControllerSeguranca::deslogar(string login)
{
	std::shared_ptr<Usuario> usuario = nullptr;
	return usuario;
}
std::shared_ptr<Usuario> ControllerSeguranca::carregarFuncionalidades(std::shared_ptr<Usuario> usuario)
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

Todos os forms recebem pelo seu construtor um ponteiro para um objeto do tipo Usuario chamado myUser.

Dentro do objeto usuario h� dois m�todos relevantes:
		bool temPermissao(std::string Funcionalidade);
		sql::PreparedStatement *Usuario::prepareQuery(std::string UnboundQuery, std::string Funcionalidade);

O primeiro, retorna true caso o usu�rio tenha a permiss�o para "Funcionalidade"

O segundo retorna um PreparedStatement caso o usu�rio tenha a permiss�o para "Funcionalidade".
Para obter dados do DB devemos fazer algo como:

sql::preparedStatement meuQuery = myUser->prepareQuery("SELECT * from Materiais WHERE Quantidade>=? AND Preco<=? OR Nome=?", "Despachante");
sql::ResultSet Resultados = nullptr;
		meuQuery->setInt(1, 30);
		meuQuery->setFloat(2, 7.5);
		meuQuery->setString(3, NomeDoMaterial.c_str());

		Resultados = preparedStatement->executeQuery();

		while (Resultados->next()) //(usar if caso espera-se apenas UM resultado)
		{
			Resultados->getInt("Nome da Coluna");
			Resultados->getString("Nome da Coluna");
			...

		}
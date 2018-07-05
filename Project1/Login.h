#pragma once


// Includes STD
#include <string>
#include <sstream>
#include <ctime>
#include <iostream>
#include <iomanip> //std::put_time
#include <memory> // unique_ptr

// Includes Nossos
#include "Janela4.h"
#include "CaixaDeDialogo.h"
#include "MenuPrincipal.h"
#include "dao/UsuarioDAO.h"
#include "dao/Usuario.h"

// Include de Bibliotecas
#include <msclr\marshal_cppstd.h>

using std::string;

/*
Referência: http://www.visualcplusdotnet.com/visualcplusdotnet21.html
*/
namespace Project1 {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		property String^ Login {
			String^ get() {
				return tb_login->Text;
			}
			void set(String^ login) {
				tb_login->Text = login;
			}
		}
		property String^ Senha {
			String^ get() {
				return tb_senha->Text;
			}
			void set(String^ senha) {
				tb_senha->Text = senha;
			}
		}
		property String^ Mensagem {
			String^ get() {
				return tb_mensagem->Text;
			}
			void set(String^ senha) {
				tb_mensagem->Text = senha;
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:







	private: System::Windows::Forms::TextBox^  tb_login;
	private: System::Windows::Forms::Label^  lb_login;
	private: System::Windows::Forms::Label^  lb_senha;
	private: System::Windows::Forms::TextBox^  tb_senha;
	private: System::Windows::Forms::Button^  bt_validar;
	private: System::Windows::Forms::Button^  bt_limpar;
	private: System::Windows::Forms::Label^  lb_mensagem;
	private: System::Windows::Forms::TextBox^  tb_mensagem;









	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tb_login = (gcnew System::Windows::Forms::TextBox());
			this->lb_login = (gcnew System::Windows::Forms::Label());
			this->lb_senha = (gcnew System::Windows::Forms::Label());
			this->tb_senha = (gcnew System::Windows::Forms::TextBox());
			this->bt_validar = (gcnew System::Windows::Forms::Button());
			this->bt_limpar = (gcnew System::Windows::Forms::Button());
			this->lb_mensagem = (gcnew System::Windows::Forms::Label());
			this->tb_mensagem = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// tb_login
			// 
			this->tb_login->Location = System::Drawing::Point(59, 12);
			this->tb_login->Name = L"tb_login";
			this->tb_login->Size = System::Drawing::Size(125, 20);
			this->tb_login->TabIndex = 4;
			this->tb_login->Text = L"admin";
			// 
			// lb_login
			// 
			this->lb_login->AutoSize = true;
			this->lb_login->Location = System::Drawing::Point(15, 15);
			this->lb_login->Name = L"lb_login";
			this->lb_login->Size = System::Drawing::Size(33, 13);
			this->lb_login->TabIndex = 5;
			this->lb_login->Text = L"Login";
			// 
			// lb_senha
			// 
			this->lb_senha->AutoSize = true;
			this->lb_senha->Location = System::Drawing::Point(11, 41);
			this->lb_senha->Name = L"lb_senha";
			this->lb_senha->Size = System::Drawing::Size(37, 17);
			this->lb_senha->TabIndex = 6;
			this->lb_senha->Text = L"Senha";
			this->lb_senha->UseCompatibleTextRendering = true;
			// 
			// tb_senha
			// 
			this->tb_senha->Location = System::Drawing::Point(59, 38);
			this->tb_senha->Name = L"tb_senha";
			this->tb_senha->PasswordChar = '*';
			this->tb_senha->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tb_senha->Size = System::Drawing::Size(125, 20);
			this->tb_senha->TabIndex = 7;
			this->tb_senha->Text = L"admin";
			this->tb_senha->UseSystemPasswordChar = true;
			// 
			// bt_validar
			// 
			this->bt_validar->Location = System::Drawing::Point(11, 64);
			this->bt_validar->Name = L"bt_validar";
			this->bt_validar->Size = System::Drawing::Size(75, 23);
			this->bt_validar->TabIndex = 8;
			this->bt_validar->Text = L"Validar";
			this->bt_validar->UseVisualStyleBackColor = true;
			this->bt_validar->Click += gcnew System::EventHandler(this, &MyForm::bt_validar_Click);
			// 
			// bt_limpar
			// 
			this->bt_limpar->Location = System::Drawing::Point(109, 64);
			this->bt_limpar->Name = L"bt_limpar";
			this->bt_limpar->Size = System::Drawing::Size(75, 23);
			this->bt_limpar->TabIndex = 9;
			this->bt_limpar->Text = L"Limpar";
			this->bt_limpar->UseVisualStyleBackColor = true;
			this->bt_limpar->Click += gcnew System::EventHandler(this, &MyForm::bt_limpar_Click);
			// 
			// lb_mensagem
			// 
			this->lb_mensagem->AutoSize = true;
			this->lb_mensagem->Location = System::Drawing::Point(56, 100);
			this->lb_mensagem->Name = L"lb_mensagem";
			this->lb_mensagem->Size = System::Drawing::Size(98, 13);
			this->lb_mensagem->TabIndex = 10;
			this->lb_mensagem->Text = L"Mensagens de Log";
			// 
			// tb_mensagem
			// 
			this->tb_mensagem->Location = System::Drawing::Point(11, 116);
			this->tb_mensagem->Multiline = true;
			this->tb_mensagem->Name = L"tb_mensagem";
			this->tb_mensagem->Size = System::Drawing::Size(173, 38);
			this->tb_mensagem->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(199, 164);
			this->Controls->Add(this->tb_mensagem);
			this->Controls->Add(this->lb_mensagem);
			this->Controls->Add(this->bt_limpar);
			this->Controls->Add(this->bt_validar);
			this->Controls->Add(this->tb_senha);
			this->Controls->Add(this->lb_senha);
			this->Controls->Add(this->lb_login);
			this->Controls->Add(this->tb_login);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void bt_limpar_Click(System::Object^  sender, System::EventArgs^  e) {
	this->tb_login->Text = L"";
	this->tb_senha->Text = L"";
	this->tb_mensagem->Text = L"";
	tb_login->BackColor = System::Drawing::Color::White;
	tb_senha->BackColor = System::Drawing::Color::White;

}

private: System::Void bt_validar_Click(System::Object^  sender, System::EventArgs^  e) {
		// Se a Validacao falhar, entao o metodo nao continua
		try	{validateEmptyInput(); } catch (std::exception e) { return; } 
		try
		{
			std::string login = msclr::interop::marshal_as<std::string>(this->Login);
			std::string senha = msclr::interop::marshal_as<std::string>(this->Senha);

			UsuarioDAO *userDAO = new UsuarioDAO();
			Usuario *User = userDAO->getUsuario(login, senha);
			if (User == nullptr) {
				MessageBox::Show("Usuario ou senha incorretos");
				return;
			}

			std::string Mensagem = "Usuário: " + (User->getUsername()) + " logado com sucesso\n  Permissoes:\n";
			for (std::string perm : User->getPermissoes())
			{
				Mensagem += "   - " + perm + "\n";
			}
				MessageBox::Show(msclr::interop::marshal_as<String^>(Mensagem));

				MenuPrincipal^ tu = gcnew MenuPrincipal(User);
				this->Hide();
				tu->Show();
		}
		catch (std::exception e) { MessageBox::Show(msclr::interop::marshal_as<String^>(e.what())); }
		//catch (std::exception e) { MessageBox::Show("Usuário ou senha inválidos"); }
} /// bt_validar_click

		 inline void validateEmptyInput()
		 {
			 if ((this->Login == String::Empty) && (this->Senha == String::Empty)) {
				 this->tb_mensagem->AppendText("\r\nCampos de Login e senha vazios");
				 tb_login->BackColor = System::Drawing::Color::Yellow;
				 tb_senha->BackColor = System::Drawing::Color::Yellow;
				 MessageBox::Show("Preencha o login e senha!");
				 throw std::exception("Campos de Login e senha vazios");
			 }
			 else if (this->Login == String::Empty) {
				 this->tb_mensagem->AppendText("\r\nCampo de Login Vazio");
				 tb_senha->BackColor = System::Drawing::Color::Yellow;
				 throw std::exception("Campos de Login vazio");
			 }
			 else if (this->Senha == String::Empty) {
				 this->tb_mensagem->AppendText("\r\nCampo de Senha Vazio");
				 tb_senha->BackColor = System::Drawing::Color::Yellow;
				 throw std::exception("Campos de Senha vazio");
			 }
		 }
private: System::Void bt_janela2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bt_janela3_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void sairToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Janela4^ caixa = gcnew Janela4();
	caixa->ShowDialog();
}
private: System::Void bt_janela4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void exCaixaDeDialogoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	CaixaDeDialogo^ caixa = gcnew CaixaDeDialogo();
	caixa->usuario = L"";
	caixa->senha = L"";
	caixa->funcao = 0;

	if (caixa->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		this->tb_mensagem->AppendText("\r\n"+caixa->usuario);
		this->tb_mensagem->AppendText("\r\n" + caixa->senha);
	}

}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
};
}

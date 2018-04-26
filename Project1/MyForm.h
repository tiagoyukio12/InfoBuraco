#pragma once
#include <iostream>
#include "Janela4.h"
#include "CaixaDeDialogo.h"

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sairToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exCaixaDeDialogoToolStripMenuItem;


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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exCaixaDeDialogoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sairToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tb_login
			// 
			this->tb_login->Location = System::Drawing::Point(96, 53);
			this->tb_login->Name = L"tb_login";
			this->tb_login->Size = System::Drawing::Size(100, 20);
			this->tb_login->TabIndex = 4;
			// 
			// lb_login
			// 
			this->lb_login->AutoSize = true;
			this->lb_login->Location = System::Drawing::Point(45, 56);
			this->lb_login->Name = L"lb_login";
			this->lb_login->Size = System::Drawing::Size(33, 13);
			this->lb_login->TabIndex = 5;
			this->lb_login->Text = L"Login";
			// 
			// lb_senha
			// 
			this->lb_senha->AutoSize = true;
			this->lb_senha->Location = System::Drawing::Point(42, 96);
			this->lb_senha->Name = L"lb_senha";
			this->lb_senha->Size = System::Drawing::Size(37, 17);
			this->lb_senha->TabIndex = 6;
			this->lb_senha->Text = L"Senha";
			this->lb_senha->UseCompatibleTextRendering = true;
			// 
			// tb_senha
			// 
			this->tb_senha->Location = System::Drawing::Point(96, 96);
			this->tb_senha->Name = L"tb_senha";
			this->tb_senha->PasswordChar = '*';
			this->tb_senha->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tb_senha->Size = System::Drawing::Size(100, 20);
			this->tb_senha->TabIndex = 7;
			this->tb_senha->UseSystemPasswordChar = true;
			// 
			// bt_validar
			// 
			this->bt_validar->Location = System::Drawing::Point(48, 146);
			this->bt_validar->Name = L"bt_validar";
			this->bt_validar->Size = System::Drawing::Size(75, 23);
			this->bt_validar->TabIndex = 8;
			this->bt_validar->Text = L"Validar";
			this->bt_validar->UseVisualStyleBackColor = true;
			this->bt_validar->Click += gcnew System::EventHandler(this, &MyForm::bt_validar_Click);
			// 
			// bt_limpar
			// 
			this->bt_limpar->Location = System::Drawing::Point(146, 146);
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
			this->lb_mensagem->Location = System::Drawing::Point(93, 182);
			this->lb_mensagem->Name = L"lb_mensagem";
			this->lb_mensagem->Size = System::Drawing::Size(98, 13);
			this->lb_mensagem->TabIndex = 10;
			this->lb_mensagem->Text = L"Mensagens de Log";
			// 
			// tb_mensagem
			// 
			this->tb_mensagem->Location = System::Drawing::Point(48, 198);
			this->tb_mensagem->Multiline = true;
			this->tb_mensagem->Name = L"tb_mensagem";
			this->tb_mensagem->Size = System::Drawing::Size(202, 38);
			this->tb_mensagem->TabIndex = 11;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(317, 24);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->aboutToolStripMenuItem,
					this->exCaixaDeDialogoToolStripMenuItem, this->sairToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// exCaixaDeDialogoToolStripMenuItem
			// 
			this->exCaixaDeDialogoToolStripMenuItem->Name = L"exCaixaDeDialogoToolStripMenuItem";
			this->exCaixaDeDialogoToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->exCaixaDeDialogoToolStripMenuItem->Text = L"Ex. Caixa de Dialogo";
			this->exCaixaDeDialogoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exCaixaDeDialogoToolStripMenuItem_Click);
			// 
			// sairToolStripMenuItem
			// 
			this->sairToolStripMenuItem->Name = L"sairToolStripMenuItem";
			this->sairToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->sairToolStripMenuItem->Text = L"Sair";
			this->sairToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::sairToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(317, 263);
			this->Controls->Add(this->tb_mensagem);
			this->Controls->Add(this->lb_mensagem);
			this->Controls->Add(this->bt_limpar);
			this->Controls->Add(this->bt_validar);
			this->Controls->Add(this->tb_senha);
			this->Controls->Add(this->lb_senha);
			this->Controls->Add(this->lb_login);
			this->Controls->Add(this->tb_login);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Aplicação CLR usando C++";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
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
	if ((this->tb_login->Text == String::Empty) && (this -> tb_senha->Text == String::Empty)) {
		this->tb_mensagem->AppendText("\r\nCampos de Login e senha vazios");
		tb_login->BackColor = System::Drawing::Color::Yellow;
		tb_senha->BackColor = System::Drawing::Color::Yellow;
		MessageBox::Show("Preencha o login e senha!");
	}
	else if (this->tb_login->Text == String::Empty) {
		this->tb_mensagem->AppendText("\r\nCampo de Login Vazio");
		tb_senha->BackColor = System::Drawing::Color::Yellow;
	}
	else if (this->tb_senha->Text == String::Empty) {
		this->tb_mensagem->AppendText("\r\nCampo de Senha Vazio");
		tb_senha->BackColor = System::Drawing::Color::Yellow;
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
	caixa->Nome = L"";
	caixa->Telefone = L"";
	caixa->Escolaridade = 0;

	if (caixa->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		this->tb_mensagem->AppendText("\r\n"+caixa->Nome);
		this->tb_mensagem->AppendText("\r\n" + caixa->Telefone);
	}

}
};
}

#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CaixaDeDialogo
	/// </summary>
	public ref class CaixaDeDialogo : public System::Windows::Forms::Form
	{
	public:
		CaixaDeDialogo(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		property String^ usuario {
			String^ get() {
				return tb_usuario->Text;
			}
			void set(String^ usuario) {
				tb_usuario->Text = usuario;
			}
		}
		property String^ senha {
			String^ get() {
				return tb_senha->Text;
			}
			void set(String^ senha) {
				tb_senha->Text = senha;
			}
		}
		property int funcao {
			int get() {
				return cb_funcao->SelectedIndex;
			}
			void set(int funcao) {
				cb_funcao->SelectedIndex = funcao;
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CaixaDeDialogo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lb_titulo;
	private: System::Windows::Forms::Label^  lb_usuario;
	private: System::Windows::Forms::Label^  lb_senha;
	private: System::Windows::Forms::Label^  lb_funcao;
	private: System::Windows::Forms::TextBox^  tb_usuario;
	private: System::Windows::Forms::TextBox^  tb_senha;
	private: System::Windows::Forms::ComboBox^  cb_funcao;


	private: System::Windows::Forms::Button^  bt_ok;
	private: System::Windows::Forms::Button^  bt_cancelar;

	protected:

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
			this->lb_titulo = (gcnew System::Windows::Forms::Label());
			this->lb_usuario = (gcnew System::Windows::Forms::Label());
			this->lb_senha = (gcnew System::Windows::Forms::Label());
			this->lb_funcao = (gcnew System::Windows::Forms::Label());
			this->tb_usuario = (gcnew System::Windows::Forms::TextBox());
			this->tb_senha = (gcnew System::Windows::Forms::TextBox());
			this->cb_funcao = (gcnew System::Windows::Forms::ComboBox());
			this->bt_ok = (gcnew System::Windows::Forms::Button());
			this->bt_cancelar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lb_titulo
			// 
			this->lb_titulo->AutoSize = true;
			this->lb_titulo->Location = System::Drawing::Point(96, 26);
			this->lb_titulo->Name = L"lb_titulo";
			this->lb_titulo->Size = System::Drawing::Size(46, 13);
			this->lb_titulo->TabIndex = 0;
			this->lb_titulo->Text = L"Registro";
			this->lb_titulo->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lb_titulo->Click += gcnew System::EventHandler(this, &CaixaDeDialogo::lb_titulo_Click);
			// 
			// lb_usuario
			// 
			this->lb_usuario->AutoSize = true;
			this->lb_usuario->Location = System::Drawing::Point(44, 65);
			this->lb_usuario->Name = L"lb_usuario";
			this->lb_usuario->Size = System::Drawing::Size(46, 13);
			this->lb_usuario->TabIndex = 1;
			this->lb_usuario->Text = L"Usuario:";
			this->lb_usuario->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lb_senha
			// 
			this->lb_senha->AutoSize = true;
			this->lb_senha->Location = System::Drawing::Point(30, 111);
			this->lb_senha->Name = L"lb_senha";
			this->lb_senha->Size = System::Drawing::Size(41, 13);
			this->lb_senha->TabIndex = 2;
			this->lb_senha->Text = L"Senha:";
			this->lb_senha->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lb_funcao
			// 
			this->lb_funcao->AutoSize = true;
			this->lb_funcao->Location = System::Drawing::Point(11, 152);
			this->lb_funcao->Name = L"lb_funcao";
			this->lb_funcao->Size = System::Drawing::Size(46, 13);
			this->lb_funcao->TabIndex = 3;
			this->lb_funcao->Text = L"Função:";
			this->lb_funcao->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// tb_usuario
			// 
			this->tb_usuario->Location = System::Drawing::Point(99, 65);
			this->tb_usuario->Name = L"tb_usuario";
			this->tb_usuario->Size = System::Drawing::Size(100, 20);
			this->tb_usuario->TabIndex = 4;
			// 
			// tb_senha
			// 
			this->tb_senha->Location = System::Drawing::Point(99, 111);
			this->tb_senha->Name = L"tb_senha";
			this->tb_senha->Size = System::Drawing::Size(100, 20);
			this->tb_senha->TabIndex = 5;
			// 
			// cb_funcao
			// 
			this->cb_funcao->FormattingEnabled = true;
			this->cb_funcao->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Assessor de Comunicação", L"Gestor Regional",
					L"Despachador", L"Departamentor Financeiro", L"Gestor do Sistema"
			});
			this->cb_funcao->Location = System::Drawing::Point(99, 152);
			this->cb_funcao->Name = L"cb_funcao";
			this->cb_funcao->Size = System::Drawing::Size(100, 21);
			this->cb_funcao->TabIndex = 6;
			// 
			// bt_ok
			// 
			this->bt_ok->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->bt_ok->Location = System::Drawing::Point(47, 209);
			this->bt_ok->Name = L"bt_ok";
			this->bt_ok->Size = System::Drawing::Size(75, 23);
			this->bt_ok->TabIndex = 7;
			this->bt_ok->Text = L"Ok";
			this->bt_ok->UseVisualStyleBackColor = true;
			// 
			// bt_cancelar
			// 
			this->bt_cancelar->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->bt_cancelar->Location = System::Drawing::Point(140, 209);
			this->bt_cancelar->Name = L"bt_cancelar";
			this->bt_cancelar->Size = System::Drawing::Size(75, 23);
			this->bt_cancelar->TabIndex = 8;
			this->bt_cancelar->Text = L"Cancelar";
			this->bt_cancelar->UseVisualStyleBackColor = true;
			// 
			// CaixaDeDialogo
			// 
			this->AcceptButton = this->bt_ok;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->bt_cancelar;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->bt_cancelar);
			this->Controls->Add(this->bt_ok);
			this->Controls->Add(this->cb_funcao);
			this->Controls->Add(this->tb_senha);
			this->Controls->Add(this->tb_usuario);
			this->Controls->Add(this->lb_funcao);
			this->Controls->Add(this->lb_senha);
			this->Controls->Add(this->lb_usuario);
			this->Controls->Add(this->lb_titulo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"CaixaDeDialogo";
			this->Text = L"Dados Pessoais";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void lb_titulo_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

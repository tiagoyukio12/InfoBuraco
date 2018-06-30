#pragma once
#include <memory>
#include "dao/Usuario.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para despachante
	/// </summary>
	public ref class despachante : public System::Windows::Forms::Form
	{
	private:
		Usuario * myUser = nullptr;
	public:
		despachante(Usuario *User) : myUser(User)
		{
			if (!myUser->temPermissao("despachante")) { MessageBox::Show("Você não tem permissão para isso."); delete this; }
			else {
				InitializeComponent();
				this->ShowDialog();
			}
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~despachante()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;


	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ordens de Serviço";
			this->label1->Click += gcnew System::EventHandler(this, &despachante::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(10, 236);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 25);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Compor Saída";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(275, 236);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 25);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Adicionar O.S.";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(275, 267);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 25);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Sair";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &despachante::bSair_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5
			});
			this->listView1->Location = System::Drawing::Point(10, 42);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(358, 188);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &despachante::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"OS";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Data Início";
			this->columnHeader2->Width = 74;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Custo Estimado";
			this->columnHeader3->Width = 88;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Prioridade";
			this->columnHeader4->Width = 70;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"ID Buraco";
			// 
			// despachante
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(380, 304);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"despachante";
			this->Text = L"Dashboard Despachante";
			this->Load += gcnew System::EventHandler(this, &despachante::despachante_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void bSair_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void despachante_Load(System::Object^  sender, System::EventArgs^  e) {
		using std::string;
		sql::PreparedStatement *Query = myUser->prepareQuery("SELECT id_OS,data_inicio,estimativa_custo,prioridade,id_buraco from OS", "regional");
		sql::ResultSet* resultSet = Query->executeQuery();

		System::Windows::Forms::ListViewItem^ itemNovo;

		while (resultSet->next()) {
			itemNovo = this->listView1->Items->Add(System::Convert::ToString(resultSet->getInt("id_OS")));
			itemNovo->SubItems->Add(gcnew String(resultSet->getString("data_inicio").c_str()));
			itemNovo->SubItems->Add(System::Convert::ToString(static_cast<double>(resultSet->getDouble("estimativa_custo")))); // Custo Estimado
			itemNovo->SubItems->Add(System::Convert::ToString(resultSet->getInt("prioridade")));
			itemNovo->SubItems->Add(System::Convert::ToString(resultSet->getInt("id_buraco")));
		}
	}
	};
}

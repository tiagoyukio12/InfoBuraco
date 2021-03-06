#pragma once
#include "GerarRelatorio.h"
#include <memory>
#include "dao/Usuario.h"
#include <msclr\marshal_cppstd.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DashboardRegional
	/// </summary>
	public ref class DashboardRegional : public System::Windows::Forms::Form
	{
	private:
		Usuario *myUser = nullptr;
	public:
		DashboardRegional(Usuario *User) : myUser(User)
		{
			if (!myUser->temPermissao("regional")) { MessageBox::Show("Voc� n�o tem permiss�o para isso."); delete this; }
			else { 
			InitializeComponent();
			this->ShowDialog();
			}
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DashboardRegional()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  ID;

	private: System::Windows::Forms::ColumnHeader^  Data;
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::ColumnHeader^  Custo;







	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->ID = (gcnew System::Windows::Forms::ColumnHeader());
			this->Data = (gcnew System::Windows::Forms::ColumnHeader());
			this->Custo = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(345, 175);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Alterar Prioridade";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(387, 474);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Sair";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DashboardRegional::bSair_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(351, 215);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(92, 21);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Gerar Relat�rio";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &DashboardRegional::bGerRel_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->ID, this->Data, this->Custo,
					this->columnHeader6, this->columnHeader7
			});
			this->listView1->Location = System::Drawing::Point(6, 19);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(437, 150);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &DashboardRegional::listView1_SelectedIndexChanged);
			// 
			// ID
			// 
			this->ID->Text = L"OS";
			this->ID->Width = 27;
			// 
			// Data
			// 
			this->Data->Text = L"Data Inicio";
			this->Data->Width = 70;
			// 
			// Custo
			// 
			this->Custo->Text = L"Custo Estimado";
			this->Custo->Width = 86;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Prioridade";
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"ID Buraco";
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5
			});
			this->listView2->Location = System::Drawing::Point(6, 19);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(437, 190);
			this->listView2->TabIndex = 6;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			this->listView2->SelectedIndexChanged += gcnew System::EventHandler(this, &DashboardRegional::listView2_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"ID";
			this->columnHeader1->Width = 36;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Localiza��o";
			this->columnHeader2->Width = 78;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Tamanho";
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Posi��o";
			this->columnHeader4->Width = 107;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Regi�o";
			this->columnHeader5->Width = 114;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->listView1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(450, 206);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ordens de Servi�o";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &DashboardRegional::groupBox1_Enter);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(262, 175);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(77, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Detalhes";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->listView2);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Location = System::Drawing::Point(12, 224);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(450, 244);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Buracos";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(272, 215);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(74, 21);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Detalhes";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &DashboardRegional::button6_Click);
			// 
			// DashboardRegional
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(471, 507);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Name = L"DashboardRegional";
			this->Text = L"Dashboard Regional";
			this->Load += gcnew System::EventHandler(this, &DashboardRegional::DashboardRegional_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void bGerRel_Click(System::Object^  sender, System::EventArgs^  e) {
		GerarRelatorio ^ form = gcnew GerarRelatorio(myUser);
		form->ShowDialog();
	}
	private: System::Void bSair_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void listView2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void DashboardRegional_Load(System::Object^  sender, System::EventArgs^  e) {
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

		// TODO: Fix character encoding
		Query = myUser->prepareQuery("SELECT id_buraco,endereco,tamanho,pos_relativa,regiao from buracos", "regional");
		resultSet = Query->executeQuery();

		while (resultSet->next()) {
			itemNovo = this->listView2->Items->Add(System::Convert::ToString(resultSet->getInt("id_buraco")));
			itemNovo->SubItems->Add(gcnew String(resultSet->getString("endereco").c_str()));
			itemNovo->SubItems->Add(System::Convert::ToString(resultSet->getInt("tamanho")));
			itemNovo->SubItems->Add(gcnew String(resultSet->getString("pos_relativa").c_str()));
			itemNovo->SubItems->Add(gcnew String(resultSet->getString("regiao").c_str()));
		}
	}
};
}

#pragma once
#include <list>
#include <msclr\marshal.h> 
#include "PopupRelatorio.h"
#include "dados/OrdemDeServico.h"
#include "dao/Usuario.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GerarRelatorio
	/// </summary>
	public ref class GerarRelatorio : public System::Windows::Forms::Form
	{
	private:
		Usuario * myUser = nullptr;
	public:
		GerarRelatorio(Usuario *User) : myUser(User)
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
		~GerarRelatorio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;

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
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(389, 338);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Sair";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GerarRelatorio::bSair_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 271);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(146, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Relatório Físico-Financeiro";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GerarRelatorio::bRelFisFin_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(369, 271);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(95, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Relatório Físico";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GerarRelatorio::bRelFis_Click);
			// 
			// listView1
			// 
			this->listView1->CheckBoxes = true;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3
			});
			this->listView1->Location = System::Drawing::Point(12, 12);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(452, 253);
			this->listView1->TabIndex = 3;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &GerarRelatorio::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"No. OS";
			this->columnHeader1->Width = 49;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Data de Finalização";
			this->columnHeader2->Width = 112;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Custo";
			// 
			// GerarRelatorio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(476, 373);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"GerarRelatorio";
			this->Text = L"Gerar Relatório";
			this->Load += gcnew System::EventHandler(this, &GerarRelatorio::GerarRelatorio_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bSair_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void bRelFis_Click(System::Object^  sender, System::EventArgs^  e) {
		std::list<OrdemDeServico *> *listaOS = new std::list<OrdemDeServico *>;

		ListView::CheckedListViewItemCollection^ checkedItems = listView1->CheckedItems;
		System::Collections::IEnumerator^ myEnum = checkedItems->GetEnumerator();

		while (myEnum->MoveNext()) {
			using std::string;
			ListViewItem^ item = safe_cast<ListViewItem^>(myEnum->Current);

			std::string queryText = ((std::string) "SELECT * from OS WHERE id_OS = ") + (*(const char*)(Runtime::InteropServices::Marshal::StringToHGlobalAnsi(item->Text)).ToPointer());
			sql::PreparedStatement *Query = myUser->prepareQuery(queryText, "regional");
			sql::ResultSet* resultSet = Query->executeQuery();

			while (resultSet->next()) {
				int id = resultSet->getInt("id_OS");
				std::string data = resultSet->getString("data_inicio").c_str();
				Date *dataInicio = new Date(data);
				Date *dataFim = new Date(resultSet->getString("data_fim").c_str());
				float estimativaHoras = 0;
				float estimativaCusto = 0;
				bool finalizado = true;
				Buraco *buraco = new Buraco(0, dataInicio, "", 1, "", "");
				int prioridade = 0;
				float custoTotal = (float)resultSet->getDouble("custoTotal");

				OrdemDeServico *OS = new OrdemDeServico(id, dataInicio, dataFim, estimativaHoras, estimativaCusto, finalizado, buraco, prioridade, custoTotal);
				listaOS->push_back(OS);
			}
		}

		PopupRelatorio ^ form = gcnew PopupRelatorio(1, listaOS);
		form->ShowDialog();
	}
	private: System::Void bRelFisFin_Click(System::Object^  sender, System::EventArgs^  e) {
		std::list<OrdemDeServico *> *listaOS = new std::list<OrdemDeServico *>;

		ListView::CheckedListViewItemCollection^ checkedItems = listView1->CheckedItems;
		System::Collections::IEnumerator^ myEnum = checkedItems->GetEnumerator();

		while (myEnum->MoveNext()) {
			using std::string;
			ListViewItem^ item = safe_cast<ListViewItem^>(myEnum->Current);

			std::string queryText = ((std::string) "SELECT * from OS WHERE id_OS = ") + (*(const char*)(Runtime::InteropServices::Marshal::StringToHGlobalAnsi(item->Text)).ToPointer());
			sql::PreparedStatement *Query = myUser->prepareQuery(queryText, "regional");
			sql::ResultSet* resultSet = Query->executeQuery();

			while (resultSet->next()) {
				int id = resultSet->getInt("id_OS");
				std::string data = resultSet->getString("data_inicio").c_str();
				Date *dataInicio = new Date(data);
				Date *dataFim = new Date(resultSet->getString("data_fim").c_str());
				float estimativaHoras = 0;
				float estimativaCusto = 0;
				bool finalizado = true;
				Buraco *buraco = new Buraco(0, dataInicio, "", 1, "", "");
				int prioridade = 0;
				float custoTotal = (float)resultSet->getDouble("custoTotal");

				OrdemDeServico *OS = new OrdemDeServico(id, dataInicio, dataFim, estimativaHoras, estimativaCusto, finalizado, buraco, prioridade, custoTotal);
				listaOS->push_back(OS);
			}
		}

		PopupRelatorio ^ form = gcnew PopupRelatorio(0, listaOS);
		form->ShowDialog();
	}
	private: System::Void GerarRelatorio_Load(System::Object^  sender, System::EventArgs^  e) {
		using std::string;
		sql::PreparedStatement *Query = myUser->prepareQuery("SELECT id_OS,data_fim,custoTotal from OS WHERE data_fim is not null", "regional");
		sql::ResultSet* resultSet = Query->executeQuery();

		System::Windows::Forms::ListViewItem^ itemNovo;

		while (resultSet->next()) {
			itemNovo = this->listView1->Items->Add(System::Convert::ToString(resultSet->getInt("id_OS")));
			itemNovo->SubItems->Add(gcnew String(resultSet->getString("data_fim").c_str()));
			itemNovo->SubItems->Add(System::Convert::ToString(static_cast<double>(resultSet->getDouble("custoTotal"))));
		}
	}
	};
}

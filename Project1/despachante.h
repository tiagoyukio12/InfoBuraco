#pragma once

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
	public:
		despachante(void)
		{
			InitializeComponent();
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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Operações de Serviço (O.S.)";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 174);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 25);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Compor Saída";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(167, 174);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 25);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Adicionar O.S.";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(167, 224);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 25);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Sair";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &despachante::bSair_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->columnHeader2 });
			this->listView1->Location = System::Drawing::Point(10, 42);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(249, 115);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"OS";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Custo";
			// 
			// despachante
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"despachante";
			this->Text = L"despachante";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void bSair_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}

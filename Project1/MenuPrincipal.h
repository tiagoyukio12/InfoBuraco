#pragma once
#include "DashboardRegional.h"
#include "despachante.h"
#include "dao/Usuario.h"
#include <memory>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuPrincipal
	/// </summary>
	public ref class MenuPrincipal : public System::Windows::Forms::Form
	{
	private:
		Usuario *myUser;
	public:
		MenuPrincipal(Usuario *User) : myUser(User)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MenuPrincipal()
		{
			delete myUser;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button4;

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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Regional";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MenuPrincipal::bRegional_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 48);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(170, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Despachante";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MenuPrincipal::bDespachante_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(200, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(197, 322);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(182, 76);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Dashboard";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 311);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Sair";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MenuPrincipal::bSair_Click);
			// 
			// MenuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(409, 346);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"MenuPrincipal";
			this->Text = L"Menu Principal";
			this->Load += gcnew System::EventHandler(this, &MenuPrincipal::MenuPrincipal_Load);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MenuPrincipal_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void bRegional_Click(System::Object^  sender, System::EventArgs^  e) {
	DashboardRegional ^ form = gcnew DashboardRegional(myUser);
}
private: System::Void bDespachante_Click(System::Object^  sender, System::EventArgs^  e) {
	despachante ^ form = gcnew despachante(myUser);
}

private: System::Void bSair_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}

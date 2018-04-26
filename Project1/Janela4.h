#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Janela4
	/// </summary>
	public ref class Janela4 : public System::Windows::Forms::Form
	{
	public:
		Janela4(void)
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
		~Janela4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lb_about;
	private: System::Windows::Forms::Label^  lb_titulo;
	private: System::Windows::Forms::Button^  bt_ok;
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
			this->lb_about = (gcnew System::Windows::Forms::Label());
			this->lb_titulo = (gcnew System::Windows::Forms::Label());
			this->bt_ok = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lb_about
			// 
			this->lb_about->AutoSize = true;
			this->lb_about->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lb_about->Location = System::Drawing::Point(29, 70);
			this->lb_about->Name = L"lb_about";
			this->lb_about->Size = System::Drawing::Size(86, 15);
			this->lb_about->TabIndex = 0;
			this->lb_about->Text = L"Labprog @2018";
			// 
			// lb_titulo
			// 
			this->lb_titulo->AutoSize = true;
			this->lb_titulo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lb_titulo->Location = System::Drawing::Point(29, 42);
			this->lb_titulo->Name = L"lb_titulo";
			this->lb_titulo->Size = System::Drawing::Size(259, 15);
			this->lb_titulo->TabIndex = 1;
			this->lb_titulo->Text = L"Aplicação de formulário usando Windows CLR e C++";
			// 
			// bt_ok
			// 
			this->bt_ok->Location = System::Drawing::Point(213, 102);
			this->bt_ok->Name = L"bt_ok";
			this->bt_ok->Size = System::Drawing::Size(75, 23);
			this->bt_ok->TabIndex = 2;
			this->bt_ok->Text = L"Ok";
			this->bt_ok->UseVisualStyleBackColor = true;
			this->bt_ok->Click += gcnew System::EventHandler(this, &Janela4::bt_ok_Click);
			// 
			// Janela4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(311, 153);
			this->Controls->Add(this->bt_ok);
			this->Controls->Add(this->lb_titulo);
			this->Controls->Add(this->lb_about);
			this->Name = L"Janela4";
			this->Text = L"Janela4";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bt_ok_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	};
}

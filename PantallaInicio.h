#pragma once
#include "Equipo.h"
#include "Teoria.h"
#include "CompresorDescompresor.h"

namespace MatematicaComputacional {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class PantallaInicio : public System::Windows::Forms::Form
	{
	public:
		PantallaInicio(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PantallaInicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PantallaInicio::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AllowDrop = true;
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(498, 303);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 53);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &PantallaInicio::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(577, 380);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Salir";
			this->label1->Click += gcnew System::EventHandler(this, &PantallaInicio::label1_Click);
			this->label1->MouseLeave += gcnew System::EventHandler(this, &PantallaInicio::label1_MouseLeave);
			this->label1->MouseHover += gcnew System::EventHandler(this, &PantallaInicio::label1_MouseHover);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(471, 380);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Equipo";
			this->label2->Click += gcnew System::EventHandler(this, &PantallaInicio::label2_Click);
			this->label2->MouseLeave += gcnew System::EventHandler(this, &PantallaInicio::label2_MouseLeave);
			this->label2->MouseHover += gcnew System::EventHandler(this, &PantallaInicio::label2_MouseHover);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(371, 380);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Teoría";
			this->label3->Click += gcnew System::EventHandler(this, &PantallaInicio::label3_Click);
			this->label3->MouseLeave += gcnew System::EventHandler(this, &PantallaInicio::label3_MouseLeave);
			this->label3->MouseHover += gcnew System::EventHandler(this, &PantallaInicio::label3_MouseHover);
			// 
			// PantallaInicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(714, 511);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"PantallaInicio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Compresor y Descompresor de Datos";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		label1->ForeColor = System::Drawing::Color::LawnGreen;
	}
private: System::Void label2_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		label2->ForeColor = System::Drawing::Color::LawnGreen;
	}
private: System::Void label3_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		label3->ForeColor = System::Drawing::Color::LawnGreen;
	}
private: System::Void label1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		label1->ForeColor = System::Drawing::Color::White;
	}
private: System::Void label2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		label2->ForeColor = System::Drawing::Color::White;
	}
private: System::Void label3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		label3->ForeColor = System::Drawing::Color::White;
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	Close(); 
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	Equipo^ formEquipo = gcnew Equipo();
	this->Visible = false;
	formEquipo->ShowDialog();
	this->Visible = true;
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	Teoria^ formTeoria = gcnew Teoria();
	this->Visible = false;
	formTeoria->ShowDialog();
	this->Visible = true; 
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	CompresorDescompresor^ myform = gcnew CompresorDescompresor();
	this->Visible = false;
	myform->ShowDialog();
	this->Visible = true;
}
};
}

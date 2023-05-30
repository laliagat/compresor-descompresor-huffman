#pragma once

namespace MatematicaComputacional {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Teoria
	/// </summary>
	public ref class Teoria : public System::Windows::Forms::Form
	{
	public:
		Teoria(void)
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
		~Teoria()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Teoria::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Gray;
			this->label1->Location = System::Drawing::Point(617, 457);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Volver";
			this->label1->Click += gcnew System::EventHandler(this, &Teoria::label1_Click);
			this->label1->MouseLeave += gcnew System::EventHandler(this, &Teoria::label1_MouseLeave);
			this->label1->MouseHover += gcnew System::EventHandler(this, &Teoria::label1_MouseHover);
			// 
			// Teoria
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(714, 511);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Name = L"Teoria";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Compresor y Descompresor de Datos";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		label1->ForeColor = System::Drawing::Color::DarkRed;
	}
	private: System::Void label1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		label1->ForeColor = System::Drawing::Color::Gray;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	};
}

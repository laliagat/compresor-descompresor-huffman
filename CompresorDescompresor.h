#pragma once
#include "Controller.h" 
#include "Huffman.h" 
#include <iostream>
#include <fstream>
#include <sstream>

namespace MatematicaComputacional {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de CompresorDescompresor
	/// </summary>
	public ref class CompresorDescompresor : public System::Windows::Forms::Form
	{
	public:
		CompresorDescompresor(void)
		{
			InitializeComponent();
			program = new Controller(); 

			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~CompresorDescompresor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::GroupBox^ groupBox1;
		System::Windows::Forms::GroupBox^ groupBox2;
		System::Windows::Forms::RichTextBox^ richTextBox1;
		System::Windows::Forms::RichTextBox^ richTextBox2;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::Label^ label2;
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label3;

		   Controller* program;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CompresorDescompresor::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox1->Location = System::Drawing::Point(40, 104);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(449, 107);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Texto";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(14, 25);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(421, 61);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->richTextBox2);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::Color::White;
			this->groupBox2->Location = System::Drawing::Point(40, 226);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(185, 301);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Códigos Huffman";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(14, 257);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(156, 31);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Cargar Códigos";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &CompresorDescompresor::button4_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(12, 25);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(156, 226);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
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
			this->label1->Location = System::Drawing::Point(617, 490);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Volver";
			this->label1->Click += gcnew System::EventHandler(this, &CompresorDescompresor::label1_Click);
			this->label1->MouseLeave += gcnew System::EventHandler(this, &CompresorDescompresor::label1_MouseLeave);
			this->label1->MouseHover += gcnew System::EventHandler(this, &CompresorDescompresor::label1_MouseHover);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(512, 144);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(169, 29);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Comprimir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CompresorDescompresor::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(34, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(502, 31);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Compresor y Descompresor de Datos";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->richTextBox3);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->ForeColor = System::Drawing::Color::White;
			this->groupBox3->Location = System::Drawing::Point(259, 226);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(422, 92);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Texto Codificado";
			// 
			// richTextBox3
			// 
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox3->Location = System::Drawing::Point(6, 25);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(410, 61);
			this->richTextBox3->TabIndex = 7;
			this->richTextBox3->Text = L"";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::Transparent;
			this->groupBox4->Controls->Add(this->richTextBox4);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->ForeColor = System::Drawing::Color::White;
			this->groupBox4->Location = System::Drawing::Point(259, 334);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(422, 98);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Texto Decodificado";
			// 
			// richTextBox4
			// 
			this->richTextBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox4->Location = System::Drawing::Point(7, 26);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(409, 66);
			this->richTextBox4->TabIndex = 0;
			this->richTextBox4->Text = L"";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(512, 109);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(169, 29);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Cargar Archivo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CompresorDescompresor::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button3->Location = System::Drawing::Point(512, 180);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(169, 31);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Descomprimir";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &CompresorDescompresor::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(620, 453);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 24);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Borrar";
			this->label3->Click += gcnew System::EventHandler(this, &CompresorDescompresor::label3_Click);
			this->label3->MouseLeave += gcnew System::EventHandler(this, &CompresorDescompresor::label3_MouseLeave);
			this->label3->MouseHover += gcnew System::EventHandler(this, &CompresorDescompresor::label3_MouseHover);
			// 
			// CompresorDescompresor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(714, 552);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->DoubleBuffered = true;
			this->Name = L"CompresorDescompresor";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Compresor y Descompresor de Datos";
			this->Load += gcnew System::EventHandler(this, &CompresorDescompresor::CompresorDescompresor_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CompresorDescompresor_Load(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->ReadOnly = true;
		richTextBox2->ReadOnly = true;
		richTextBox3->ReadOnly = true;
		richTextBox4->ReadOnly = true;
		richTextBox1->Text = "Aquí se mostrará el texto del archivo";
		richTextBox2->Text = "Aquí se mostrarán los códigos de Huffman";
		richTextBox3->Text = "Aquí se mostrará el texto codificado";
		richTextBox4->Text = "Aquí se mostrará el texto decodificado";
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//COMPRIMIR

	program->encode(); 
	
	String^ codes = gcnew String(program->getCodes().c_str());
	String^ newCodes = richTextBox2->Text->Replace(richTextBox2->Text, codes);
	richTextBox2->Text = newCodes;

	String^ textEncoded = gcnew String(program->getTextEncoded().c_str());
	String^ newTextEncoded = richTextBox3->Text->Replace(richTextBox3->Text, textEncoded);
	richTextBox3->Text = newTextEncoded;

	String^ changeText = richTextBox4->Text->Replace(richTextBox4->Text, "Aquí se mostrará el texto decodificado");
	richTextBox4->Text = "Aquí se mostrará el texto decodificado";

	//Guardar los codigos y el texto codificado en documentos

	ofstream fileText("files/TextoCodificado.txt");
	if (fileText.is_open()) {
		string textToSave = program->getTextEncoded();
		fileText << textToSave;
	}
	fileText.close();
	
	ofstream fileCodes("files/CodigosHuffman.txt");
	if (fileCodes.is_open()) {
		string textToSave = program->getCodes();
		fileCodes << textToSave;
	}
	fileCodes.close();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void label1_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = System::Drawing::Color::LawnGreen; 
}
private: System::Void label1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = System::Drawing::Color::White;
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//CARGAR ARCHIVO 

	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
	openFileDialog1->Filter = "Archivos de texto (*.txt)|*.txt"; 

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ filePath = openFileDialog1->FileName;
		StreamReader^ reader = gcnew StreamReader(filePath);
		String^ fileContent = reader->ReadToEnd();
		reader->Close();

		String^ newText = richTextBox1->Text->Replace(richTextBox1->Text, fileContent);
		richTextBox1->Text = newText;

		//Convertir System::String^ a vector de char  →  luego el vector a std::string
		vector<char> content;
		const char* chars = reinterpret_cast<const char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fileContent).ToPointer());
		if (chars != nullptr) {
			content.assign(chars, chars + std::strlen(chars));
			System::Runtime::InteropServices::Marshal::FreeHGlobal(System::IntPtr(const_cast<char*>(chars)));
		}
		string covertedContent = string(content.begin(), content.end());

		//pasa el texto al programa
		program->setInput(covertedContent);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// DESCOMPRIMIR

	String^ changeText = richTextBox3->Text->Replace(richTextBox3->Text, "Aquí se mostrará el texto codificado");
	richTextBox3->Text = "Aquí se mostrará el texto codificado";

	String^ textDecoded = gcnew String(program->getTextDecoded().c_str());
	String^ newTextDecoded = richTextBox4->Text->Replace(richTextBox4->Text, textDecoded);
	richTextBox4->Text = newTextDecoded;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//CARGAR CODIGOS
	
	map<char, string> huffmanMap; 
	
	OpenFileDialog^ openFileDialog2 = gcnew OpenFileDialog();
	openFileDialog2->Filter = "Archivos de texto (*.txt)|*.txt";

	if (openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ filePath = openFileDialog2->FileName;
		StreamReader^ reader = gcnew StreamReader(filePath);
		String^ fileContent = reader->ReadToEnd();
		reader->Close();
		int strLenght = fileContent->Length;

		//Convertir System::String^ a vector de char  →  luego el vector a std::string
		vector<char> content;
		const char* chars = reinterpret_cast<const char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fileContent).ToPointer());
		if (chars != nullptr) {
			content.assign(chars, chars + std::strlen(chars));
			System::Runtime::InteropServices::Marshal::FreeHGlobal(System::IntPtr(const_cast<char*>(chars)));
		}
		string covertedContent = string(content.begin(), content.end());

		//separar el string
		istringstream iss(covertedContent);
		string line;
		string delimiter = " -> ";
		 
		while (getline(iss, line)) {
			size_t delimiterPos = line.find(delimiter);
			if (delimiterPos != string::npos) {
				string c = (line.substr(0, delimiterPos)); 
				string code = line.substr(delimiterPos + delimiter.length());
				pair<char, string> newpair(c[0], code); 
				huffmanMap.insert(newpair);   
			}
		}

		string map; 
		for (auto pair : huffmanMap) {
			map += pair.first;
			map += " -> ";
			map += pair.second;
			map += "\n";
		}

		program->setCodeMap(huffmanMap);
	}
	
	String^ codes = gcnew String(program->getCodes().c_str());
	String^ newCodes = richTextBox2->Text->Replace(richTextBox2->Text, codes);
	richTextBox2->Text = newCodes;
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ changeText1 = richTextBox1->Text->Replace(richTextBox1->Text, "Aquí se mostrará el texto del archivo");
	richTextBox1->Text = "Aquí se mostrará el texto del archivo";

	String^ changeText2 = richTextBox2->Text->Replace(richTextBox2->Text, "Aquí se mostrarán los códigos de Huffman");
	richTextBox2->Text = "Aquí se mostrarán los códigos de Huffman";

	String^ changeText3 = richTextBox3->Text->Replace(richTextBox3->Text, "Aquí se mostrará el texto codificado");
	richTextBox3->Text = "Aquí se mostrará el texto codificado";

	String^ changeText4 = richTextBox4->Text->Replace(richTextBox4->Text, "Aquí se mostrará el texto decodificado");
	richTextBox4->Text = "Aquí se mostrará el texto decodificado";

}
private: System::Void label3_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	label3->ForeColor = System::Drawing::Color::LawnGreen;
}
private: System::Void label3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label3->ForeColor = System::Drawing::Color::White;
}
};
}

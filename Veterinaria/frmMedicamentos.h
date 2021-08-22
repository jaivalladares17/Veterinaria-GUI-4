#pragma once
#include "frmMedicamentosEdit.h";
#include <fstream> // Libreria Para manejo de archivos
#include <sstream>
#include <vector>
namespace Veterinaria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmMedicamentos
	/// </summary>
	public ref class frmMedicamentos : public System::Windows::Forms::Form
	{
	public:
		frmMedicamentos(void)
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
		~frmMedicamentos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMedicamentos::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->Location = System::Drawing::Point(502, 317);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(206, 66);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Volver";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMedicamentos::button4_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->Location = System::Drawing::Point(288, 317);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(206, 66);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Agregar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMedicamentos::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 15);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 20);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Listado Medicamentos";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(21, 62);
			this->listBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(685, 244);
			this->listBox1->TabIndex = 6;
			// 
			// frmMedicamentos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(726, 402);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->Name = L"frmMedicamentos";
			this->Text = L"Medicamentos";
			this->Activated += gcnew System::EventHandler(this, &frmMedicamentos::OnActivated);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMedicamentos::~frmMedicamentos();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMedicamentosEdit^ frmMedicamentoEdit = gcnew frmMedicamentosEdit();
	frmMedicamentoEdit->Show();
}
private: System::Void OnActivated(System::Object^ sender, System::EventArgs^ e) {
	this->listBox1->Items->Clear();
	string ruta = "resources/archivos_dat/medicamentos.dat";
	string linea;
	ifstream data(ruta);
	if (data.fail())//Verificamos que si no existe el archivo no hacemos nada
		return;
	while (!data.eof()) {
		data >> linea;
		if (data.eof())// Compruebo si he leido la marca de final de fichero
			break;

		vector<string> lista;
		stringstream ss(linea);//Permite operar con string lo cual ocupamos al leer archivos
		string auxiliar = "";
		for (char c; ss >> c;) {
			auxiliar += c; //concatenamos a una variable cada caracter que leamos
			if (ss.peek() == ',') {// vereficamos si el siguiente caracter es una coma
				ss.ignore();//omitimos la coma
				lista.push_back(auxiliar); // almacenamos la cadena en un vector auxiliar
				auxiliar = ""; // limpiamos la variable auxliar para volver a empezar
			}
		}
		lista.push_back(auxiliar);//Agregamos el ultimo elemento fuera ya que no existe coma al final



		Medicamento* med = new Medicamento();
		med->setFechaFabricaion(lista[0]);
		med->setFechaVencimiento(lista[1]);
		med->setNombre(lista[2]);
		med->setPrecio(stod(lista[3]));
		med->setFarmaceutica(lista[4]);
		med->setPais(lista[5]);
		med->setAplicaDescuento(lista[6]);
		this->listBox1->Items->Add(gcnew String(med->generarCadena().c_str()));
	}
}
};
}

#pragma once
#include <fstream>;//Libreria Manejo Archivos
#include <msclr\marshal_cppstd.h>//Libreria para convertir String^ a String
#include "Medicamento.h";

namespace Veterinaria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmMedicamentosEdit
	/// </summary>
	public ref class frmMedicamentosEdit : public System::Windows::Forms::Form
	{
	public:
		frmMedicamentosEdit(void)
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
		~frmMedicamentosEdit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAceptar;
	protected:
	private: System::Windows::Forms::Button^ btnCancelar;
	private: System::Windows::Forms::DateTimePicker^ dtpFabricacion;
	private: System::Windows::Forms::TextBox^ txtPrecio;





	private: System::Windows::Forms::TextBox^ txtPais;

	private: System::Windows::Forms::TextBox^ txtFarmaceutica;

	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ dtpVencimiento;
	private: System::Windows::Forms::CheckBox^ checkBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMedicamentosEdit::typeid));
			this->btnAceptar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->dtpFabricacion = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtPrecio = (gcnew System::Windows::Forms::TextBox());
			this->txtPais = (gcnew System::Windows::Forms::TextBox());
			this->txtFarmaceutica = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dtpVencimiento = (gcnew System::Windows::Forms::DateTimePicker());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// btnAceptar
			// 
			this->btnAceptar->Location = System::Drawing::Point(231, 346);
			this->btnAceptar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnAceptar->Name = L"btnAceptar";
			this->btnAceptar->Size = System::Drawing::Size(112, 35);
			this->btnAceptar->TabIndex = 36;
			this->btnAceptar->Text = L"Aceptar";
			this->btnAceptar->UseVisualStyleBackColor = true;
			this->btnAceptar->Click += gcnew System::EventHandler(this, &frmMedicamentosEdit::btnAceptar_Click);
			// 
			// btnCancelar
			// 
			this->btnCancelar->Location = System::Drawing::Point(352, 346);
			this->btnCancelar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(112, 35);
			this->btnCancelar->TabIndex = 35;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &frmMedicamentosEdit::btnCancelar_Click);
			// 
			// dtpFabricacion
			// 
			this->dtpFabricacion->CustomFormat = L"dd-MM-yyyy";
			this->dtpFabricacion->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpFabricacion->Location = System::Drawing::Point(162, 223);
			this->dtpFabricacion->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dtpFabricacion->Name = L"dtpFabricacion";
			this->dtpFabricacion->Size = System::Drawing::Size(301, 26);
			this->dtpFabricacion->TabIndex = 34;
			this->dtpFabricacion->Value = System::DateTime(2021, 8, 2, 0, 0, 0, 0);
			// 
			// txtPrecio
			// 
			this->txtPrecio->Location = System::Drawing::Point(162, 143);
			this->txtPrecio->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtPrecio->Name = L"txtPrecio";
			this->txtPrecio->Size = System::Drawing::Size(301, 26);
			this->txtPrecio->TabIndex = 30;
			// 
			// txtPais
			// 
			this->txtPais->Location = System::Drawing::Point(162, 103);
			this->txtPais->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtPais->Name = L"txtPais";
			this->txtPais->Size = System::Drawing::Size(301, 26);
			this->txtPais->TabIndex = 29;
			// 
			// txtFarmaceutica
			// 
			this->txtFarmaceutica->Location = System::Drawing::Point(162, 62);
			this->txtFarmaceutica->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtFarmaceutica->Name = L"txtFarmaceutica";
			this->txtFarmaceutica->Size = System::Drawing::Size(301, 26);
			this->txtFarmaceutica->TabIndex = 28;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(162, 20);
			this->txtNombre->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(301, 26);
			this->txtNombre->TabIndex = 27;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 271);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(150, 20);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Fecha Vencimiento:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 229);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(144, 20);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Fecha Fabricacion:";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 188);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 20);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Aplica Descuento:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(93, 148);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 20);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Precio:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(108, 108);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 20);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Pais:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 66);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 20);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Farmaceutica:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(82, 25);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 20);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Nombre:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// dtpVencimiento
			// 
			this->dtpVencimiento->CustomFormat = L"dd-MM-yyyy";
			this->dtpVencimiento->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpVencimiento->Location = System::Drawing::Point(162, 263);
			this->dtpVencimiento->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dtpVencimiento->Name = L"dtpVencimiento";
			this->dtpVencimiento->Size = System::Drawing::Size(301, 26);
			this->dtpVencimiento->TabIndex = 37;
			this->dtpVencimiento->Value = System::DateTime(2021, 8, 2, 0, 0, 0, 0);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(164, 188);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(22, 21);
			this->checkBox1->TabIndex = 38;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// frmMedicamentosEdit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(501, 402);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->dtpVencimiento);
			this->Controls->Add(this->btnAceptar);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->dtpFabricacion);
			this->Controls->Add(this->txtPrecio);
			this->Controls->Add(this->txtPais);
			this->Controls->Add(this->txtFarmaceutica);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"frmMedicamentosEdit";
			this->Text = L"Editar Medicamentos";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMedicamentosEdit::~frmMedicamentosEdit();
	}
	private: System::Void btnAceptar_Click(System::Object^ sender, System::EventArgs^ e) {
		Medicamento* med = new Medicamento();
		med->setNombre(msclr::interop::marshal_as<std::string>(this->txtNombre->Text));
		med->setFarmaceutica(msclr::interop::marshal_as<std::string>(this->txtFarmaceutica->Text));
		med->setPais(msclr::interop::marshal_as<std::string>(this->txtPais->Text));
		med->setFechaFabricaion(msclr::interop::marshal_as<std::string>(this->dtpFabricacion->Text));
		med->setFechaVencimiento(msclr::interop::marshal_as<std::string>(this->dtpVencimiento->Text));
		med->setPrecio(std::stod(msclr::interop::marshal_as<std::string>(this->txtPrecio->Text)));
		med->setAplicaDescuento(this->checkBox1->Checked ? "SI" : "NO");
		std::ofstream archivo;
		archivo.open("resources/archivos_dat/medicamentos.dat", std::ios_base::app); //Concatenamos al archivo
		archivo << med->generarCadena() << endl;
		archivo.close();
		System::Windows::Forms::MessageBox::Show("Medicamento Guardado Correctamente");
		frmMedicamentosEdit::~frmMedicamentosEdit();
}
};
}

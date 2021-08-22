#pragma once
#include <fstream>;//Libreria Manejo Archivos
#include <msclr\marshal_cppstd.h>//Libreria para convertir String^ a String
#include "Animal.h";
#include "Paciente.h";
namespace Veterinaria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPacientesEdit
	/// </summary>
	public ref class frmPacientesEdit : public System::Windows::Forms::Form
	{
	public:
		frmPacientesEdit(void)
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
		~frmPacientesEdit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAceptar;
	protected:
	private: System::Windows::Forms::Button^ btnCancelar;
	private: System::Windows::Forms::TextBox^ txtEspecie;
	private: System::Windows::Forms::TextBox^ txtPeso;
	private: System::Windows::Forms::TextBox^ txtColor;
	private: System::Windows::Forms::TextBox^ txtSexo;
	private: System::Windows::Forms::TextBox^ txtRaza;
	private: System::Windows::Forms::TextBox^ txtAlergias;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtEdad;
	private: System::Windows::Forms::TextBox^ txtObservaciones;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPacientesEdit::typeid));
			this->btnAceptar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->txtEspecie = (gcnew System::Windows::Forms::TextBox());
			this->txtPeso = (gcnew System::Windows::Forms::TextBox());
			this->txtColor = (gcnew System::Windows::Forms::TextBox());
			this->txtSexo = (gcnew System::Windows::Forms::TextBox());
			this->txtRaza = (gcnew System::Windows::Forms::TextBox());
			this->txtAlergias = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtEdad = (gcnew System::Windows::Forms::TextBox());
			this->txtObservaciones = (gcnew System::Windows::Forms::TextBox());
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
			this->btnAceptar->Click += gcnew System::EventHandler(this, &frmPacientesEdit::btnAceptar_Click);
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
			this->btnCancelar->Click += gcnew System::EventHandler(this, &frmPacientesEdit::btnCancelar_Click);
			// 
			// txtEspecie
			// 
			this->txtEspecie->Location = System::Drawing::Point(162, 265);
			this->txtEspecie->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtEspecie->Name = L"txtEspecie";
			this->txtEspecie->Size = System::Drawing::Size(301, 26);
			this->txtEspecie->TabIndex = 33;
			// 
			// txtPeso
			// 
			this->txtPeso->Location = System::Drawing::Point(162, 223);
			this->txtPeso->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtPeso->Name = L"txtPeso";
			this->txtPeso->Size = System::Drawing::Size(301, 26);
			this->txtPeso->TabIndex = 32;
			// 
			// txtColor
			// 
			this->txtColor->Location = System::Drawing::Point(162, 183);
			this->txtColor->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtColor->Name = L"txtColor";
			this->txtColor->Size = System::Drawing::Size(301, 26);
			this->txtColor->TabIndex = 31;
			// 
			// txtSexo
			// 
			this->txtSexo->Location = System::Drawing::Point(162, 143);
			this->txtSexo->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtSexo->Name = L"txtSexo";
			this->txtSexo->Size = System::Drawing::Size(108, 26);
			this->txtSexo->TabIndex = 30;
			// 
			// txtRaza
			// 
			this->txtRaza->Location = System::Drawing::Point(162, 103);
			this->txtRaza->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtRaza->Name = L"txtRaza";
			this->txtRaza->Size = System::Drawing::Size(301, 26);
			this->txtRaza->TabIndex = 29;
			// 
			// txtAlergias
			// 
			this->txtAlergias->Location = System::Drawing::Point(162, 62);
			this->txtAlergias->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtAlergias->Name = L"txtAlergias";
			this->txtAlergias->Size = System::Drawing::Size(301, 26);
			this->txtAlergias->TabIndex = 28;
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
			this->label9->Location = System::Drawing::Point(32, 311);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(118, 20);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Observaciones:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(81, 269);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 20);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Especie:";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(102, 228);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 20);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Peso:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(100, 188);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 20);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Color:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(102, 148);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 20);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Sexo:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(100, 108);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 20);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Raza:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(82, 66);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 20);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Alergias:";
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
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(280, 148);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 20);
			this->label8->TabIndex = 37;
			this->label8->Text = L"Edad:";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtEdad
			// 
			this->txtEdad->Location = System::Drawing::Point(342, 143);
			this->txtEdad->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtEdad->Name = L"txtEdad";
			this->txtEdad->Size = System::Drawing::Size(121, 26);
			this->txtEdad->TabIndex = 38;
			// 
			// txtObservaciones
			// 
			this->txtObservaciones->Location = System::Drawing::Point(162, 306);
			this->txtObservaciones->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtObservaciones->Name = L"txtObservaciones";
			this->txtObservaciones->Size = System::Drawing::Size(301, 26);
			this->txtObservaciones->TabIndex = 39;
			// 
			// frmPacientesEdit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(501, 402);
			this->Controls->Add(this->txtObservaciones);
			this->Controls->Add(this->txtEdad);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btnAceptar);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->txtEspecie);
			this->Controls->Add(this->txtPeso);
			this->Controls->Add(this->txtColor);
			this->Controls->Add(this->txtSexo);
			this->Controls->Add(this->txtRaza);
			this->Controls->Add(this->txtAlergias);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"frmPacientesEdit";
			this->Text = L"Editar Paciente";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		frmPacientesEdit::~frmPacientesEdit();
	}
private: System::Void btnAceptar_Click(System::Object^ sender, System::EventArgs^ e) {
	Paciente* pa = new Paciente();
	pa->setNombre(msclr::interop::marshal_as<std::string>(this->txtNombre->Text));
	pa->setAlergias(msclr::interop::marshal_as<std::string>(this->txtAlergias->Text));
	pa->setEdad(std::stoi(msclr::interop::marshal_as<std::string>(this->txtEdad->Text)));
	pa->setEspecie(msclr::interop::marshal_as<std::string>(this->txtEspecie->Text));
	pa->setRaza(msclr::interop::marshal_as<std::string>(this->txtRaza->Text));
	pa->setColor(msclr::interop::marshal_as<std::string>(this->txtColor->Text));
	pa->setObservaciones(msclr::interop::marshal_as<std::string>(this->txtObservaciones->Text));
	pa->setPeso(std::stod(msclr::interop::marshal_as<std::string>(this->txtPeso->Text)));
	pa->generarId();
	std::ofstream archivo;
	archivo.open("resources/archivos_dat/pacientes.dat", std::ios_base::app); //Concatenamos al archivo
	archivo << pa->generarCadena() << endl;
	archivo.close();
	System::Windows::Forms::MessageBox::Show("Paciente Guardado Correctamente");
	frmPacientesEdit::~frmPacientesEdit();
}
};
}

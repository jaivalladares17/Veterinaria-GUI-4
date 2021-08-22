#pragma once
#include <fstream>;//Libreria Manejo Archivos
#include <msclr\marshal_cppstd.h>//Libreria para convertir String^ a String
#include "Persona.h";
#include "Cliente.h";
namespace Veterinaria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmClientesEdit
	/// </summary>
	public ref class frmClientesEdit : public System::Windows::Forms::Form
	{
	public:
		frmClientesEdit(void)
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
		~frmClientesEdit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtApellido;
	private: System::Windows::Forms::TextBox^ txtDireccion;
	private: System::Windows::Forms::TextBox^ txtTelefono;
	private: System::Windows::Forms::TextBox^ txtIdentidad;
	private: System::Windows::Forms::TextBox^ txtCiudad;

	private: System::Windows::Forms::TextBox^ txtCorreo;
	private: System::Windows::Forms::DateTimePicker^ dtpFecha;
	private: System::Windows::Forms::Button^ btnCancelar;
	private: System::Windows::Forms::Button^ btnAceptar;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmClientesEdit::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->txtDireccion = (gcnew System::Windows::Forms::TextBox());
			this->txtTelefono = (gcnew System::Windows::Forms::TextBox());
			this->txtIdentidad = (gcnew System::Windows::Forms::TextBox());
			this->txtCiudad = (gcnew System::Windows::Forms::TextBox());
			this->txtCorreo = (gcnew System::Windows::Forms::TextBox());
			this->dtpFecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnAceptar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(92, 23);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(92, 65);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Apellido:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(80, 106);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Direccion:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(84, 146);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Telefono:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(81, 186);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Identidad:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(98, 226);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Ciudad:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(100, 268);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Correo:";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(45, 309);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(116, 20);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Fecha Ingreso:";
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(171, 18);
			this->txtNombre->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(301, 26);
			this->txtNombre->TabIndex = 9;
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(171, 60);
			this->txtApellido->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(301, 26);
			this->txtApellido->TabIndex = 10;
			// 
			// txtDireccion
			// 
			this->txtDireccion->Location = System::Drawing::Point(171, 102);
			this->txtDireccion->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtDireccion->Name = L"txtDireccion";
			this->txtDireccion->Size = System::Drawing::Size(301, 26);
			this->txtDireccion->TabIndex = 11;
			// 
			// txtTelefono
			// 
			this->txtTelefono->Location = System::Drawing::Point(171, 142);
			this->txtTelefono->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtTelefono->Name = L"txtTelefono";
			this->txtTelefono->Size = System::Drawing::Size(301, 26);
			this->txtTelefono->TabIndex = 12;
			// 
			// txtIdentidad
			// 
			this->txtIdentidad->Location = System::Drawing::Point(171, 182);
			this->txtIdentidad->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtIdentidad->Name = L"txtIdentidad";
			this->txtIdentidad->Size = System::Drawing::Size(301, 26);
			this->txtIdentidad->TabIndex = 13;
			// 
			// txtCiudad
			// 
			this->txtCiudad->Location = System::Drawing::Point(171, 222);
			this->txtCiudad->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtCiudad->Name = L"txtCiudad";
			this->txtCiudad->Size = System::Drawing::Size(301, 26);
			this->txtCiudad->TabIndex = 14;
			// 
			// txtCorreo
			// 
			this->txtCorreo->Location = System::Drawing::Point(171, 263);
			this->txtCorreo->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtCorreo->Name = L"txtCorreo";
			this->txtCorreo->Size = System::Drawing::Size(301, 26);
			this->txtCorreo->TabIndex = 15;
			// 
			// dtpFecha
			// 
			this->dtpFecha->CustomFormat = L"dd-MM-yyyy";
			this->dtpFecha->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpFecha->Location = System::Drawing::Point(171, 305);
			this->dtpFecha->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dtpFecha->Name = L"dtpFecha";
			this->dtpFecha->Size = System::Drawing::Size(301, 26);
			this->dtpFecha->TabIndex = 16;
			this->dtpFecha->Value = System::DateTime(2021, 8, 2, 0, 0, 0, 0);
			// 
			// btnCancelar
			// 
			this->btnCancelar->Location = System::Drawing::Point(362, 345);
			this->btnCancelar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(112, 35);
			this->btnCancelar->TabIndex = 17;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &frmClientesEdit::btnCancelar_Click);
			// 
			// btnAceptar
			// 
			this->btnAceptar->Location = System::Drawing::Point(240, 345);
			this->btnAceptar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnAceptar->Name = L"btnAceptar";
			this->btnAceptar->Size = System::Drawing::Size(112, 35);
			this->btnAceptar->TabIndex = 18;
			this->btnAceptar->Text = L"Aceptar";
			this->btnAceptar->UseVisualStyleBackColor = true;
			this->btnAceptar->Click += gcnew System::EventHandler(this, &frmClientesEdit::btnAceptar_Click);
			// 
			// frmClientesEdit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(501, 402);
			this->Controls->Add(this->btnAceptar);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->dtpFecha);
			this->Controls->Add(this->txtCorreo);
			this->Controls->Add(this->txtCiudad);
			this->Controls->Add(this->txtIdentidad);
			this->Controls->Add(this->txtTelefono);
			this->Controls->Add(this->txtDireccion);
			this->Controls->Add(this->txtApellido);
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
			this->MaximizeBox = false;
			this->Name = L"frmClientesEdit";
			this->Text = L"Editar Cliente";
			this->Load += gcnew System::EventHandler(this, &frmClientesEdit::frmClientesEdit_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		frmClientesEdit::~frmClientesEdit();
	}
private: System::Void btnAceptar_Click(System::Object^ sender, System::EventArgs^ e) {
	Cliente* cli = new Cliente();
	cli->setNombre(msclr::interop::marshal_as<std::string>(this->txtNombre->Text));
	cli->setApellido(msclr::interop::marshal_as<std::string>(this->txtApellido->Text));
	cli->setDireccion(msclr::interop::marshal_as<std::string>(this->txtDireccion->Text));
	cli->setTelefono(msclr::interop::marshal_as<std::string>(this->txtTelefono->Text));
	cli->setIdentidad(msclr::interop::marshal_as<std::string>(this->txtIdentidad->Text));
	cli->setCiudad(msclr::interop::marshal_as<std::string>(this->txtCiudad->Text));
	cli->setCorreo(msclr::interop::marshal_as<std::string>(this->txtCorreo->Text));
	cli->setFecha(msclr::interop::marshal_as<std::string>(this->dtpFecha->Text));
	cli->generarCodigo();
	std::ofstream archivo;
	archivo.open("resources/archivos_dat/personas.dat", std::ios_base::app); //Concatenamos al archivo
	archivo << cli->generarCadena() << endl;
	archivo.close();
	System::Windows::Forms::MessageBox::Show("Cliente Guardado Correctamente");
	frmClientesEdit::~frmClientesEdit();
}
private: System::Void frmClientesEdit_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}

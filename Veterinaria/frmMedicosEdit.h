#pragma once
#include <fstream>;//Libreria Manejo Archivos
#include <msclr\marshal_cppstd.h>//Libreria para convertir String^ a String
#include "Persona.h";
#include "Medico.h";
namespace Veterinaria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmMedicosEdit
	/// </summary>
	public ref class frmMedicosEdit : public System::Windows::Forms::Form
	{
	public:
		frmMedicosEdit(void)
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
		~frmMedicosEdit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAceptar;
	protected:
	private: System::Windows::Forms::Button^ btnCancelar;
	private: System::Windows::Forms::DateTimePicker^ dtpFecha;
	private: System::Windows::Forms::TextBox^ txtCorreo;
	private: System::Windows::Forms::TextBox^ txtCiudad;

	private: System::Windows::Forms::TextBox^ txtIdentidad;
	private: System::Windows::Forms::TextBox^ txtTelefono;
	private: System::Windows::Forms::TextBox^ txtDireccion;
	private: System::Windows::Forms::TextBox^ txtApellido;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMedicosEdit::typeid));
			this->btnAceptar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->dtpFecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtCorreo = (gcnew System::Windows::Forms::TextBox());
			this->txtCiudad = (gcnew System::Windows::Forms::TextBox());
			this->txtIdentidad = (gcnew System::Windows::Forms::TextBox());
			this->txtTelefono = (gcnew System::Windows::Forms::TextBox());
			this->txtDireccion = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->btnAceptar->Click += gcnew System::EventHandler(this, &frmMedicosEdit::btnAceptar_Click);
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
			this->btnCancelar->Click += gcnew System::EventHandler(this, &frmMedicosEdit::btnCancelar_Click);
			// 
			// dtpFecha
			// 
			this->dtpFecha->CustomFormat = L"dd-MM-yyyy";
			this->dtpFecha->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpFecha->Location = System::Drawing::Point(162, 306);
			this->dtpFecha->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dtpFecha->Name = L"dtpFecha";
			this->dtpFecha->Size = System::Drawing::Size(301, 26);
			this->dtpFecha->TabIndex = 34;
			this->dtpFecha->Value = System::DateTime(2021, 8, 2, 0, 0, 0, 0);
			// 
			// txtCorreo
			// 
			this->txtCorreo->Location = System::Drawing::Point(162, 265);
			this->txtCorreo->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtCorreo->Name = L"txtCorreo";
			this->txtCorreo->Size = System::Drawing::Size(301, 26);
			this->txtCorreo->TabIndex = 33;
			// 
			// txtCiudad
			// 
			this->txtCiudad->Location = System::Drawing::Point(162, 223);
			this->txtCiudad->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtCiudad->Name = L"txtCiudad";
			this->txtCiudad->Size = System::Drawing::Size(301, 26);
			this->txtCiudad->TabIndex = 32;
			// 
			// txtIdentidad
			// 
			this->txtIdentidad->Location = System::Drawing::Point(162, 183);
			this->txtIdentidad->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtIdentidad->Name = L"txtIdentidad";
			this->txtIdentidad->Size = System::Drawing::Size(301, 26);
			this->txtIdentidad->TabIndex = 31;
			// 
			// txtTelefono
			// 
			this->txtTelefono->Location = System::Drawing::Point(162, 143);
			this->txtTelefono->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtTelefono->Name = L"txtTelefono";
			this->txtTelefono->Size = System::Drawing::Size(301, 26);
			this->txtTelefono->TabIndex = 30;
			// 
			// txtDireccion
			// 
			this->txtDireccion->Location = System::Drawing::Point(162, 103);
			this->txtDireccion->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtDireccion->Name = L"txtDireccion";
			this->txtDireccion->Size = System::Drawing::Size(301, 26);
			this->txtDireccion->TabIndex = 29;
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(162, 62);
			this->txtApellido->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(301, 26);
			this->txtApellido->TabIndex = 28;
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
			this->label9->Location = System::Drawing::Point(36, 311);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(116, 20);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Fecha Ingreso:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(92, 269);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 20);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Correo:";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(88, 228);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 20);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Ciudad:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(72, 188);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 20);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Identidad:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(75, 148);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 20);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Telefono:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(70, 108);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 20);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Direccion:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(82, 66);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 20);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Apellido:";
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
			// frmMedicosEdit
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
			this->Name = L"frmMedicosEdit";
			this->Text = L"Editar Medicos";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMedicosEdit::~frmMedicosEdit();
	}
private: System::Void btnAceptar_Click(System::Object^ sender, System::EventArgs^ e) {
	Medico* med = new Medico();
	med->setNombre(msclr::interop::marshal_as<std::string>(this->txtNombre->Text));
	med->setApellido(msclr::interop::marshal_as<std::string>(this->txtApellido->Text));
	med->setDireccion(msclr::interop::marshal_as<std::string>(this->txtDireccion->Text));
	med->setTelefono(msclr::interop::marshal_as<std::string>(this->txtTelefono->Text));
	med->setIdentidad(msclr::interop::marshal_as<std::string>(this->txtIdentidad->Text));
	med->setCiudad(msclr::interop::marshal_as<std::string>(this->txtCiudad->Text));
	med->setCorreo(msclr::interop::marshal_as<std::string>(this->txtCorreo->Text));
	med->setFecha(msclr::interop::marshal_as<std::string>(this->dtpFecha->Text));
	med->generarCodigo();
	std::ofstream archivo;
	archivo.open("resources/archivos_dat/personas.dat", std::ios_base::app); //Concatenamos al archivo
	archivo << med->generarCadena() << endl;
	archivo.close();
	System::Windows::Forms::MessageBox::Show("Medico Guardado Correctamente");
	frmMedicosEdit::~frmMedicosEdit();
}
};
}

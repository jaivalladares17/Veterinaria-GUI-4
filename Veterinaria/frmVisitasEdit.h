#pragma once
#include <fstream>;//Libreria Manejo Archivos
#include <msclr\marshal_cppstd.h>//Libreria para convertir String^ a String
#include "Visita.h";
namespace Veterinaria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmVisitasEdit
	/// </summary>
	public ref class frmVisitasEdit : public System::Windows::Forms::Form
	{
	public:
		frmVisitasEdit(void)
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
		~frmVisitasEdit()
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
	private: System::Windows::Forms::TextBox^ txtFactura;

	private: System::Windows::Forms::TextBox^ txtPaciente;

	private: System::Windows::Forms::TextBox^ txtObservacion;

	private: System::Windows::Forms::TextBox^ txtTipo;

	private: System::Windows::Forms::TextBox^ txtMedico;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmVisitasEdit::typeid));
			this->btnAceptar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->dtpFecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtFactura = (gcnew System::Windows::Forms::TextBox());
			this->txtPaciente = (gcnew System::Windows::Forms::TextBox());
			this->txtObservacion = (gcnew System::Windows::Forms::TextBox());
			this->txtTipo = (gcnew System::Windows::Forms::TextBox());
			this->txtMedico = (gcnew System::Windows::Forms::TextBox());
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
			this->btnAceptar->TabIndex = 54;
			this->btnAceptar->Text = L"Aceptar";
			this->btnAceptar->UseVisualStyleBackColor = true;
			this->btnAceptar->Click += gcnew System::EventHandler(this, &frmVisitasEdit::btnAceptar_Click);
			// 
			// btnCancelar
			// 
			this->btnCancelar->Location = System::Drawing::Point(352, 346);
			this->btnCancelar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(112, 35);
			this->btnCancelar->TabIndex = 53;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &frmVisitasEdit::btnCancelar_Click);
			// 
			// dtpFecha
			// 
			this->dtpFecha->CustomFormat = L"dd-MM-yyyy";
			this->dtpFecha->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpFecha->Location = System::Drawing::Point(162, 18);
			this->dtpFecha->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dtpFecha->Name = L"dtpFecha";
			this->dtpFecha->Size = System::Drawing::Size(301, 26);
			this->dtpFecha->TabIndex = 52;
			this->dtpFecha->Value = System::DateTime(2021, 8, 2, 0, 0, 0, 0);
			// 
			// txtFactura
			// 
			this->txtFactura->Location = System::Drawing::Point(162, 223);
			this->txtFactura->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtFactura->Name = L"txtFactura";
			this->txtFactura->Size = System::Drawing::Size(301, 26);
			this->txtFactura->TabIndex = 50;
			// 
			// txtPaciente
			// 
			this->txtPaciente->Location = System::Drawing::Point(162, 183);
			this->txtPaciente->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtPaciente->Name = L"txtPaciente";
			this->txtPaciente->Size = System::Drawing::Size(301, 26);
			this->txtPaciente->TabIndex = 49;
			// 
			// txtObservacion
			// 
			this->txtObservacion->Location = System::Drawing::Point(162, 143);
			this->txtObservacion->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtObservacion->Name = L"txtObservacion";
			this->txtObservacion->Size = System::Drawing::Size(301, 26);
			this->txtObservacion->TabIndex = 48;
			// 
			// txtTipo
			// 
			this->txtTipo->Location = System::Drawing::Point(162, 103);
			this->txtTipo->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtTipo->Name = L"txtTipo";
			this->txtTipo->Size = System::Drawing::Size(301, 26);
			this->txtTipo->TabIndex = 47;
			// 
			// txtMedico
			// 
			this->txtMedico->Location = System::Drawing::Point(162, 62);
			this->txtMedico->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtMedico->Name = L"txtMedico";
			this->txtMedico->Size = System::Drawing::Size(301, 26);
			this->txtMedico->TabIndex = 46;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(88, 228);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 20);
			this->label6->TabIndex = 42;
			this->label6->Text = L"Factura:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(75, 188);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 20);
			this->label5->TabIndex = 41;
			this->label5->Text = L"Paciente:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(48, 148);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 20);
			this->label4->TabIndex = 40;
			this->label4->Text = L"Observacion:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(106, 108);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 20);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Tipo:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(86, 66);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 20);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Medico:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 25);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 20);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Fecha Visita:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// frmVisitasEdit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(501, 402);
			this->Controls->Add(this->btnAceptar);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->dtpFecha);
			this->Controls->Add(this->txtFactura);
			this->Controls->Add(this->txtPaciente);
			this->Controls->Add(this->txtObservacion);
			this->Controls->Add(this->txtTipo);
			this->Controls->Add(this->txtMedico);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"frmVisitasEdit";
			this->Text = L"Editar Visita";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		frmVisitasEdit::~frmVisitasEdit();
	}
private: System::Void btnAceptar_Click(System::Object^ sender, System::EventArgs^ e) {
	Visita* vis = new Visita();
	vis->setFecha(msclr::interop::marshal_as<std::string>(this->dtpFecha->Text));
	vis->setMedico(msclr::interop::marshal_as<std::string>(this->txtMedico->Text));
	vis->setObservacion(msclr::interop::marshal_as<std::string>(this->txtObservacion->Text));
	vis->setTipo(msclr::interop::marshal_as<std::string>(this->txtTipo->Text));
	vis->setPaciente(msclr::interop::marshal_as<std::string>(this->txtPaciente->Text));
	vis->setFactura(std::stoi(msclr::interop::marshal_as<std::string>(this->txtFactura->Text)));
	std::ofstream archivo;
	archivo.open("resources/archivos_dat/visitas.dat", std::ios_base::app); //Concatenamos al archivo
	archivo << vis->generarCadena() << endl;
	archivo.close();
	System::Windows::Forms::MessageBox::Show("Visita Guardada Correctamente");
	frmVisitasEdit::~frmVisitasEdit();
}
};
}

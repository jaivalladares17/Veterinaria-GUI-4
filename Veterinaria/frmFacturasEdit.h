#pragma once
#include <fstream>;//Libreria Manejo Archivos
#include <msclr\marshal_cppstd.h>//Libreria para convertir String^ a String
#include "Factura.h";
namespace Veterinaria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmFacturasEdit
	/// </summary>
	public ref class frmFacturasEdit : public System::Windows::Forms::Form
	{
	public:
		frmFacturasEdit(void)
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
		~frmFacturasEdit()
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
	private: System::Windows::Forms::TextBox^ txtTotal;
	private: System::Windows::Forms::TextBox^ txtISV;
	private: System::Windows::Forms::TextBox^ txtSubtotal;
	private: System::Windows::Forms::TextBox^ txtCliente;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cmbFormaPago;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmFacturasEdit::typeid));
			this->btnAceptar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->dtpFecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->txtISV = (gcnew System::Windows::Forms::TextBox());
			this->txtSubtotal = (gcnew System::Windows::Forms::TextBox());
			this->txtCliente = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cmbFormaPago = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// btnAceptar
			// 
			this->btnAceptar->Location = System::Drawing::Point(225, 346);
			this->btnAceptar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnAceptar->Name = L"btnAceptar";
			this->btnAceptar->Size = System::Drawing::Size(112, 35);
			this->btnAceptar->TabIndex = 68;
			this->btnAceptar->Text = L"Aceptar";
			this->btnAceptar->UseVisualStyleBackColor = true;
			this->btnAceptar->Click += gcnew System::EventHandler(this, &frmFacturasEdit::btnAceptar_Click);
			// 
			// btnCancelar
			// 
			this->btnCancelar->Location = System::Drawing::Point(346, 346);
			this->btnCancelar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(112, 35);
			this->btnCancelar->TabIndex = 67;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &frmFacturasEdit::btnCancelar_Click);
			// 
			// dtpFecha
			// 
			this->dtpFecha->CustomFormat = L"dd-MM-yyyy";
			this->dtpFecha->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpFecha->Location = System::Drawing::Point(156, 18);
			this->dtpFecha->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dtpFecha->Name = L"dtpFecha";
			this->dtpFecha->Size = System::Drawing::Size(301, 26);
			this->dtpFecha->TabIndex = 66;
			this->dtpFecha->Value = System::DateTime(2021, 8, 2, 0, 0, 0, 0);
			// 
			// txtTotal
			// 
			this->txtTotal->Location = System::Drawing::Point(156, 223);
			this->txtTotal->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->Size = System::Drawing::Size(180, 26);
			this->txtTotal->TabIndex = 65;
			this->txtTotal->TextChanged += gcnew System::EventHandler(this, &frmFacturasEdit::txtTotal_TextChanged);
			// 
			// txtISV
			// 
			this->txtISV->Enabled = false;
			this->txtISV->Location = System::Drawing::Point(156, 183);
			this->txtISV->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtISV->Name = L"txtISV";
			this->txtISV->Size = System::Drawing::Size(180, 26);
			this->txtISV->TabIndex = 64;
			// 
			// txtSubtotal
			// 
			this->txtSubtotal->Enabled = false;
			this->txtSubtotal->Location = System::Drawing::Point(156, 143);
			this->txtSubtotal->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtSubtotal->Name = L"txtSubtotal";
			this->txtSubtotal->Size = System::Drawing::Size(180, 26);
			this->txtSubtotal->TabIndex = 63;
			// 
			// txtCliente
			// 
			this->txtCliente->Location = System::Drawing::Point(156, 103);
			this->txtCliente->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtCliente->Name = L"txtCliente";
			this->txtCliente->Size = System::Drawing::Size(301, 26);
			this->txtCliente->TabIndex = 62;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(96, 228);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 20);
			this->label6->TabIndex = 60;
			this->label6->Text = L"Total:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(106, 188);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 20);
			this->label5->TabIndex = 59;
			this->label5->Text = L"ISV:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(68, 148);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 20);
			this->label4->TabIndex = 58;
			this->label4->Text = L"SubTotal:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(84, 108);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 20);
			this->label3->TabIndex = 57;
			this->label3->Text = L"Cliente:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 66);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 20);
			this->label2->TabIndex = 56;
			this->label2->Text = L"Forma Pago:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 25);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 20);
			this->label1->TabIndex = 55;
			this->label1->Text = L"Fecha Fact:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// cmbFormaPago
			// 
			this->cmbFormaPago->FormattingEnabled = true;
			this->cmbFormaPago->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Efectivo", L"Tarjeta" });
			this->cmbFormaPago->Location = System::Drawing::Point(158, 60);
			this->cmbFormaPago->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cmbFormaPago->Name = L"cmbFormaPago";
			this->cmbFormaPago->Size = System::Drawing::Size(300, 28);
			this->cmbFormaPago->TabIndex = 69;
			// 
			// frmFacturasEdit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(501, 402);
			this->Controls->Add(this->cmbFormaPago);
			this->Controls->Add(this->btnAceptar);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->dtpFecha);
			this->Controls->Add(this->txtTotal);
			this->Controls->Add(this->txtISV);
			this->Controls->Add(this->txtSubtotal);
			this->Controls->Add(this->txtCliente);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"frmFacturasEdit";
			this->Text = L"frmFacturasEdit";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void txtTotal_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->txtISV->Text = gcnew String(std::to_string(std::stod(msclr::interop::marshal_as<std::string>(this->txtTotal->Text)) * 0.15).c_str());
		this->txtSubtotal->Text = gcnew String(std::to_string(std::stod(msclr::interop::marshal_as<std::string>(this->txtTotal->Text)) - std::stod(msclr::interop::marshal_as<std::string>(this->txtISV->Text))).c_str());
	}
private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	frmFacturasEdit::~frmFacturasEdit();
}
private: System::Void btnAceptar_Click(System::Object^ sender, System::EventArgs^ e) {
	Factura* fact = new Factura();
	fact->setCliente(msclr::interop::marshal_as<std::string>(this->txtCliente->Text));
	fact->setFormaPago(msclr::interop::marshal_as<std::string>(this->cmbFormaPago->Text));
	fact->setFecha(msclr::interop::marshal_as<std::string>(this->dtpFecha->Text));
	fact->setTotal(std::stod(msclr::interop::marshal_as<std::string>(this->txtCliente->Text)));
	fact->setISV(std::stod(msclr::interop::marshal_as<std::string>(this->txtCliente->Text)));
	fact->setSubTotal(std::stod(msclr::interop::marshal_as<std::string>(this->txtCliente->Text)));
	std::ofstream archivo;
	archivo.open("resources/archivos_dat/facturas.dat", std::ios_base::app); //Concatenamos al archivo
	archivo << fact->generarCadena() << endl;
	archivo.close();
	System::Windows::Forms::MessageBox::Show("Factura Guardada Correctamente");
	frmFacturasEdit::~frmFacturasEdit();
}
};
}

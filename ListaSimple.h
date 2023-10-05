#pragma once
#include "listasimpledot.h"
#include <stdlib.h>
#include <string>

namespace VISUALIZADOR2022 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ListaSimple
	/// </summary>
	public ref class ListaSimple : public System::Windows::Forms::Form
	{
	public:
		ListaSimple(void)
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
		~ListaSimple()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ txtBuscar;
	protected:
	private: System::Windows::Forms::TextBox^ txtEliminar;
	private: System::Windows::Forms::TextBox^ txtInsertar;
	private: System::Windows::Forms::Button^ Limpiar;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnInsertar;
	private: System::Windows::Forms::PictureBox^ verEstructuras;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		ListaS<int>* A;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtBuscar = (gcnew System::Windows::Forms::TextBox());
			this->txtEliminar = (gcnew System::Windows::Forms::TextBox());
			this->txtInsertar = (gcnew System::Windows::Forms::TextBox());
			this->Limpiar = (gcnew System::Windows::Forms::Button());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnInsertar = (gcnew System::Windows::Forms::Button());
			this->verEstructuras = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verEstructuras))->BeginInit();
			this->SuspendLayout();
			// 
			// txtBuscar
			// 
			this->txtBuscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBuscar->Location = System::Drawing::Point(426, 28);
			this->txtBuscar->Name = L"txtBuscar";
			this->txtBuscar->Size = System::Drawing::Size(70, 27);
			this->txtBuscar->TabIndex = 14;
			// 
			// txtEliminar
			// 
			this->txtEliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEliminar->Location = System::Drawing::Point(232, 28);
			this->txtEliminar->Name = L"txtEliminar";
			this->txtEliminar->Size = System::Drawing::Size(70, 27);
			this->txtEliminar->TabIndex = 13;
			// 
			// txtInsertar
			// 
			this->txtInsertar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtInsertar->Location = System::Drawing::Point(35, 28);
			this->txtInsertar->Name = L"txtInsertar";
			this->txtInsertar->Size = System::Drawing::Size(70, 27);
			this->txtInsertar->TabIndex = 12;
			// 
			// Limpiar
			// 
			this->Limpiar->Location = System::Drawing::Point(847, 25);
			this->Limpiar->Name = L"Limpiar";
			this->Limpiar->Size = System::Drawing::Size(90, 30);
			this->Limpiar->TabIndex = 11;
			this->Limpiar->Text = L"Limpiar";
			this->Limpiar->UseVisualStyleBackColor = true;
			this->Limpiar->Click += gcnew System::EventHandler(this, &ListaSimple::Limpiar_Click);
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(502, 25);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(90, 30);
			this->btnBuscar->TabIndex = 10;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &ListaSimple::btnBuscar_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(308, 25);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(90, 30);
			this->btnEliminar->TabIndex = 9;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &ListaSimple::btnEliminar_Click);
			// 
			// btnInsertar
			// 
			this->btnInsertar->Location = System::Drawing::Point(111, 25);
			this->btnInsertar->Name = L"btnInsertar";
			this->btnInsertar->Size = System::Drawing::Size(90, 30);
			this->btnInsertar->TabIndex = 8;
			this->btnInsertar->Text = L"Insertar";
			this->btnInsertar->UseVisualStyleBackColor = true;
			this->btnInsertar->Click += gcnew System::EventHandler(this, &ListaSimple::btnInsertar_Click);
			// 
			// verEstructuras
			// 
			this->verEstructuras->Location = System::Drawing::Point(35, 97);
			this->verEstructuras->Name = L"verEstructuras";
			this->verEstructuras->Size = System::Drawing::Size(902, 415);
			this->verEstructuras->TabIndex = 15;
			this->verEstructuras->TabStop = false;
			// 
			// ListaSimple
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(960, 553);
			this->Controls->Add(this->verEstructuras);
			this->Controls->Add(this->txtBuscar);
			this->Controls->Add(this->txtEliminar);
			this->Controls->Add(this->txtInsertar);
			this->Controls->Add(this->Limpiar);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnInsertar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ListaSimple";
			this->Text = L"ListaSimple";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verEstructuras))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void btnInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ numero = this->txtInsertar->Text;
		int i = int::Parse(numero);
		A->Add(i);
		ListaS<int>(*A);
		this->verEstructuras->Image = nullptr;
		this->verEstructuras->LoadAsync("listasimple.png");
		this->verEstructuras->Refresh();
	}
	private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Limpiar_Click(System::Object^ sender, System::EventArgs^ e) {
	}

};
}

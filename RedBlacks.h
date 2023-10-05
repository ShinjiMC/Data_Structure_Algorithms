#pragma once
#include "redblack.h"
#include <stdlib.h>
namespace VISUALIZADOR2022 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RedBlacks
	/// </summary>
	public ref class RedBlacks : public System::Windows::Forms::Form
	{
	public:
		RedBlacks(void)
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
		~RedBlacks()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelControl;
	protected:
	private: System::Windows::Forms::Button^ Limpiar;
	private: System::Windows::Forms::TextBox^ txtBuscar;
	private: System::Windows::Forms::Button^ btnInsertar;
	private: System::Windows::Forms::TextBox^ txtInsertar;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ verEstructura;
	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		/// 
		RBThree<int>* A;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			A = new RBThree<int>();
			this->panelControl = (gcnew System::Windows::Forms::Panel());
			this->Limpiar = (gcnew System::Windows::Forms::Button());
			this->txtBuscar = (gcnew System::Windows::Forms::TextBox());
			this->btnInsertar = (gcnew System::Windows::Forms::Button());
			this->txtInsertar = (gcnew System::Windows::Forms::TextBox());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->verEstructura = (gcnew System::Windows::Forms::PictureBox());
			this->panelControl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verEstructura))->BeginInit();
			this->SuspendLayout();
			this->panelControl->BackColor = System::Drawing::SystemColors::Window;
			this->panelControl->Controls->Add(this->Limpiar);
			this->panelControl->Controls->Add(this->txtBuscar);
			this->panelControl->Controls->Add(this->btnInsertar);
			this->panelControl->Controls->Add(this->txtInsertar);
			this->panelControl->Controls->Add(this->btnEliminar);
			this->panelControl->Controls->Add(this->btnBuscar);
			this->panelControl->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelControl->Location = System::Drawing::Point(0, 0);
			this->panelControl->Name = L"panelControl";
			this->panelControl->Size = System::Drawing::Size(942, 97);
			this->panelControl->TabIndex = 26;
			// 
			// Limpiar
			// 
			this->Limpiar->Location = System::Drawing::Point(820, 33);
			this->Limpiar->Name = L"Limpiar";
			this->Limpiar->Size = System::Drawing::Size(90, 30);
			this->Limpiar->TabIndex = 19;
			this->Limpiar->Text = L"Limpiar";
			this->Limpiar->UseVisualStyleBackColor = true;
			this->Limpiar->Click += gcnew System::EventHandler(this, &RedBlacks::Limpiar_Click);
			// 
			// txtBuscar
			// 
			this->txtBuscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBuscar->Location = System::Drawing::Point(478, 36);
			this->txtBuscar->Name = L"txtBuscar";
			this->txtBuscar->Size = System::Drawing::Size(70, 27);
			this->txtBuscar->TabIndex = 22;
			//this->txtBuscar->TextChanged += gcnew System::EventHandler(this, &Cola::txtBuscar_TextChanged);
			// 
			// btnInsertar
			// 
			this->btnInsertar->Location = System::Drawing::Point(163, 33);
			this->btnInsertar->Name = L"btnInsertar";
			this->btnInsertar->Size = System::Drawing::Size(90, 30);
			this->btnInsertar->TabIndex = 16;
			this->btnInsertar->Text = L"Insertar";
			this->btnInsertar->UseVisualStyleBackColor = true;
			this->btnInsertar->Click += gcnew System::EventHandler(this, &RedBlacks::btnInsertar_Click);
			// 
			// txtInsertar
			// 
			this->txtInsertar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtInsertar->Location = System::Drawing::Point(87, 36);
			this->txtInsertar->Name = L"txtInsertar";
			this->txtInsertar->Size = System::Drawing::Size(70, 27);
			this->txtInsertar->TabIndex = 20;
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(339, 33);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(90, 30);
			this->btnEliminar->TabIndex = 17;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &RedBlacks::btnEliminar_Click);
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(554, 33);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(90, 30);
			this->btnBuscar->TabIndex = 18;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &RedBlacks::btnBuscar_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Window;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 97);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(942, 42);
			this->panel2->TabIndex = 29;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 464);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(942, 42);
			this->panel1->TabIndex = 30;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Window;
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 139);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(45, 325);
			this->panel3->TabIndex = 31;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Window;
			this->panel4->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel4->Location = System::Drawing::Point(899, 139);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(43, 325);
			this->panel4->TabIndex = 32;
			// 
			// verEstructura
			// 
			this->verEstructura->BackColor = System::Drawing::SystemColors::Window;
			this->verEstructura->Dock = System::Windows::Forms::DockStyle::Fill;
			this->verEstructura->Location = System::Drawing::Point(45, 139);
			this->verEstructura->Name = L"verEstructura";
			this->verEstructura->Size = System::Drawing::Size(854, 325);
			this->verEstructura->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->verEstructura->TabIndex = 33;
			this->verEstructura->TabStop = false;
			// 
			// Cola
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(942, 506);
			this->Controls->Add(this->verEstructura);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panelControl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Red-Black";
			this->Text = L"Red-Black";
			this->panelControl->ResumeLayout(false);
			this->panelControl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verEstructura))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ numero = this->txtInsertar->Text;
		int i = int::Parse(numero);
		A->Add(i);
		RBgrafo(*A);
		this->verEstructura->Image = nullptr;
		this->verEstructura->LoadAsync("redblack.png");
		this->verEstructura->Refresh();
		this->btnBuscar->Enabled = true;
		this->btnEliminar->Enabled = true;
	}
	private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		//A->Pop();
		RBgrafo(*A);
		this->verEstructura->Image = nullptr;
		this->verEstructura->LoadAsync("redblack.png");
		this->verEstructura->Refresh();
	}

	private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ numero = this->txtBuscar->Text;
		int i = int::Parse(numero);
		RBgrafofind(*A,i);
		this->verEstructura->Image = nullptr;
		this->verEstructura->LoadAsync("redblack.png");
		this->verEstructura->Refresh();
	}
	private: System::Void Limpiar_Click(System::Object^ sender, System::EventArgs^ e) {
		remove("redblack.dot");
		remove("redblack.png");
		this->verEstructura->Image = nullptr;
		A = new RBThree<int>();
	}
	};
}

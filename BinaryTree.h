#pragma once
#include "arbolbinariodot.h"
namespace VISUALIZADOR2022 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de BinaryTree
	/// </summary>
	public ref class BinaryTree : public System::Windows::Forms::Form
	{
	public:
		BinaryTree(void)
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
		~BinaryTree()
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
	private: System::Windows::Forms::TextBox^ txtEliminar;
	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		int num;
		Tree<int>* A;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{	
			num = 0;
			A = new Tree<int>();
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
			this->txtEliminar = (gcnew System::Windows::Forms::TextBox());
			this->panelControl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verEstructura))->BeginInit();
			this->SuspendLayout();
			// 
			// panelControl
			// 
			this->panelControl->BackColor = System::Drawing::SystemColors::Window;
			this->panelControl->Controls->Add(this->txtEliminar);
			this->panelControl->Controls->Add(this->Limpiar);
			this->panelControl->Controls->Add(this->txtBuscar);
			this->panelControl->Controls->Add(this->btnInsertar);
			this->panelControl->Controls->Add(this->txtInsertar);
			this->panelControl->Controls->Add(this->btnEliminar);
			this->panelControl->Controls->Add(this->btnBuscar);
			this->panelControl->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelControl->Location = System::Drawing::Point(0, 0);
			this->panelControl->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelControl->Name = L"panelControl";
			this->panelControl->Size = System::Drawing::Size(706, 79);
			this->panelControl->TabIndex = 26;
			// 
			// Limpiar
			// 
			this->Limpiar->Location = System::Drawing::Point(615, 27);
			this->Limpiar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Limpiar->Name = L"Limpiar";
			this->Limpiar->Size = System::Drawing::Size(68, 24);
			this->Limpiar->TabIndex = 19;
			this->Limpiar->Text = L"Limpiar";
			this->Limpiar->UseVisualStyleBackColor = true;
			this->Limpiar->Click += gcnew System::EventHandler(this, &BinaryTree::Limpiar_Click);
			// 
			// txtBuscar
			// 
			this->txtBuscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBuscar->Location = System::Drawing::Point(358, 29);
			this->txtBuscar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtBuscar->Name = L"txtBuscar";
			this->txtBuscar->Size = System::Drawing::Size(54, 23);
			this->txtBuscar->TabIndex = 22;
			// 
			// btnInsertar
			// 
			this->btnInsertar->Location = System::Drawing::Point(122, 27);
			this->btnInsertar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnInsertar->Name = L"btnInsertar";
			this->btnInsertar->Size = System::Drawing::Size(68, 24);
			this->btnInsertar->TabIndex = 16;
			this->btnInsertar->Text = L"Insertar";
			this->btnInsertar->UseVisualStyleBackColor = true;
			this->btnInsertar->Click += gcnew System::EventHandler(this, &BinaryTree::btnInsertar_Click);
			// 
			// txtInsertar
			// 
			this->txtInsertar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtInsertar->Location = System::Drawing::Point(65, 29);
			this->txtInsertar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtInsertar->Name = L"txtInsertar";
			this->txtInsertar->Size = System::Drawing::Size(54, 23);
			this->txtInsertar->TabIndex = 20;
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(274, 27);
			this->btnEliminar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(68, 24);
			this->btnEliminar->TabIndex = 17;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &BinaryTree::btnEliminar_Click);
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(416, 27);
			this->btnBuscar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(68, 24);
			this->btnBuscar->TabIndex = 18;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &BinaryTree::btnBuscar_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Window;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 79);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(706, 34);
			this->panel2->TabIndex = 29;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 377);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(706, 34);
			this->panel1->TabIndex = 30;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Window;
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 113);
			this->panel3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(34, 264);
			this->panel3->TabIndex = 31;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Window;
			this->panel4->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel4->Location = System::Drawing::Point(674, 113);
			this->panel4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(32, 264);
			this->panel4->TabIndex = 32;
			// 
			// verEstructura
			// 
			this->verEstructura->BackColor = System::Drawing::SystemColors::Window;
			this->verEstructura->Dock = System::Windows::Forms::DockStyle::Fill;
			this->verEstructura->Location = System::Drawing::Point(34, 113);
			this->verEstructura->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->verEstructura->Name = L"verEstructura";
			this->verEstructura->Size = System::Drawing::Size(640, 264);
			this->verEstructura->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->verEstructura->TabIndex = 33;
			this->verEstructura->TabStop = false;
			// 
			// txtEliminar
			// 
			this->txtEliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEliminar->Location = System::Drawing::Point(216, 29);
			this->txtEliminar->Margin = System::Windows::Forms::Padding(2);
			this->txtEliminar->Name = L"txtEliminar";
			this->txtEliminar->Size = System::Drawing::Size(54, 23);
			this->txtEliminar->TabIndex = 23;
			
			// 
			// BinaryTree
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(706, 411);
			this->Controls->Add(this->verEstructura);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panelControl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"BinaryTree";
			this->Text = L"BinaryTree";
			this->panelControl->ResumeLayout(false);
			this->panelControl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verEstructura))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ numero = this->txtInsertar->Text;
		int i = int::Parse(numero);
		A->add(i,num);
		num=num+1;
		/*srand(time(NULL));
		for (int i = 0; i <= 100; i++)
			A->add(rand() % 1000, i);*/
		ABgrafo(*A);
		this->verEstructura->Image = nullptr;
		this->verEstructura->LoadAsync("arbolbinario.png");
		this->verEstructura->Refresh();
		this->btnBuscar->Enabled = true;
		this->btnEliminar->Enabled = true;
	}
	private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ numero = this->txtEliminar->Text;
		int i = int::Parse(numero);
		A->Delete_one_Son(i);
		ABgrafo(*A);
		this->verEstructura->Image = nullptr;
		this->verEstructura->LoadAsync("arbolbinario.png");
		this->verEstructura->Refresh();
	}

	private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ numero = this->txtBuscar->Text;
		int i = int::Parse(numero);
		ABgrafofind<int>(*A, i);
		this->verEstructura->Image = nullptr;
		this->verEstructura->LoadAsync("arbolbinario.png");
		this->verEstructura->Refresh();
	}
	private: System::Void Limpiar_Click(System::Object^ sender, System::EventArgs^ e) {
		remove("arbolbinario.dot");
		remove("arbolbinario.png");
		this->verEstructura->Image = nullptr;
		//A = new Tree<int>();
	}
};
}

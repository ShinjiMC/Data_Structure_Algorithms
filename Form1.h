#pragma once
using namespace std;
#include "ListaSimple.h"
#include "Cola.h"
#include "Pila.h"
#include "Doble.h"
#include "RedBlacks.h"
#include "BinaryTree.h"
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			customizeDesing();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelVisualizador;
	protected:
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panelGrafos;
	private: System::Windows::Forms::Button^ btnDiskjtra;
	private: System::Windows::Forms::Button^ btnFloryd;
	private: System::Windows::Forms::Button^ btnWarshall;
	private: System::Windows::Forms::Button^ btnGrafos;
	private: System::Windows::Forms::Panel^ panelMatriz;
	private: System::Windows::Forms::Button^ btnMatrizPocoDensa;
	private: System::Windows::Forms::Button^ btnMatrizEsparza;
	private: System::Windows::Forms::Panel^ panelHash;
	private: System::Windows::Forms::Button^ btnTablaHast;
	private: System::Windows::Forms::Button^ btnHash;
	private: System::Windows::Forms::Panel^ panelArboles;
	private: System::Windows::Forms::Button^ btnRedBlack;
	private: System::Windows::Forms::Button^ btnAvl;
	private: System::Windows::Forms::Button^ btnArbolesBinarios;
	private: System::Windows::Forms::Button^ btnArboles;
	private: System::Windows::Forms::Panel^ panelListas;
	private: System::Windows::Forms::Button^ btnColas;
	private: System::Windows::Forms::Button^ btnPilas;
	private: System::Windows::Forms::Button^ btnListasSimples;
	private: System::Windows::Forms::Button^ btnListasDobles;
	private: System::Windows::Forms::Button^ btnListas;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panelVisualizador = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panelGrafos = (gcnew System::Windows::Forms::Panel());
			this->btnDiskjtra = (gcnew System::Windows::Forms::Button());
			this->btnFloryd = (gcnew System::Windows::Forms::Button());
			this->btnWarshall = (gcnew System::Windows::Forms::Button());
			this->btnGrafos = (gcnew System::Windows::Forms::Button());
			this->panelMatriz = (gcnew System::Windows::Forms::Panel());
			this->btnMatrizPocoDensa = (gcnew System::Windows::Forms::Button());
			this->btnMatrizEsparza = (gcnew System::Windows::Forms::Button());
			this->panelHash = (gcnew System::Windows::Forms::Panel());
			this->btnTablaHast = (gcnew System::Windows::Forms::Button());
			this->btnHash = (gcnew System::Windows::Forms::Button());
			this->panelArboles = (gcnew System::Windows::Forms::Panel());
			this->btnRedBlack = (gcnew System::Windows::Forms::Button());
			this->btnAvl = (gcnew System::Windows::Forms::Button());
			this->btnArbolesBinarios = (gcnew System::Windows::Forms::Button());
			this->btnArboles = (gcnew System::Windows::Forms::Button());
			this->panelListas = (gcnew System::Windows::Forms::Panel());
			this->btnColas = (gcnew System::Windows::Forms::Button());
			this->btnPilas = (gcnew System::Windows::Forms::Button());
			this->btnListasSimples = (gcnew System::Windows::Forms::Button());
			this->btnListasDobles = (gcnew System::Windows::Forms::Button());
			this->btnListas = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panelGrafos->SuspendLayout();
			this->panelMatriz->SuspendLayout();
			this->panelHash->SuspendLayout();
			this->panelArboles->SuspendLayout();
			this->panelListas->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelVisualizador
			// 
			this->panelVisualizador->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelVisualizador->Location = System::Drawing::Point(204, 69);
			this->panelVisualizador->Margin = System::Windows::Forms::Padding(2);
			this->panelVisualizador->Name = L"panelVisualizador";
			this->panelVisualizador->Size = System::Drawing::Size(734, 488);
			this->panelVisualizador->TabIndex = 9;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(146)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->panel3->Controls->Add(this->label1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(204, 0);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(734, 69);
			this->panel3->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(226, 15);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(280, 44);
			this->label1->TabIndex = 1;
			this->label1->Text = L"VISUALIZADOR";
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->panel1->Controls->Add(this->panelGrafos);
			this->panel1->Controls->Add(this->btnGrafos);
			this->panel1->Controls->Add(this->panelMatriz);
			this->panel1->Controls->Add(this->btnMatrizEsparza);
			this->panel1->Controls->Add(this->panelHash);
			this->panel1->Controls->Add(this->btnHash);
			this->panel1->Controls->Add(this->panelArboles);
			this->panel1->Controls->Add(this->btnArboles);
			this->panel1->Controls->Add(this->panelListas);
			this->panel1->Controls->Add(this->btnListas);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(204, 557);
			this->panel1->TabIndex = 7;
			// 
			// panelGrafos
			// 
			this->panelGrafos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->panelGrafos->Controls->Add(this->btnDiskjtra);
			this->panelGrafos->Controls->Add(this->btnFloryd);
			this->panelGrafos->Controls->Add(this->btnWarshall);
			this->panelGrafos->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelGrafos->Location = System::Drawing::Point(0, 643);
			this->panelGrafos->Margin = System::Windows::Forms::Padding(2);
			this->panelGrafos->Name = L"panelGrafos";
			this->panelGrafos->Size = System::Drawing::Size(187, 122);
			this->panelGrafos->TabIndex = 11;
			// 
			// btnDiskjtra
			// 
			this->btnDiskjtra->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->btnDiskjtra->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnDiskjtra->FlatAppearance->BorderSize = 0;
			this->btnDiskjtra->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDiskjtra->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10));
			this->btnDiskjtra->ForeColor = System::Drawing::SystemColors::Window;
			this->btnDiskjtra->Location = System::Drawing::Point(0, 82);
			this->btnDiskjtra->Margin = System::Windows::Forms::Padding(2);
			this->btnDiskjtra->Name = L"btnDiskjtra";
			this->btnDiskjtra->Size = System::Drawing::Size(187, 41);
			this->btnDiskjtra->TabIndex = 13;
			this->btnDiskjtra->Text = L"Diskjtra";
			this->btnDiskjtra->UseVisualStyleBackColor = false;
			this->btnDiskjtra->Click += gcnew System::EventHandler(this, &Form1::btnDiskjtra_Click);
			// 
			// btnFloryd
			// 
			this->btnFloryd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->btnFloryd->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnFloryd->FlatAppearance->BorderSize = 0;
			this->btnFloryd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFloryd->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10));
			this->btnFloryd->ForeColor = System::Drawing::SystemColors::Window;
			this->btnFloryd->Location = System::Drawing::Point(0, 41);
			this->btnFloryd->Margin = System::Windows::Forms::Padding(2);
			this->btnFloryd->Name = L"btnFloryd";
			this->btnFloryd->Size = System::Drawing::Size(187, 41);
			this->btnFloryd->TabIndex = 12;
			this->btnFloryd->Text = L"Floryd";
			this->btnFloryd->UseVisualStyleBackColor = false;
			this->btnFloryd->Click += gcnew System::EventHandler(this, &Form1::btnFloryd_Click);
			// 
			// btnWarshall
			// 
			this->btnWarshall->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->btnWarshall->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnWarshall->FlatAppearance->BorderSize = 0;
			this->btnWarshall->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnWarshall->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10));
			this->btnWarshall->ForeColor = System::Drawing::SystemColors::Window;
			this->btnWarshall->Location = System::Drawing::Point(0, 0);
			this->btnWarshall->Margin = System::Windows::Forms::Padding(2);
			this->btnWarshall->Name = L"btnWarshall";
			this->btnWarshall->Size = System::Drawing::Size(187, 41);
			this->btnWarshall->TabIndex = 11;
			this->btnWarshall->Text = L"Warshall";
			this->btnWarshall->UseVisualStyleBackColor = false;
			this->btnWarshall->Click += gcnew System::EventHandler(this, &Form1::btnWarshall_Click);
			// 
			// btnGrafos
			// 
			this->btnGrafos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->btnGrafos->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnGrafos->FlatAppearance->BorderSize = 0;
			this->btnGrafos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGrafos->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10));
			this->btnGrafos->ForeColor = System::Drawing::SystemColors::Window;
			this->btnGrafos->Location = System::Drawing::Point(0, 602);
			this->btnGrafos->Margin = System::Windows::Forms::Padding(2);
			this->btnGrafos->Name = L"btnGrafos";
			this->btnGrafos->Size = System::Drawing::Size(187, 41);
			this->btnGrafos->TabIndex = 14;
			this->btnGrafos->Text = L"Grafos";
			this->btnGrafos->UseVisualStyleBackColor = false;
			this->btnGrafos->Click += gcnew System::EventHandler(this, &Form1::btnGrafos_Click);
			// 
			// panelMatriz
			// 
			this->panelMatriz->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->panelMatriz->Controls->Add(this->btnMatrizPocoDensa);
			this->panelMatriz->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelMatriz->Location = System::Drawing::Point(0, 561);
			this->panelMatriz->Margin = System::Windows::Forms::Padding(2);
			this->panelMatriz->Name = L"panelMatriz";
			this->panelMatriz->Size = System::Drawing::Size(187, 41);
			this->panelMatriz->TabIndex = 10;
			// 
			// btnMatrizPocoDensa
			// 
			this->btnMatrizPocoDensa->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->btnMatrizPocoDensa->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnMatrizPocoDensa->FlatAppearance->BorderSize = 0;
			this->btnMatrizPocoDensa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMatrizPocoDensa->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10));
			this->btnMatrizPocoDensa->ForeColor = System::Drawing::SystemColors::Window;
			this->btnMatrizPocoDensa->Location = System::Drawing::Point(0, 0);
			this->btnMatrizPocoDensa->Margin = System::Windows::Forms::Padding(2);
			this->btnMatrizPocoDensa->Name = L"btnMatrizPocoDensa";
			this->btnMatrizPocoDensa->Size = System::Drawing::Size(187, 41);
			this->btnMatrizPocoDensa->TabIndex = 6;
			this->btnMatrizPocoDensa->Text = L"Matriz poco densa";
			this->btnMatrizPocoDensa->UseVisualStyleBackColor = false;
			this->btnMatrizPocoDensa->Click += gcnew System::EventHandler(this, &Form1::btnMatrizPocoDensa_Click);
			// 
			// btnMatrizEsparza
			// 
			this->btnMatrizEsparza->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->btnMatrizEsparza->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnMatrizEsparza->FlatAppearance->BorderSize = 0;
			this->btnMatrizEsparza->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMatrizEsparza->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10));
			this->btnMatrizEsparza->ForeColor = System::Drawing::SystemColors::Window;
			this->btnMatrizEsparza->Location = System::Drawing::Point(0, 517);
			this->btnMatrizEsparza->Margin = System::Windows::Forms::Padding(2);
			this->btnMatrizEsparza->Name = L"btnMatrizEsparza";
			this->btnMatrizEsparza->Size = System::Drawing::Size(187, 44);
			this->btnMatrizEsparza->TabIndex = 12;
			this->btnMatrizEsparza->Text = L"Matriz Esparza";
			this->btnMatrizEsparza->UseVisualStyleBackColor = false;
			this->btnMatrizEsparza->Click += gcnew System::EventHandler(this, &Form1::btnMatrizEsparza_Click);
			// 
			// panelHash
			// 
			this->panelHash->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->panelHash->Controls->Add(this->btnTablaHast);
			this->panelHash->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelHash->Location = System::Drawing::Point(0, 476);
			this->panelHash->Margin = System::Windows::Forms::Padding(2);
			this->panelHash->Name = L"panelHash";
			this->panelHash->Size = System::Drawing::Size(187, 41);
			this->panelHash->TabIndex = 10;
			// 
			// btnTablaHast
			// 
			this->btnTablaHast->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->btnTablaHast->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnTablaHast->FlatAppearance->BorderSize = 0;
			this->btnTablaHast->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTablaHast->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10));
			this->btnTablaHast->ForeColor = System::Drawing::SystemColors::Window;
			this->btnTablaHast->Location = System::Drawing::Point(0, 0);
			this->btnTablaHast->Margin = System::Windows::Forms::Padding(2);
			this->btnTablaHast->Name = L"btnTablaHast";
			this->btnTablaHast->Size = System::Drawing::Size(187, 41);
			this->btnTablaHast->TabIndex = 9;
			this->btnTablaHast->Text = L"Tabla Hast";
			this->btnTablaHast->UseVisualStyleBackColor = false;
			this->btnTablaHast->Click += gcnew System::EventHandler(this, &Form1::btnTablaHast_Click);
			// 
			// btnHash
			// 
			this->btnHash->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->btnHash->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnHash->FlatAppearance->BorderSize = 0;
			this->btnHash->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnHash->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10));
			this->btnHash->ForeColor = System::Drawing::SystemColors::Window;
			this->btnHash->Location = System::Drawing::Point(0, 435);
			this->btnHash->Margin = System::Windows::Forms::Padding(2);
			this->btnHash->Name = L"btnHash";
			this->btnHash->Size = System::Drawing::Size(187, 41);
			this->btnHash->TabIndex = 12;
			this->btnHash->Text = L"Hash";
			this->btnHash->UseVisualStyleBackColor = false;
			this->btnHash->Click += gcnew System::EventHandler(this, &Form1::btnHash_Click);
			// 
			// panelArboles
			// 
			this->panelArboles->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->panelArboles->Controls->Add(this->btnRedBlack);
			this->panelArboles->Controls->Add(this->btnAvl);
			this->panelArboles->Controls->Add(this->btnArbolesBinarios);
			this->panelArboles->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelArboles->Location = System::Drawing::Point(0, 313);
			this->panelArboles->Margin = System::Windows::Forms::Padding(2);
			this->panelArboles->Name = L"panelArboles";
			this->panelArboles->Size = System::Drawing::Size(187, 122);
			this->panelArboles->TabIndex = 6;
			// 
			// btnRedBlack
			// 
			this->btnRedBlack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->btnRedBlack->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnRedBlack->FlatAppearance->BorderSize = 0;
			this->btnRedBlack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRedBlack->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10));
			this->btnRedBlack->ForeColor = System::Drawing::SystemColors::Window;
			this->btnRedBlack->Location = System::Drawing::Point(0, 81);
			this->btnRedBlack->Margin = System::Windows::Forms::Padding(2);
			this->btnRedBlack->Name = L"btnRedBlack";
			this->btnRedBlack->Size = System::Drawing::Size(187, 41);
			this->btnRedBlack->TabIndex = 8;
			this->btnRedBlack->Text = L"Red Black";
			this->btnRedBlack->UseVisualStyleBackColor = false;
			this->btnRedBlack->Click += gcnew System::EventHandler(this, &Form1::btnRedBlack_Click);
			// 
			// btnAvl
			// 
			this->btnAvl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->btnAvl->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnAvl->FlatAppearance->BorderSize = 0;
			this->btnAvl->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAvl->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10));
			this->btnAvl->ForeColor = System::Drawing::SystemColors::Window;
			this->btnAvl->Location = System::Drawing::Point(0, 41);
			this->btnAvl->Margin = System::Windows::Forms::Padding(2);
			this->btnAvl->Name = L"btnAvl";
			this->btnAvl->Size = System::Drawing::Size(187, 41);
			this->btnAvl->TabIndex = 7;
			this->btnAvl->Text = L"AVL";
			this->btnAvl->UseVisualStyleBackColor = false;
			this->btnAvl->Click += gcnew System::EventHandler(this, &Form1::btnAvl_Click);
			// 
			// btnArbolesBinarios
			// 
			this->btnArbolesBinarios->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->btnArbolesBinarios->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnArbolesBinarios->FlatAppearance->BorderSize = 0;
			this->btnArbolesBinarios->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnArbolesBinarios->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10));
			this->btnArbolesBinarios->ForeColor = System::Drawing::SystemColors::Window;
			this->btnArbolesBinarios->Location = System::Drawing::Point(0, 0);
			this->btnArbolesBinarios->Margin = System::Windows::Forms::Padding(2);
			this->btnArbolesBinarios->Name = L"btnArbolesBinarios";
			this->btnArbolesBinarios->Size = System::Drawing::Size(187, 41);
			this->btnArbolesBinarios->TabIndex = 6;
			this->btnArbolesBinarios->Text = L"Arboles Binarios";
			this->btnArbolesBinarios->UseVisualStyleBackColor = false;
			this->btnArbolesBinarios->Click += gcnew System::EventHandler(this, &Form1::btnArbolesBinarios_Click);
			// 
			// btnArboles
			// 
			this->btnArboles->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->btnArboles->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnArboles->FlatAppearance->BorderSize = 0;
			this->btnArboles->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnArboles->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10));
			this->btnArboles->ForeColor = System::Drawing::SystemColors::Window;
			this->btnArboles->Location = System::Drawing::Point(0, 272);
			this->btnArboles->Margin = System::Windows::Forms::Padding(2);
			this->btnArboles->Name = L"btnArboles";
			this->btnArboles->Size = System::Drawing::Size(187, 41);
			this->btnArboles->TabIndex = 11;
			this->btnArboles->Text = L"Arboles Binarios de Búsqueda";
			this->btnArboles->UseVisualStyleBackColor = false;
			this->btnArboles->Click += gcnew System::EventHandler(this, &Form1::btnArboles_Click);
			// 
			// panelListas
			// 
			this->panelListas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->panelListas->Controls->Add(this->btnColas);
			this->panelListas->Controls->Add(this->btnPilas);
			this->panelListas->Controls->Add(this->btnListasSimples);
			this->panelListas->Controls->Add(this->btnListasDobles);
			this->panelListas->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelListas->Location = System::Drawing::Point(0, 110);
			this->panelListas->Margin = System::Windows::Forms::Padding(2);
			this->panelListas->Name = L"panelListas";
			this->panelListas->Size = System::Drawing::Size(187, 162);
			this->panelListas->TabIndex = 2;
			// 
			// btnColas
			// 
			this->btnColas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->btnColas->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnColas->FlatAppearance->BorderSize = 0;
			this->btnColas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnColas->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10));
			this->btnColas->ForeColor = System::Drawing::SystemColors::Window;
			this->btnColas->Location = System::Drawing::Point(0, 82);
			this->btnColas->Margin = System::Windows::Forms::Padding(2);
			this->btnColas->Name = L"btnColas";
			this->btnColas->Size = System::Drawing::Size(187, 41);
			this->btnColas->TabIndex = 5;
			this->btnColas->Text = L"Colas";
			this->btnColas->UseVisualStyleBackColor = false;
			this->btnColas->Click += gcnew System::EventHandler(this, &Form1::btnColas_Click);
			// 
			// btnPilas
			// 
			this->btnPilas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->btnPilas->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnPilas->FlatAppearance->BorderSize = 0;
			this->btnPilas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPilas->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10));
			this->btnPilas->ForeColor = System::Drawing::SystemColors::Window;
			this->btnPilas->Location = System::Drawing::Point(0, 121);
			this->btnPilas->Margin = System::Windows::Forms::Padding(2);
			this->btnPilas->Name = L"btnPilas";
			this->btnPilas->Size = System::Drawing::Size(187, 41);
			this->btnPilas->TabIndex = 4;
			this->btnPilas->Text = L"Pilas";
			this->btnPilas->UseVisualStyleBackColor = false;
			this->btnPilas->Click += gcnew System::EventHandler(this, &Form1::btnPilas_Click);
			// 
			// btnListasSimples
			// 
			this->btnListasSimples->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->btnListasSimples->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnListasSimples->FlatAppearance->BorderSize = 0;
			this->btnListasSimples->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnListasSimples->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10));
			this->btnListasSimples->ForeColor = System::Drawing::SystemColors::Window;
			this->btnListasSimples->Location = System::Drawing::Point(0, 41);
			this->btnListasSimples->Margin = System::Windows::Forms::Padding(2);
			this->btnListasSimples->Name = L"btnListasSimples";
			this->btnListasSimples->Size = System::Drawing::Size(187, 41);
			this->btnListasSimples->TabIndex = 2;
			this->btnListasSimples->Text = L"Listas Simples";
			this->btnListasSimples->UseVisualStyleBackColor = false;
			this->btnListasSimples->Click += gcnew System::EventHandler(this, &Form1::btnListasSimples_Click);
			// 
			// btnListasDobles
			// 
			this->btnListasDobles->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->btnListasDobles->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnListasDobles->FlatAppearance->BorderSize = 0;
			this->btnListasDobles->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnListasDobles->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10));
			this->btnListasDobles->ForeColor = System::Drawing::SystemColors::Window;
			this->btnListasDobles->Location = System::Drawing::Point(0, 0);
			this->btnListasDobles->Margin = System::Windows::Forms::Padding(2);
			this->btnListasDobles->Name = L"btnListasDobles";
			this->btnListasDobles->Size = System::Drawing::Size(187, 41);
			this->btnListasDobles->TabIndex = 3;
			this->btnListasDobles->Text = L"Listas Dobles";
			this->btnListasDobles->UseVisualStyleBackColor = false;
			this->btnListasDobles->Click += gcnew System::EventHandler(this, &Form1::btnListasDobles_Click);
			// 
			// btnListas
			// 
			this->btnListas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->btnListas->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnListas->FlatAppearance->BorderSize = 0;
			this->btnListas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnListas->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10));
			this->btnListas->ForeColor = System::Drawing::SystemColors::Window;
			this->btnListas->Location = System::Drawing::Point(0, 69);
			this->btnListas->Margin = System::Windows::Forms::Padding(2);
			this->btnListas->Name = L"btnListas";
			this->btnListas->Size = System::Drawing::Size(187, 41);
			this->btnListas->TabIndex = 1;
			this->btnListas->Text = L"Listas";
			this->btnListas->UseVisualStyleBackColor = false;
			this->btnListas->Click += gcnew System::EventHandler(this, &Form1::btnListas_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(187, 69);
			this->panel2->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 20));
			this->label2->ForeColor = System::Drawing::SystemColors::Window;
			this->label2->Location = System::Drawing::Point(28, 20);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 30);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Estructuras";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(938, 557);
			this->Controls->Add(this->panelVisualizador);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"Visualizador";
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panelGrafos->ResumeLayout(false);
			this->panelMatriz->ResumeLayout(false);
			this->panelHash->ResumeLayout(false);
			this->panelArboles->ResumeLayout(false);
			this->panelListas->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:System::Void customizeDesing() {
		this->panelListas->Visible = false;
		this->panelArboles->Visible = false;
		this->panelGrafos->Visible = false;
		this->panelHash->Visible = false;
		this->panelMatriz->Visible = false;
	}
		private:System::Void hideSubMenu()// ocultar el submenu
		{
			if (this->panelListas->Visible == true)
				this->panelListas->Visible = false;
			if (this->panelArboles->Visible == true)
				this->panelArboles->Visible = false;
			if (this->panelGrafos->Visible == true)
				this->panelGrafos->Visible = false;
			if (this->panelHash->Visible == true)
				this->panelHash->Visible = false;
			if (this->panelMatriz->Visible == true)
				this->panelMatriz->Visible = false;
		}

		private:System::Void showSubMenu(Panel^ subMenu) // mostrar menu
		{
			if (subMenu->Visible == false)
			{
				hideSubMenu();
				subMenu->Visible = true;
			}
			else
				subMenu->Visible = false;

		}



		private: System::Void btnListas_Click(System::Object^ sender, System::EventArgs^ e) {
			showSubMenu(panelListas);
		}
		private: System::Void btnArboles_Click(System::Object^ sender, System::EventArgs^ e) {
			showSubMenu(panelArboles);
		}
		private: System::Void btnHash_Click(System::Object^ sender, System::EventArgs^ e) {
			showSubMenu(panelHash);
		}
		private: System::Void btnMatrizEsparza_Click(System::Object^ sender, System::EventArgs^ e) {
			showSubMenu(panelMatriz);
		}
		private: System::Void btnGrafos_Click(System::Object^ sender, System::EventArgs^ e) {
			showSubMenu(panelGrafos);
		}


		template<class B>
		void AbrirPanel(B FormHijo) {
			if (this->panelVisualizador->Controls->Count > 0)
				this->panelVisualizador->Controls->RemoveAt(0);
			FormHijo->TopLevel = false;
			FormHijo->Dock = DockStyle::Fill;
			this->panelVisualizador->Controls->Add(FormHijo);
			this->panelVisualizador->Tag = FormHijo;
			FormHijo->Show();

		}

		private: System::Void btnListasDobles_Click(System::Object^ sender, System::EventArgs^ e) {
			this->AbrirPanel(gcnew VISUALIZADOR2022::Doble);
			//this->AbrirPanel(
			// colocar codigo 
			hideSubMenu();
		}
		private: System::Void btnListasSimples_Click(System::Object^ sender, System::EventArgs^ e) {
			this->AbrirPanel(gcnew VISUALIZADOR2022::ListaSimple);
			hideSubMenu();
		}
		private: System::Void btnColas_Click(System::Object^ sender, System::EventArgs^ e) {
			this->AbrirPanel(gcnew VISUALIZADOR2022::Cola);
			// colocar codigo 
			hideSubMenu();
		}
		private: System::Void btnPilas_Click(System::Object^ sender, System::EventArgs^ e) {
			this->AbrirPanel(gcnew VISUALIZADOR2022::Pila);
			// colocar codigo 
			hideSubMenu();
		}
		private: System::Void btnArbolesBinarios_Click(System::Object^ sender, System::EventArgs^ e) {
			this->AbrirPanel(gcnew VISUALIZADOR2022::BinaryTree);
			// colocar codigo 
			hideSubMenu();
		}
		private: System::Void btnAvl_Click(System::Object^ sender, System::EventArgs^ e) {
			
			// colocar codigo 
			hideSubMenu();
		}
		private: System::Void btnRedBlack_Click(System::Object^ sender, System::EventArgs^ e) {
			this->AbrirPanel(gcnew VISUALIZADOR2022::RedBlacks);
			// colocar codigo 
			hideSubMenu();
		}
		private: System::Void btnTablaHast_Click(System::Object^ sender, System::EventArgs^ e) {
			// colocar codigo 
			hideSubMenu();
		}
		private: System::Void btnMatrizPocoDensa_Click(System::Object^ sender, System::EventArgs^ e) {
			// colocar codigo 
			hideSubMenu();
		}
		private: System::Void btnWarshall_Click(System::Object^ sender, System::EventArgs^ e) {
			// colocar codigo 
			hideSubMenu();
		}
		private: System::Void btnFloryd_Click(System::Object^ sender, System::EventArgs^ e) {
			// colocar codigo 
			hideSubMenu();
		}
		private: System::Void btnDiskjtra_Click(System::Object^ sender, System::EventArgs^ e) {
			// colocar codigo 
			hideSubMenu();
		}

};



}
#pragma once

namespace Serwis2017 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Button^  tab1BtnAdd;
	private: System::Windows::Forms::Button^  tab1BtnModify;
	private: System::Windows::Forms::Button^  tab1BtnDelete;
	private: System::Windows::Forms::DataGridView^  tab1DgvUsers;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::CheckBox^  tab1CbPracownik;
	private: System::Windows::Forms::TextBox^  tab1TextUserName;
	private: System::Windows::Forms::TextBox^  tab1TextSecondName;
	private: System::Windows::Forms::TextBox^  tab1TextFirstName;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  tab1BtnSearch;
	private: System::Windows::Forms::TextBox^  tab1TextSearch;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  tab0TextOldPassword;
	private: System::Windows::Forms::Button^  tab0BtnCommitPassChange;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tab0TextNewPassword2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  tab0TextNewPassword;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::GroupBox^  tab1GbHours;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::TextBox^  tab1text6end;
	private: System::Windows::Forms::TextBox^  tab1text6start;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  tab1text5end;
	private: System::Windows::Forms::TextBox^  tab1text5start;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  tab1text4end;
	private: System::Windows::Forms::TextBox^  tab1text4start;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  tab1text3end;
	private: System::Windows::Forms::TextBox^  tab1text3start;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  tab1text2end;
	private: System::Windows::Forms::TextBox^  tab1text2start;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  tab1text1end;
	private: System::Windows::Forms::TextBox^  tab1text1start;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::GroupBox^  tab2Gb;

	private: System::Windows::Forms::Button^  tab2BtnAdd;
	private: System::Windows::Forms::Button^  tab2BtnModify;
	private: System::Windows::Forms::Button^  tab2BtnDelete;
	private: System::Windows::Forms::TextBox^  tab2TextDesc;
	private: System::Windows::Forms::TextBox^  tab2TextTime;
	private: System::Windows::Forms::TextBox^  tab2TextPrice;
	private: System::Windows::Forms::TextBox^  tab2TextName;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::DataGridView^  tab2Dgv;
	private: System::Windows::Forms::Button^  tab2BtnSearch;
	private: System::Windows::Forms::TextBox^  tab2TextSearch;
	private: System::Windows::Forms::Label^  label14;
			 
	public:
		String^ config = L"datasource=localhost;port=3306;username=root;password=lol123;database=gabinet";
		int userId;
		int pracownik;
		int recordId;
		MainWindow(int user)
		{
			InitializeComponent();
			userId = user;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tab2Gb = (gcnew System::Windows::Forms::GroupBox());
			this->tab2BtnAdd = (gcnew System::Windows::Forms::Button());
			this->tab2BtnModify = (gcnew System::Windows::Forms::Button());
			this->tab2BtnDelete = (gcnew System::Windows::Forms::Button());
			this->tab2TextDesc = (gcnew System::Windows::Forms::TextBox());
			this->tab2TextTime = (gcnew System::Windows::Forms::TextBox());
			this->tab2TextPrice = (gcnew System::Windows::Forms::TextBox());
			this->tab2TextName = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tab2Dgv = (gcnew System::Windows::Forms::DataGridView());
			this->tab2BtnSearch = (gcnew System::Windows::Forms::Button());
			this->tab2TextSearch = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tab1GbHours = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tab1text6end = (gcnew System::Windows::Forms::TextBox());
			this->tab1text6start = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tab1text5end = (gcnew System::Windows::Forms::TextBox());
			this->tab1text5start = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tab1text4end = (gcnew System::Windows::Forms::TextBox());
			this->tab1text4start = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tab1text3end = (gcnew System::Windows::Forms::TextBox());
			this->tab1text3start = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tab1text2end = (gcnew System::Windows::Forms::TextBox());
			this->tab1text2start = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tab1text1end = (gcnew System::Windows::Forms::TextBox());
			this->tab1text1start = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tab1BtnAdd = (gcnew System::Windows::Forms::Button());
			this->tab1BtnModify = (gcnew System::Windows::Forms::Button());
			this->tab1BtnDelete = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tab1CbPracownik = (gcnew System::Windows::Forms::CheckBox());
			this->tab1TextUserName = (gcnew System::Windows::Forms::TextBox());
			this->tab1TextSecondName = (gcnew System::Windows::Forms::TextBox());
			this->tab1TextFirstName = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tab1BtnSearch = (gcnew System::Windows::Forms::Button());
			this->tab1TextSearch = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tab1DgvUsers = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tab0TextOldPassword = (gcnew System::Windows::Forms::TextBox());
			this->tab0BtnCommitPassChange = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tab0TextNewPassword2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tab0TextNewPassword = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tab2Gb->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab2Dgv))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tab1GbHours->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab1DgvUsers))->BeginInit();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(810, 558);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->tab2Gb);
			this->tabPage3->Controls->Add(this->tab2Dgv);
			this->tabPage3->Controls->Add(this->tab2BtnSearch);
			this->tabPage3->Controls->Add(this->tab2TextSearch);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Location = System::Drawing::Point(4, 4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(802, 532);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Us�ugi";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tab2Gb
			// 
			this->tab2Gb->Controls->Add(this->tab2BtnAdd);
			this->tab2Gb->Controls->Add(this->tab2BtnModify);
			this->tab2Gb->Controls->Add(this->tab2BtnDelete);
			this->tab2Gb->Controls->Add(this->tab2TextDesc);
			this->tab2Gb->Controls->Add(this->tab2TextTime);
			this->tab2Gb->Controls->Add(this->tab2TextPrice);
			this->tab2Gb->Controls->Add(this->tab2TextName);
			this->tab2Gb->Controls->Add(this->label18);
			this->tab2Gb->Controls->Add(this->label17);
			this->tab2Gb->Controls->Add(this->label16);
			this->tab2Gb->Controls->Add(this->label15);
			this->tab2Gb->Location = System::Drawing::Point(6, 35);
			this->tab2Gb->Name = L"tab2Gb";
			this->tab2Gb->Size = System::Drawing::Size(355, 486);
			this->tab2Gb->TabIndex = 4;
			this->tab2Gb->TabStop = false;
			this->tab2Gb->Text = L"Zabiegi";
			// 
			// tab2BtnAdd
			// 
			this->tab2BtnAdd->Location = System::Drawing::Point(274, 457);
			this->tab2BtnAdd->Name = L"tab2BtnAdd";
			this->tab2BtnAdd->Size = System::Drawing::Size(75, 23);
			this->tab2BtnAdd->TabIndex = 10;
			this->tab2BtnAdd->Text = L"Dodaj";
			this->tab2BtnAdd->UseVisualStyleBackColor = true;
			this->tab2BtnAdd->Click += gcnew System::EventHandler(this, &MainWindow::tab2BtnAdd_Click);
			// 
			// tab2BtnModify
			// 
			this->tab2BtnModify->Enabled = false;
			this->tab2BtnModify->Location = System::Drawing::Point(137, 457);
			this->tab2BtnModify->Name = L"tab2BtnModify";
			this->tab2BtnModify->Size = System::Drawing::Size(75, 23);
			this->tab2BtnModify->TabIndex = 9;
			this->tab2BtnModify->Text = L"Modyfikuj";
			this->tab2BtnModify->UseVisualStyleBackColor = true;
			this->tab2BtnModify->Click += gcnew System::EventHandler(this, &MainWindow::tab2BtnModify_Click);
			// 
			// tab2BtnDelete
			// 
			this->tab2BtnDelete->Enabled = false;
			this->tab2BtnDelete->Location = System::Drawing::Point(9, 457);
			this->tab2BtnDelete->Name = L"tab2BtnDelete";
			this->tab2BtnDelete->Size = System::Drawing::Size(75, 23);
			this->tab2BtnDelete->TabIndex = 8;
			this->tab2BtnDelete->Text = L"Usu�";
			this->tab2BtnDelete->UseVisualStyleBackColor = true;
			this->tab2BtnDelete->Click += gcnew System::EventHandler(this, &MainWindow::tab2BtnDelete_Click);
			// 
			// tab2TextDesc
			// 
			this->tab2TextDesc->Location = System::Drawing::Point(9, 134);
			this->tab2TextDesc->Multiline = true;
			this->tab2TextDesc->Name = L"tab2TextDesc";
			this->tab2TextDesc->Size = System::Drawing::Size(340, 317);
			this->tab2TextDesc->TabIndex = 7;
			// 
			// tab2TextTime
			// 
			this->tab2TextTime->Location = System::Drawing::Point(52, 71);
			this->tab2TextTime->Name = L"tab2TextTime";
			this->tab2TextTime->Size = System::Drawing::Size(102, 20);
			this->tab2TextTime->TabIndex = 6;
			// 
			// tab2TextPrice
			// 
			this->tab2TextPrice->Location = System::Drawing::Point(52, 45);
			this->tab2TextPrice->Name = L"tab2TextPrice";
			this->tab2TextPrice->Size = System::Drawing::Size(100, 20);
			this->tab2TextPrice->TabIndex = 5;
			// 
			// tab2TextName
			// 
			this->tab2TextName->Location = System::Drawing::Point(52, 19);
			this->tab2TextName->Name = L"tab2TextName";
			this->tab2TextName->Size = System::Drawing::Size(100, 20);
			this->tab2TextName->TabIndex = 4;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 108);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(28, 13);
			this->label18->TabIndex = 3;
			this->label18->Text = L"Opis";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 74);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(30, 13);
			this->label17->TabIndex = 2;
			this->label17->Text = L"Czas";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 48);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(32, 13);
			this->label16->TabIndex = 1;
			this->label16->Text = L"Cena";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 22);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(40, 13);
			this->label15->TabIndex = 0;
			this->label15->Text = L"Nazwa";
			// 
			// tab2Dgv
			// 
			this->tab2Dgv->AllowUserToAddRows = false;
			this->tab2Dgv->AllowUserToDeleteRows = false;
			this->tab2Dgv->AllowUserToOrderColumns = true;
			this->tab2Dgv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tab2Dgv->Location = System::Drawing::Point(367, 6);
			this->tab2Dgv->Name = L"tab2Dgv";
			this->tab2Dgv->ReadOnly = true;
			this->tab2Dgv->Size = System::Drawing::Size(429, 515);
			this->tab2Dgv->TabIndex = 3;
			this->tab2Dgv->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainWindow::tab2Dgv_CellClick);
			// 
			// tab2BtnSearch
			// 
			this->tab2BtnSearch->Location = System::Drawing::Point(286, 6);
			this->tab2BtnSearch->Name = L"tab2BtnSearch";
			this->tab2BtnSearch->Size = System::Drawing::Size(75, 23);
			this->tab2BtnSearch->TabIndex = 2;
			this->tab2BtnSearch->Text = L"Szukaj";
			this->tab2BtnSearch->UseVisualStyleBackColor = true;
			this->tab2BtnSearch->Click += gcnew System::EventHandler(this, &MainWindow::tab2BtnSearch_Click);
			// 
			// tab2TextSearch
			// 
			this->tab2TextSearch->Location = System::Drawing::Point(52, 8);
			this->tab2TextSearch->Name = L"tab2TextSearch";
			this->tab2TextSearch->Size = System::Drawing::Size(218, 20);
			this->tab2TextSearch->TabIndex = 1;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 11);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(40, 13);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Zabieg";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tab1GbHours);
			this->tabPage2->Controls->Add(this->tab1BtnAdd);
			this->tabPage2->Controls->Add(this->tab1BtnModify);
			this->tabPage2->Controls->Add(this->tab1BtnDelete);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->tab1BtnSearch);
			this->tabPage2->Controls->Add(this->tab1TextSearch);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->tab1DgvUsers);
			this->tabPage2->Location = System::Drawing::Point(4, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(802, 532);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Pracownicy";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tab1GbHours
			// 
			this->tab1GbHours->Controls->Add(this->groupBox4);
			this->tab1GbHours->Controls->Add(this->tab1text6end);
			this->tab1GbHours->Controls->Add(this->tab1text6start);
			this->tab1GbHours->Controls->Add(this->label13);
			this->tab1GbHours->Controls->Add(this->tab1text5end);
			this->tab1GbHours->Controls->Add(this->tab1text5start);
			this->tab1GbHours->Controls->Add(this->label12);
			this->tab1GbHours->Controls->Add(this->tab1text4end);
			this->tab1GbHours->Controls->Add(this->tab1text4start);
			this->tab1GbHours->Controls->Add(this->label11);
			this->tab1GbHours->Controls->Add(this->tab1text3end);
			this->tab1GbHours->Controls->Add(this->tab1text3start);
			this->tab1GbHours->Controls->Add(this->label10);
			this->tab1GbHours->Controls->Add(this->tab1text2end);
			this->tab1GbHours->Controls->Add(this->tab1text2start);
			this->tab1GbHours->Controls->Add(this->label9);
			this->tab1GbHours->Controls->Add(this->tab1text1end);
			this->tab1GbHours->Controls->Add(this->tab1text1start);
			this->tab1GbHours->Controls->Add(this->label8);
			this->tab1GbHours->Location = System::Drawing::Point(10, 179);
			this->tab1GbHours->Name = L"tab1GbHours";
			this->tab1GbHours->Size = System::Drawing::Size(436, 318);
			this->tab1GbHours->TabIndex = 8;
			this->tab1GbHours->TabStop = false;
			this->tab1GbHours->Text = L"Godziny pracy";
			this->tab1GbHours->Visible = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button4);
			this->groupBox4->Controls->Add(this->button3);
			this->groupBox4->Controls->Add(this->button2);
			this->groupBox4->Controls->Add(this->button1);
			this->groupBox4->Location = System::Drawing::Point(15, 179);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(414, 126);
			this->groupBox4->TabIndex = 21;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Szablony";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(324, 19);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"10-18";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainWindow::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(214, 19);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"9-17";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainWindow::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(115, 19);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"8-16";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(9, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"7-15";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			// 
			// tab1text6end
			// 
			this->tab1text6end->Location = System::Drawing::Point(283, 153);
			this->tab1text6end->Name = L"tab1text6end";
			this->tab1text6end->Size = System::Drawing::Size(147, 20);
			this->tab1text6end->TabIndex = 17;
			// 
			// tab1text6start
			// 
			this->tab1text6start->Location = System::Drawing::Point(130, 153);
			this->tab1text6start->Name = L"tab1text6start";
			this->tab1text6start->Size = System::Drawing::Size(147, 20);
			this->tab1text6start->TabIndex = 16;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(21, 156);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Sobota";
			// 
			// tab1text5end
			// 
			this->tab1text5end->Location = System::Drawing::Point(283, 127);
			this->tab1text5end->Name = L"tab1text5end";
			this->tab1text5end->Size = System::Drawing::Size(147, 20);
			this->tab1text5end->TabIndex = 14;
			// 
			// tab1text5start
			// 
			this->tab1text5start->Location = System::Drawing::Point(130, 127);
			this->tab1text5start->Name = L"tab1text5start";
			this->tab1text5start->Size = System::Drawing::Size(147, 20);
			this->tab1text5start->TabIndex = 13;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(21, 130);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(37, 13);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Pi�tek";
			// 
			// tab1text4end
			// 
			this->tab1text4end->Location = System::Drawing::Point(283, 101);
			this->tab1text4end->Name = L"tab1text4end";
			this->tab1text4end->Size = System::Drawing::Size(147, 20);
			this->tab1text4end->TabIndex = 11;
			// 
			// tab1text4start
			// 
			this->tab1text4start->Location = System::Drawing::Point(130, 101);
			this->tab1text4start->Name = L"tab1text4start";
			this->tab1text4start->Size = System::Drawing::Size(147, 20);
			this->tab1text4start->TabIndex = 10;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(21, 104);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 13);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Czwartek";
			// 
			// tab1text3end
			// 
			this->tab1text3end->Location = System::Drawing::Point(283, 75);
			this->tab1text3end->Name = L"tab1text3end";
			this->tab1text3end->Size = System::Drawing::Size(147, 20);
			this->tab1text3end->TabIndex = 8;
			// 
			// tab1text3start
			// 
			this->tab1text3start->Location = System::Drawing::Point(130, 75);
			this->tab1text3start->Name = L"tab1text3start";
			this->tab1text3start->Size = System::Drawing::Size(147, 20);
			this->tab1text3start->TabIndex = 7;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(21, 78);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(35, 13);
			this->label10->TabIndex = 6;
			this->label10->Text = L"�roda";
			// 
			// tab1text2end
			// 
			this->tab1text2end->Location = System::Drawing::Point(283, 49);
			this->tab1text2end->Name = L"tab1text2end";
			this->tab1text2end->Size = System::Drawing::Size(147, 20);
			this->tab1text2end->TabIndex = 5;
			// 
			// tab1text2start
			// 
			this->tab1text2start->Location = System::Drawing::Point(130, 49);
			this->tab1text2start->Name = L"tab1text2start";
			this->tab1text2start->Size = System::Drawing::Size(147, 20);
			this->tab1text2start->TabIndex = 4;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(21, 52);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(42, 13);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Wtorek";
			// 
			// tab1text1end
			// 
			this->tab1text1end->Location = System::Drawing::Point(283, 23);
			this->tab1text1end->Name = L"tab1text1end";
			this->tab1text1end->Size = System::Drawing::Size(147, 20);
			this->tab1text1end->TabIndex = 2;
			// 
			// tab1text1start
			// 
			this->tab1text1start->Location = System::Drawing::Point(130, 23);
			this->tab1text1start->Name = L"tab1text1start";
			this->tab1text1start->Size = System::Drawing::Size(147, 20);
			this->tab1text1start->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(21, 26);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(69, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Poniedzia�ek";
			// 
			// tab1BtnAdd
			// 
			this->tab1BtnAdd->Location = System::Drawing::Point(350, 503);
			this->tab1BtnAdd->Name = L"tab1BtnAdd";
			this->tab1BtnAdd->Size = System::Drawing::Size(75, 23);
			this->tab1BtnAdd->TabIndex = 7;
			this->tab1BtnAdd->Text = L"Dodaj";
			this->tab1BtnAdd->UseVisualStyleBackColor = true;
			this->tab1BtnAdd->Click += gcnew System::EventHandler(this, &MainWindow::tab1BtnAdd_Click);
			// 
			// tab1BtnModify
			// 
			this->tab1BtnModify->Enabled = false;
			this->tab1BtnModify->Location = System::Drawing::Point(181, 503);
			this->tab1BtnModify->Name = L"tab1BtnModify";
			this->tab1BtnModify->Size = System::Drawing::Size(75, 23);
			this->tab1BtnModify->TabIndex = 6;
			this->tab1BtnModify->Text = L"Modyfikuj";
			this->tab1BtnModify->UseVisualStyleBackColor = true;
			this->tab1BtnModify->Click += gcnew System::EventHandler(this, &MainWindow::tab1BtnModify_Click);
			// 
			// tab1BtnDelete
			// 
			this->tab1BtnDelete->Enabled = false;
			this->tab1BtnDelete->Location = System::Drawing::Point(19, 503);
			this->tab1BtnDelete->Name = L"tab1BtnDelete";
			this->tab1BtnDelete->Size = System::Drawing::Size(75, 23);
			this->tab1BtnDelete->TabIndex = 5;
			this->tab1BtnDelete->Text = L"Usu�";
			this->tab1BtnDelete->UseVisualStyleBackColor = true;
			this->tab1BtnDelete->Click += gcnew System::EventHandler(this, &MainWindow::tab1BtnDelete_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tab1CbPracownik);
			this->groupBox2->Controls->Add(this->tab1TextUserName);
			this->groupBox2->Controls->Add(this->tab1TextSecondName);
			this->groupBox2->Controls->Add(this->tab1TextFirstName);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(10, 35);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(436, 138);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Edycja danych";
			// 
			// tab1CbPracownik
			// 
			this->tab1CbPracownik->AutoSize = true;
			this->tab1CbPracownik->Location = System::Drawing::Point(339, 39);
			this->tab1CbPracownik->Name = L"tab1CbPracownik";
			this->tab1CbPracownik->Size = System::Drawing::Size(76, 17);
			this->tab1CbPracownik->TabIndex = 6;
			this->tab1CbPracownik->Text = L"Pracownik";
			this->tab1CbPracownik->UseVisualStyleBackColor = true;
			this->tab1CbPracownik->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::tab1CbPracownik_CheckedChanged);
			// 
			// tab1TextUserName
			// 
			this->tab1TextUserName->Location = System::Drawing::Point(117, 69);
			this->tab1TextUserName->Name = L"tab1TextUserName";
			this->tab1TextUserName->Size = System::Drawing::Size(203, 20);
			this->tab1TextUserName->TabIndex = 5;
			// 
			// tab1TextSecondName
			// 
			this->tab1TextSecondName->Location = System::Drawing::Point(117, 39);
			this->tab1TextSecondName->Name = L"tab1TextSecondName";
			this->tab1TextSecondName->Size = System::Drawing::Size(203, 20);
			this->tab1TextSecondName->TabIndex = 4;
			// 
			// tab1TextFirstName
			// 
			this->tab1TextFirstName->Location = System::Drawing::Point(117, 13);
			this->tab1TextFirstName->Name = L"tab1TextFirstName";
			this->tab1TextFirstName->Size = System::Drawing::Size(203, 20);
			this->tab1TextFirstName->TabIndex = 3;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 72);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(105, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Nazwa u�ytkownika:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 46);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Nazwisko:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Imi�:";
			// 
			// tab1BtnSearch
			// 
			this->tab1BtnSearch->Location = System::Drawing::Point(371, 6);
			this->tab1BtnSearch->Name = L"tab1BtnSearch";
			this->tab1BtnSearch->Size = System::Drawing::Size(75, 23);
			this->tab1BtnSearch->TabIndex = 3;
			this->tab1BtnSearch->Text = L"Szukaj";
			this->tab1BtnSearch->UseVisualStyleBackColor = true;
			this->tab1BtnSearch->Click += gcnew System::EventHandler(this, &MainWindow::btnSearch_Click);
			// 
			// tab1TextSearch
			// 
			this->tab1TextSearch->Location = System::Drawing::Point(68, 6);
			this->tab1TextSearch->Name = L"tab1TextSearch";
			this->tab1TextSearch->Size = System::Drawing::Size(297, 20);
			this->tab1TextSearch->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 6);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Wyszukaj:";
			// 
			// tab1DgvUsers
			// 
			this->tab1DgvUsers->AllowUserToAddRows = false;
			this->tab1DgvUsers->AllowUserToDeleteRows = false;
			this->tab1DgvUsers->AllowUserToOrderColumns = true;
			this->tab1DgvUsers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tab1DgvUsers->Location = System::Drawing::Point(452, 6);
			this->tab1DgvUsers->Name = L"tab1DgvUsers";
			this->tab1DgvUsers->ReadOnly = true;
			this->tab1DgvUsers->RowHeadersWidth = 30;
			this->tab1DgvUsers->Size = System::Drawing::Size(344, 520);
			this->tab1DgvUsers->TabIndex = 0;
			this->tab1DgvUsers->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainWindow::dgvUsers_CellClick);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(802, 532);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Zmiana Hasla";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tab0TextOldPassword);
			this->groupBox1->Controls->Add(this->tab0BtnCommitPassChange);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->tab0TextNewPassword2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->tab0TextNewPassword);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Location = System::Drawing::Point(264, 171);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(113, 175);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Zmiana has�a";
			// 
			// tab0TextOldPassword
			// 
			this->tab0TextOldPassword->Location = System::Drawing::Point(6, 36);
			this->tab0TextOldPassword->Name = L"tab0TextOldPassword";
			this->tab0TextOldPassword->Size = System::Drawing::Size(100, 20);
			this->tab0TextOldPassword->TabIndex = 3;
			this->tab0TextOldPassword->TextChanged += gcnew System::EventHandler(this, &MainWindow::textOldPassword_TextChanged);
			// 
			// tab0BtnCommitPassChange
			// 
			this->tab0BtnCommitPassChange->Enabled = false;
			this->tab0BtnCommitPassChange->Location = System::Drawing::Point(19, 146);
			this->tab0BtnCommitPassChange->Name = L"tab0BtnCommitPassChange";
			this->tab0BtnCommitPassChange->Size = System::Drawing::Size(75, 23);
			this->tab0BtnCommitPassChange->TabIndex = 6;
			this->tab0BtnCommitPassChange->Text = L"Zatwierd�";
			this->tab0BtnCommitPassChange->UseVisualStyleBackColor = true;
			this->tab0BtnCommitPassChange->Click += gcnew System::EventHandler(this, &MainWindow::btnCommitPassChange_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Stare has�o:";
			// 
			// tab0TextNewPassword2
			// 
			this->tab0TextNewPassword2->Location = System::Drawing::Point(6, 114);
			this->tab0TextNewPassword2->Name = L"tab0TextNewPassword2";
			this->tab0TextNewPassword2->Size = System::Drawing::Size(100, 20);
			this->tab0TextNewPassword2->TabIndex = 5;
			this->tab0TextNewPassword2->TextChanged += gcnew System::EventHandler(this, &MainWindow::textNewPassword2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nowe has�o:";
			// 
			// tab0TextNewPassword
			// 
			this->tab0TextNewPassword->Location = System::Drawing::Point(6, 75);
			this->tab0TextNewPassword->Name = L"tab0TextNewPassword";
			this->tab0TextNewPassword->Size = System::Drawing::Size(100, 20);
			this->tab0TextNewPassword->TabIndex = 4;
			this->tab0TextNewPassword->TextChanged += gcnew System::EventHandler(this, &MainWindow::textNewPassword_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Powt�rz has�o:";
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(834, 582);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->tabControl1->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tab2Gb->ResumeLayout(false);
			this->tab2Gb->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab2Dgv))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tab1GbHours->ResumeLayout(false);
			this->tab1GbHours->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab1DgvUsers))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private:
		Void btnCommitPassChange_Show();
		Void showGrid();
		Void userType();
		Void clearBox(Control^ list);
		Void fillBoxWithWorkTime(int beginTime);
		Void fillGrid(TextBox^ textBox, DataGridView^ dataGrid);

	private: System::Void textOldPassword_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		btnCommitPassChange_Show();
	}
	private: System::Void textNewPassword_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		btnCommitPassChange_Show();
	}
	private: System::Void textNewPassword2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		btnCommitPassChange_Show();
	}
	private: System::Void btnCommitPassChange_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btnSearch_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void dgvUsers_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e);
	private: System::Void tab1BtnAdd_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void tab1BtnModify_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void tab1BtnDelete_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void tab1CbPracownik_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (tab1CbPracownik->Checked)
			tab1GbHours->Visible = true;
		else
			tab1GbHours->Visible = false;
		clearBox(tab1GbHours);
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		fillBoxWithWorkTime(7);
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		fillBoxWithWorkTime(8);
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		fillBoxWithWorkTime(9);
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		fillBoxWithWorkTime(10);
	}
	private: System::Void tab2BtnSearch_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void tab2BtnDelete_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void tab2BtnModify_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void tab2BtnAdd_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void tab2Dgv_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e);
};
}

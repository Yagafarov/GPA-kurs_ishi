#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fanQoshishToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dasturdanChiqishToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ bizHaqimizdaToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ToolStripMenuItem^ tungiFonToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ kunduzgiFonToolStripMenuItem;





	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fanQoshishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tungiFonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kunduzgiFonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dasturdanChiqishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bizHaqimizdaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel7->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(21, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Padding = System::Windows::Forms::Padding(15);
			this->panel1->Size = System::Drawing::Size(260, 358);
			this->panel1->TabIndex = 0;
			this->panel1->Visible = false;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(38, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(184, 25);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Ro\'yxatdan o\'tish";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(22, 285);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 34);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Ro\'yxatdan o\'tish";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(59, 246);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(142, 21);
			this->linkLabel1->TabIndex = 6;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Hisobingiz bormi\?";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel1_LinkClicked);
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->Location = System::Drawing::Point(22, 207);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(220, 27);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 183);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 21);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Password";
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Location = System::Drawing::Point(22, 140);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(220, 27);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 21);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Email";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(22, 76);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(220, 27);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"User name";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Location = System::Drawing::Point(3, 7);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(319, 399);
			this->panel3->TabIndex = 10;
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label9->Location = System::Drawing::Point(54, 160);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(227, 81);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Bu tizim orqali talaba o\'z GPA balini hisoblab olishi mumkin.\r\n";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(3, 123);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(313, 25);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Kirish";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->linkLabel2);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Location = System::Drawing::Point(417, 27);
			this->panel2->Name = L"panel2";
			this->panel2->Padding = System::Windows::Forms::Padding(15);
			this->panel2->Size = System::Drawing::Size(262, 358);
			this->panel2->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(97, 15);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 25);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Kirish";
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(22, 239);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(222, 34);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Kirish";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// linkLabel2
			// 
			this->linkLabel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(59, 193);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(148, 21);
			this->linkLabel2->TabIndex = 6;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Hisobingiz yo\'qmi\?";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel2_LinkClicked);
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox4->Location = System::Drawing::Point(18, 76);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(222, 27);
			this->textBox4->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(18, 116);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 21);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Password";
			// 
			// textBox6
			// 
			this->textBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox6->Location = System::Drawing::Point(18, 140);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(222, 27);
			this->textBox6->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(18, 52);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(92, 21);
			this->label8->TabIndex = 0;
			this->label8->Text = L"User name";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->panel1);
			this->panel4->Controls->Add(this->panel3);
			this->panel4->Controls->Add(this->panel2);
			this->panel4->Location = System::Drawing::Point(15, 15);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(701, 453);
			this->panel4->TabIndex = 11;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Controls->Add(this->panel7);
			this->panel5->Controls->Add(this->menuStrip1);
			this->panel5->Location = System::Drawing::Point(0, 1);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(737, 491);
			this->panel5->TabIndex = 12;
			this->panel5->Visible = false;
			// 
			// panel6
			// 
			this->panel6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel6->Controls->Add(this->button5);
			this->panel6->Controls->Add(this->button4);
			this->panel6->Controls->Add(this->dataGridView1);
			this->panel6->Controls->Add(this->button3);
			this->panel6->Controls->Add(this->textBox7);
			this->panel6->Controls->Add(this->textBox5);
			this->panel6->Controls->Add(this->label11);
			this->panel6->Controls->Add(this->label10);
			this->panel6->Location = System::Drawing::Point(12, 28);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(380, 390);
			this->panel6->TabIndex = 1;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(213, 339);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(86, 33);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Tozalash";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(60, 339);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(147, 33);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Hisoblash";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::ColumnHeader;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->id, this->col1,
					this->col2
			});
			this->dataGridView1->Location = System::Drawing::Point(61, 172);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView1->Size = System::Drawing::Size(237, 150);
			this->dataGridView1->TabIndex = 5;
			// 
			// id
			// 
			this->id->HeaderText = L"Id";
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			this->id->Width = 51;
			// 
			// col1
			// 
			this->col1->HeaderText = L"Ball";
			this->col1->Name = L"col1";
			this->col1->ReadOnly = true;
			this->col1->Width = 61;
			// 
			// col2
			// 
			this->col2->HeaderText = L"Kredit";
			this->col2->Name = L"col2";
			this->col2->ReadOnly = true;
			this->col2->Width = 80;
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(61, 113);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(237, 31);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Keyingisi";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox7
			// 
			this->textBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox7->Location = System::Drawing::Point(232, 65);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(66, 27);
			this->textBox7->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(61, 65);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(66, 27);
			this->textBox5->TabIndex = 2;
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(198, 32);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(101, 21);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Fan-1 kredit";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(57, 32);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(85, 21);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Fan-1 ball";
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->label15);
			this->panel7->Controls->Add(this->label14);
			this->panel7->Controls->Add(this->label13);
			this->panel7->Controls->Add(this->label12);
			this->panel7->Location = System::Drawing::Point(398, 28);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(295, 390);
			this->panel7->TabIndex = 2;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(42, 147);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(113, 21);
			this->label15->TabIndex = 3;
			this->label15->Text = L"GPA balingiz:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(42, 112);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(115, 21);
			this->label14->TabIndex = 2;
			this->label14->Text = L"Kreditlar soni: ";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(42, 77);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(99, 21);
			this->label13->TabIndex = 1;
			this->label13->Text = L"Fanlar soni: ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(42, 26);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(171, 19);
			this->label12->TabIndex = 0;
			this->label12->Text = L"GPA balingiz haqida";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fanQoshishToolStripMenuItem,
					this->dasturdanChiqishToolStripMenuItem, this->bizHaqimizdaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(737, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fanQoshishToolStripMenuItem
			// 
			this->fanQoshishToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->tungiFonToolStripMenuItem,
					this->kunduzgiFonToolStripMenuItem
			});
			this->fanQoshishToolStripMenuItem->Name = L"fanQoshishToolStripMenuItem";
			this->fanQoshishToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->fanQoshishToolStripMenuItem->Text = L"Bosh sahifa";
			// 
			// tungiFonToolStripMenuItem
			// 
			this->tungiFonToolStripMenuItem->Name = L"tungiFonToolStripMenuItem";
			this->tungiFonToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->tungiFonToolStripMenuItem->Text = L"Tungi fon";
			this->tungiFonToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::tungiFonToolStripMenuItem_Click);
			// 
			// kunduzgiFonToolStripMenuItem
			// 
			this->kunduzgiFonToolStripMenuItem->Name = L"kunduzgiFonToolStripMenuItem";
			this->kunduzgiFonToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->kunduzgiFonToolStripMenuItem->Text = L"Kunduzgi fon";
			this->kunduzgiFonToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::kunduzgiFonToolStripMenuItem_Click);
			// 
			// dasturdanChiqishToolStripMenuItem
			// 
			this->dasturdanChiqishToolStripMenuItem->Name = L"dasturdanChiqishToolStripMenuItem";
			this->dasturdanChiqishToolStripMenuItem->Size = System::Drawing::Size(114, 20);
			this->dasturdanChiqishToolStripMenuItem->Text = L"Dasturdan chiqish";
			this->dasturdanChiqishToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::dasturdanChiqishToolStripMenuItem_Click);
			// 
			// bizHaqimizdaToolStripMenuItem
			// 
			this->bizHaqimizdaToolStripMenuItem->Name = L"bizHaqimizdaToolStripMenuItem";
			this->bizHaqimizdaToolStripMenuItem->Size = System::Drawing::Size(92, 20);
			this->bizHaqimizdaToolStripMenuItem->Text = L"Biz haqimizda";
			this->bizHaqimizdaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::bizHaqimizdaToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(737, 491);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ANODRA";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->panel1->Visible = true;
		this->panel2->Visible = false;
		this->panel3->Location = System::Drawing::Point(354, 14);
		label7->Text = "Ro'yxatdan o'tish";
	}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->panel1->Visible = false;
		this->panel2->Visible = true;
		this->panel3->Location = System::Drawing::Point(34, 14);
		label7->Text = "Kirish";

}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4->Text == textBox6->Text) {
		panel4->Visible = false;
		panel5->Visible = true;
	}
	else {
		MessageBox::Show("Login yoki parol noto'g'ri");
		textBox4->Clear();
		textBox6->Clear();
	}
	
}
public:
	int i=0;
	int* balls = new int(2);
	int* kredits = new int(2);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox5->Text->Length == 0) {
			textBox5->Text = "0";
		}
		if (textBox7->Text->Length == 0) {
			textBox7->Text = "0";
		}
		String^kredit =textBox7->Text;
		String^ball = textBox5->Text;
		
		balls[i] = Convert::ToInt32(ball);
		kredits[i] = Convert::ToInt32(kredit);
		dataGridView1->Rows->Add();
		dataGridView1->Rows[i]->Cells[0]->Value = i + 1;
		dataGridView1->Rows[i]->Cells[1]->Value = ball;
		dataGridView1->Rows[i]->Cells[2]->Value = kredit;
		label10->Text = "Fan-" + (i + 2) + " ball";
		label11->Text = "Fan-" + (i + 2) + " kredit";
		i++;
	
}
private: 
	void clearBoxs() {
	textBox5->Clear();
	textBox7->Clear();
	label13->Text = "Fanlar soni:";
	label14->Text = "Kreditlar soni:";
	label15->Text = "GPA balingiz:";
	dataGridView1->Rows->Clear();
	i = 0;
	int* balls = new int(2);
	int* kredits = new int(2);
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	clearBoxs();
}
public:	   int sum(int arr[], int n)
	   {
		   int sum = 0; // initialize sum

		   // Iterate through all elements
		   // and add them to sum
		   for (int i = 0; i < n; i++)
			   sum += arr[i];

		   return sum;
	   }
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int count =  sum(kredits,i);
	if (count % 30 != 0) {
		MessageBox::Show("Kreditlar taqsimoti noto'g'ri tuzilgan.\nIltimos qaytadan urunib ko'ring", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		clearBoxs();
	}
	else {
		int gpa =0;
		label13->Text = "Fanlar soni: " +i;
		label14->Text = "Kreditlar soni: " + count;
		for (int l = 0; l < i; l++) {
			gpa += balls[l] * kredits[l];
		}
		label15->Text = "GPA balingiz: " + (Math::Round(gpa / count, 2));
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	panel4->Visible = false;
	panel5->Visible = true;
}
private: System::Void dasturdanChiqishToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void tungiFonToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Black;
	this->ForeColor = Color::Blue;
}
private: System::Void kunduzgiFonToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::White;
	this->ForeColor = Color::Black;
}
private: System::Void bizHaqimizdaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Process::Start("http://www.facebook.com");
}
};
}

#pragma once
#include"QLGive.h"
#include"Help_tk.h"
#include"MuonTra.h"
namespace ProjectLibrarian {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for QLGive
	/// </summary>
	public ref class QLGive : public System::Windows::Forms::Form
	{
	public:
		QLGive(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~QLGive()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;

	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  txtNT;


	private: System::Windows::Forms::TextBox^  txtNM;

	private: System::Windows::Forms::TextBox^  txtMS;

	private: System::Windows::Forms::TextBox^  txtDG;

	private: System::Windows::Forms::TextBox^  txtPM;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TextBox^  txtTinhtrang;


	private: System::Windows::Forms::TextBox^  txtNgayTra;

	private: System::Windows::Forms::TextBox^  txtNgaymuon;

	private: System::Windows::Forms::TextBox^  txtSoluongtra;

	private: System::Windows::Forms::TextBox^  txtMaSach;

	private: System::Windows::Forms::TextBox^  txtDocgia;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::DataGridView^  GridViewGive1;


	private: System::Windows::Forms::GroupBox^  groupBox1;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridView^  GridViewGive2;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button5;


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
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtNT = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtNM = (gcnew System::Windows::Forms::TextBox());
			this->txtPM = (gcnew System::Windows::Forms::TextBox());
			this->txtMS = (gcnew System::Windows::Forms::TextBox());
			this->txtDG = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtTinhtrang = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtNgayTra = (gcnew System::Windows::Forms::TextBox());
			this->txtDocgia = (gcnew System::Windows::Forms::TextBox());
			this->txtNgaymuon = (gcnew System::Windows::Forms::TextBox());
			this->txtMaSach = (gcnew System::Windows::Forms::TextBox());
			this->txtSoluongtra = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->GridViewGive1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->GridViewGive2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridViewGive1))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridViewGive2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(12, 43);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(935, 421);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button9);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(927, 388);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Phiếu Mượn";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &QLGive::tabPage1_Click);
			// 
			// button9
			// 
			this->button9->ForeColor = System::Drawing::Color::ForestGreen;
			this->button9->Location = System::Drawing::Point(680, 281);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(87, 67);
			this->button9->TabIndex = 9;
			this->button9->Text = L"Hủy";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->txtNT);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->txtNM);
			this->groupBox1->Controls->Add(this->txtPM);
			this->groupBox1->Controls->Add(this->txtMS);
			this->groupBox1->Controls->Add(this->txtDG);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Teal;
			this->groupBox1->Location = System::Drawing::Point(268, 19);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(429, 227);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Phiếu Mượn";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Mã Phiếu Mượn :";
			this->label1->Click += gcnew System::EventHandler(this, &QLGive::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Mã Độc Giả :";
			this->label2->Click += gcnew System::EventHandler(this, &QLGive::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(23, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 22);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Mã Sách :";
			this->label3->Click += gcnew System::EventHandler(this, &QLGive::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 22);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Ngày Mượn :";
			this->label4->Click += gcnew System::EventHandler(this, &QLGive::label4_Click);
			// 
			// txtNT
			// 
			this->txtNT->Location = System::Drawing::Point(191, 171);
			this->txtNT->Name = L"txtNT";
			this->txtNT->Size = System::Drawing::Size(221, 27);
			this->txtNT->TabIndex = 6;
			this->txtNT->TextChanged += gcnew System::EventHandler(this, &QLGive::textBox5_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 179);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 22);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Ngày Trả :";
			this->label5->Click += gcnew System::EventHandler(this, &QLGive::label5_Click);
			// 
			// txtNM
			// 
			this->txtNM->Location = System::Drawing::Point(191, 132);
			this->txtNM->Name = L"txtNM";
			this->txtNM->Size = System::Drawing::Size(221, 27);
			this->txtNM->TabIndex = 6;
			this->txtNM->TextChanged += gcnew System::EventHandler(this, &QLGive::textBox4_TextChanged);
			// 
			// txtPM
			// 
			this->txtPM->Location = System::Drawing::Point(191, 24);
			this->txtPM->Name = L"txtPM";
			this->txtPM->Size = System::Drawing::Size(221, 27);
			this->txtPM->TabIndex = 6;
			this->txtPM->TextChanged += gcnew System::EventHandler(this, &QLGive::textBox1_TextChanged);
			// 
			// txtMS
			// 
			this->txtMS->Location = System::Drawing::Point(191, 96);
			this->txtMS->Name = L"txtMS";
			this->txtMS->Size = System::Drawing::Size(221, 27);
			this->txtMS->TabIndex = 6;
			this->txtMS->TextChanged += gcnew System::EventHandler(this, &QLGive::textBox3_TextChanged);
			// 
			// txtDG
			// 
			this->txtDG->Location = System::Drawing::Point(191, 64);
			this->txtDG->Name = L"txtDG";
			this->txtDG->Size = System::Drawing::Size(221, 27);
			this->txtDG->TabIndex = 6;
			this->txtDG->TextChanged += gcnew System::EventHandler(this, &QLGive::textBox2_TextChanged);
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::Color::ForestGreen;
			this->button3->Location = System::Drawing::Point(513, 281);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(85, 67);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Xóa";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &QLGive::button3_Click);
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::ForestGreen;
			this->button2->Location = System::Drawing::Point(346, 281);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 67);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Sửa";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &QLGive::button2_Click);
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::ForestGreen;
			this->button1->Location = System::Drawing::Point(195, 281);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 67);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Thêm";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &QLGive::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(927, 388);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Trả Sách";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->ForeColor = System::Drawing::Color::ForestGreen;
			this->button5->Location = System::Drawing::Point(161, 311);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 53);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Thêm";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &QLGive::button5_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->txtTinhtrang);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->txtNgayTra);
			this->groupBox2->Controls->Add(this->txtDocgia);
			this->groupBox2->Controls->Add(this->txtNgaymuon);
			this->groupBox2->Controls->Add(this->txtMaSach);
			this->groupBox2->Controls->Add(this->txtSoluongtra);
			this->groupBox2->ForeColor = System::Drawing::Color::Teal;
			this->groupBox2->Location = System::Drawing::Point(125, 34);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(530, 243);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Trả Sách";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(59, 18);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(108, 20);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Mã Độc Giả :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(59, 57);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 20);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Mã Sách :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(53, 98);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(125, 20);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Số Lượng Trả : ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(57, 131);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(103, 20);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Ngày Mượn :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(59, 161);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(87, 20);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Ngày Trả :";
			// 
			// txtTinhtrang
			// 
			this->txtTinhtrang->Location = System::Drawing::Point(184, 198);
			this->txtTinhtrang->Name = L"txtTinhtrang";
			this->txtTinhtrang->Size = System::Drawing::Size(221, 27);
			this->txtTinhtrang->TabIndex = 6;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(57, 203);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(99, 20);
			this->label12->TabIndex = 5;
			this->label12->Text = L"Tình Trạng :";
			// 
			// txtNgayTra
			// 
			this->txtNgayTra->Location = System::Drawing::Point(184, 161);
			this->txtNgayTra->Name = L"txtNgayTra";
			this->txtNgayTra->Size = System::Drawing::Size(221, 27);
			this->txtNgayTra->TabIndex = 6;
			// 
			// txtDocgia
			// 
			this->txtDocgia->Location = System::Drawing::Point(184, 18);
			this->txtDocgia->Name = L"txtDocgia";
			this->txtDocgia->Size = System::Drawing::Size(221, 27);
			this->txtDocgia->TabIndex = 6;
			// 
			// txtNgaymuon
			// 
			this->txtNgaymuon->Location = System::Drawing::Point(184, 128);
			this->txtNgaymuon->Name = L"txtNgaymuon";
			this->txtNgaymuon->Size = System::Drawing::Size(221, 27);
			this->txtNgaymuon->TabIndex = 6;
			// 
			// txtMaSach
			// 
			this->txtMaSach->Location = System::Drawing::Point(184, 57);
			this->txtMaSach->Name = L"txtMaSach";
			this->txtMaSach->Size = System::Drawing::Size(221, 27);
			this->txtMaSach->TabIndex = 6;
			// 
			// txtSoluongtra
			// 
			this->txtSoluongtra->Location = System::Drawing::Point(184, 95);
			this->txtSoluongtra->Name = L"txtSoluongtra";
			this->txtSoluongtra->Size = System::Drawing::Size(221, 27);
			this->txtSoluongtra->TabIndex = 6;
			// 
			// button8
			// 
			this->button8->ForeColor = System::Drawing::Color::ForestGreen;
			this->button8->Location = System::Drawing::Point(563, 311);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 53);
			this->button8->TabIndex = 10;
			this->button8->Text = L"Hủy";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &QLGive::button8_Click);
			// 
			// button7
			// 
			this->button7->ForeColor = System::Drawing::Color::ForestGreen;
			this->button7->Location = System::Drawing::Point(434, 308);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 53);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Xóa";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &QLGive::button7_Click);
			// 
			// button6
			// 
			this->button6->ForeColor = System::Drawing::Color::ForestGreen;
			this->button6->Location = System::Drawing::Point(309, 311);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 53);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Sửa ";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &QLGive::button6_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->GridViewGive1);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(927, 388);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Chi tiết mượn";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// GridViewGive1
			// 
			this->GridViewGive1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->GridViewGive1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->GridViewGive1->Location = System::Drawing::Point(125, 50);
			this->GridViewGive1->Name = L"GridViewGive1";
			this->GridViewGive1->RowTemplate->Height = 24;
			this->GridViewGive1->Size = System::Drawing::Size(753, 283);
			this->GridViewGive1->TabIndex = 0;
			this->GridViewGive1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &QLGive::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Mã Phiếu Mượn";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Mã Độc Giả";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Mã Sách";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Ngày Mượn ";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Ngày Trả";
			this->Column5->Name = L"Column5";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->GridViewGive2);
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(927, 388);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Chi tiết trả";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// GridViewGive2
			// 
			this->GridViewGive2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->GridViewGive2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column6,
					this->Column7, this->Column8, this->Column9, this->Column10, this->Column11
			});
			this->GridViewGive2->Location = System::Drawing::Point(130, 62);
			this->GridViewGive2->Name = L"GridViewGive2";
			this->GridViewGive2->RowTemplate->Height = 24;
			this->GridViewGive2->Size = System::Drawing::Size(739, 268);
			this->GridViewGive2->TabIndex = 0;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Mã Đọc Giả";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Mã Sách";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Ngày Mượn";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Ngày Trả";
			this->Column9->Name = L"Column9";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Số Lượng Mượn";
			this->Column10->Name = L"Column10";
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Tình Trạng";
			this->Column11->Name = L"Column11";
			// 
			// button4
			// 
			this->button4->ForeColor = System::Drawing::Color::DarkGreen;
			this->button4->Location = System::Drawing::Point(892, 470);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(125, 51);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Về Trang Chủ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &QLGive::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1014, 34);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::Info;
			this->pictureBox2->Location = System::Drawing::Point(3, 523);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1014, 20);
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// QLGive
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1019, 543);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->tabControl1);
			this->Name = L"QLGive";
			this->Text = L"QLGive";
			this->Load += gcnew System::EventHandler(this, &QLGive::QLGive_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridViewGive1))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridViewGive2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Help_tk help;
	QLGive qlm;
		System::String^S = "";
		S += txtPM	->Text + "|";
		S += txtDG->Text + "|";
		S += txtMS->Text + "|";
		S += txtNM->Text + "|";
		S += txtNT->Text + "|";
		//GridView01->Rows->Clear();
		help.writeToFile("FileGive.txt", S);
		GridViewGive1->Rows->Add(txtPM->Text, txtDG->Text, txtMS->Text, txtNM->Text,txtNT->Text);

}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (MessageBox::Show(L"Bạn thực sự muốn xóa thông tin này ?", "Xóa", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		Help_tk help;
		GridViewGive1->Rows->RemoveAt(GridViewGive1->Focused);
		std::vector<std::string> v;
		help.WriteDataGridViewToFile(GridViewGive1, "FileGive.txt");
		GridViewGive1->Rows->Clear();
		v = help.readFileVT("FileGive.txt");
		help.addToDataGripView1(GridViewGive1, v);
	}
}
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void QLGive_Load(System::Object^  sender, System::EventArgs^  e) {
	Help_tk help;
	std::vector<std::string> v;
	GridViewGive1->Rows->Clear();
	v = help.readFileVT("FileGive.txt");
	help.addToDataGripView1(GridViewGive1, v);
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
}





private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	Help_tk help;
	System::String^S = "";
	S += txtDocgia->Text + "|";
	S += txtMaSach->Text + "|";
	S += txtSoluongtra->Text + "|";
	S += txtNgaymuon->Text + "|";
	S += txtNgayTra->Text + "|";
	S += txtTinhtrang->Text + "|";
	
	//GridView01->Rows->Clear();
	help.writeToFile("GhiFileSach.txt", S);
	GridViewGive2->Rows->Add(txtDocgia->Text, txtMaSach->Text, txtSoluongtra->Text, txtNgaymuon->Text, txtNgayTra->Text, txtTinhtrang->Text);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show(L"Bạn thực sự muốn xóa thông tin này ?", "Xóa", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			Help_tk help;
			GridViewGive2->Rows->RemoveAt(GridViewGive2->Focused);
			std::vector<std::string> v;
			help.WriteDataGridViewToFile(GridViewGive1, "FileReturn.txt");
			GridViewGive2->Rows->Clear();
			v = help.readFileVT("FileReturn.txt");
			help.addToDataGripView1(GridViewGive2, v);
		}
	}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	txtDocgia->Text = "";
	txtMaSach->Text = "";
	txtNgaymuon->Text = "";
	txtNgayTra->Text = "";
	txtTinhtrang->Text = "";

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

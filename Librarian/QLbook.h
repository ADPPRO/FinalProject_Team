#pragma once
#include"Help_tk.h"
#include"QuanLi_Sach.h"
#include"Funtion.h"
namespace ProjectLibrarian {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for QLbook
	/// </summary>
	public ref class QLbook : public System::Windows::Forms::Form
	{
	public:
		QLbook(void)
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
		~QLbook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tab;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  txtGT;


	private: System::Windows::Forms::TextBox^  txtSL;





	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  txtNXB;

	private: System::Windows::Forms::TextBox^  txtTG;

	private: System::Windows::Forms::TextBox^  txtTS;

	private: System::Windows::Forms::TextBox^  txtMS;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::DataGridView^  GridView01;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
















	protected:

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
			this->tab = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtGT = (gcnew System::Windows::Forms::TextBox());
			this->txtSL = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtNXB = (gcnew System::Windows::Forms::TextBox());
			this->txtTG = (gcnew System::Windows::Forms::TextBox());
			this->txtTS = (gcnew System::Windows::Forms::TextBox());
			this->txtMS = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->GridView01 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->tab->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridView01))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// tab
			// 
			this->tab->Controls->Add(this->tabPage1);
			this->tab->Controls->Add(this->tabPage2);
			this->tab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tab->Location = System::Drawing::Point(68, 40);
			this->tab->Name = L"tab";
			this->tab->SelectedIndex = 0;
			this->tab->Size = System::Drawing::Size(934, 462);
			this->tab->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(926, 429);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Quản Lí Sách";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->txtGT);
			this->groupBox1->Controls->Add(this->txtSL);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->txtNXB);
			this->groupBox1->Controls->Add(this->txtTG);
			this->groupBox1->Controls->Add(this->txtTS);
			this->groupBox1->Controls->Add(this->txtMS);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->ForeColor = System::Drawing::Color::Green;
			this->groupBox1->Location = System::Drawing::Point(33, 52);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(840, 335);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(691, 233);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(119, 75);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Về Trang Chủ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &QLbook::button5_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(494, 238);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 64);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Hủy";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &QLbook::button2_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(353, 238);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 64);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Sửa";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &QLbook::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(203, 238);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 64);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Xóa";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &QLbook::button3_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(68, 238);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 64);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Thêm ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &QLbook::button1_Click);
			// 
			// txtGT
			// 
			this->txtGT->Location = System::Drawing::Point(539, 154);
			this->txtGT->Name = L"txtGT";
			this->txtGT->Size = System::Drawing::Size(163, 27);
			this->txtGT->TabIndex = 15;
			// 
			// txtSL
			// 
			this->txtSL->Location = System::Drawing::Point(539, 114);
			this->txtSL->Name = L"txtSL";
			this->txtSL->Size = System::Drawing::Size(163, 27);
			this->txtSL->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(429, 154);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Đơn Giá :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(426, 114);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Số Lượng :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(423, 73);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(99, 20);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Tình Trạng :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(420, 34);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(93, 20);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Ngôn Ngữ :";
			// 
			// txtNXB
			// 
			this->txtNXB->Location = System::Drawing::Point(182, 152);
			this->txtNXB->Name = L"txtNXB";
			this->txtNXB->Size = System::Drawing::Size(163, 27);
			this->txtNXB->TabIndex = 7;
			// 
			// txtTG
			// 
			this->txtTG->Location = System::Drawing::Point(182, 110);
			this->txtTG->Name = L"txtTG";
			this->txtTG->Size = System::Drawing::Size(163, 27);
			this->txtTG->TabIndex = 6;
			// 
			// txtTS
			// 
			this->txtTS->Location = System::Drawing::Point(182, 74);
			this->txtTS->Name = L"txtTS";
			this->txtTS->Size = System::Drawing::Size(163, 27);
			this->txtTS->TabIndex = 5;
			// 
			// txtMS
			// 
			this->txtMS->Location = System::Drawing::Point(182, 27);
			this->txtMS->Name = L"txtMS";
			this->txtMS->Size = System::Drawing::Size(163, 27);
			this->txtMS->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(44, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Năm Xuất Bản :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(44, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Mã Tác Giả :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Tên Sách :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Mã Sách :";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->GridView01);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(926, 429);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Thông Tin Sách";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// GridView01
			// 
			this->GridView01->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->GridView01->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5, this->Column6, this->Column8, this->Column7
			});
			this->GridView01->Location = System::Drawing::Point(30, 115);
			this->GridView01->Name = L"GridView01";
			this->GridView01->RowTemplate->Height = 24;
			this->GridView01->Size = System::Drawing::Size(876, 250);
			this->GridView01->TabIndex = 0;
			this->GridView01->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &QLbook::GridView01_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Mã Sách";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Tên Sách";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Tên Tác Giả";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Năm Xuất Bản";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Số Lượng";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Đơn Giá";
			this->Column6->Name = L"Column6";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Ngôn Ngữ";
			this->Column8->Name = L"Column8";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Tình Trạng";
			this->Column7->Name = L"Column7";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pictureBox1->Location = System::Drawing::Point(-1, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1047, 35);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &QLbook::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::Info;
			this->pictureBox2->Location = System::Drawing::Point(-1, 550);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1047, 29);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Tiếng Anh", L"Tiếng Việt", L"Tiếng Trung", L"Tiếng Hàn" });
			this->comboBox1->Location = System::Drawing::Point(539, 27);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(163, 28);
			this->comboBox1->TabIndex = 18;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Còn Sách", L"Hết Sách" });
			this->comboBox2->Location = System::Drawing::Point(539, 70);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(163, 28);
			this->comboBox2->TabIndex = 19;
			// 
			// QLbook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1044, 579);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->tab);
			this->Name = L"QLbook";
			this->Text = L"QLbook";
			this->Load += gcnew System::EventHandler(this, &QLbook::QLbook_Load);
			this->tab->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridView01))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void QLbook_Load(System::Object^  sender, System::EventArgs^  e){
		Help_tk help;
		std::vector<std::string> v;
		GridView01->Rows->Clear();
		v = help.readFileVT("GhiFileSach.txt");
		help.addToDataGripView1(GridView01, v);
	}
			
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Help_tk help;
			System::String^S = "";
			S += txtMS->Text + "|";
			S += txtTS->Text + "|";
			S += txtTG->Text + "|";
			S += txtNXB->Text + "|";
			S += txtSL->Text + "|";
			S += txtGT->Text + "|";
			S += comboBox1->Text + "|";
			S += comboBox2->Text + "|";
			//GridView01->Rows->Clear();
			help.writeToFile("GhiFileSach.txt", S);
			GridView01->Rows->Add(txtMS->Text, txtTS->Text, txtTG->Text, txtNXB->Text, txtSL->Text, txtGT->Text, comboBox1->Text, comboBox2->Text);
			
		
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (MessageBox::Show(L"Bạn thực sự muốn xóa thông tin này ?", "Xóa", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		Help_tk help;
		QuanLi_Sach qls;
		GridView01->Rows->RemoveAt(GridView01->Focused);
		std::vector<std::string> v;
		help.WriteDataGridViewToFile(GridView01, "GhiFileSach.txt");
		GridView01->Rows->Clear();
		v = help.readFileVT("GhiFileSach.txt");
		help.addToDataGripView1(GridView01, v);
	}
	else {
		MessageBox::Show("Huy thanh cong !");
	}

		
	
	
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	txtMS->Text = "";
	txtTS->Text = "";
	txtTG->Text = "";
	txtSL->Text = "";
	txtNXB->Text = "";
	txtGT->Text = "";

}
	private: System::Void GridView01_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		
	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	//QuanLi_Sach qls;
	//qls.readFile("GhiFileSach.txt");
	//	if (qls.get(1).getMasach().compare("MH01"))
	//		MessageBox::Show("true");
	//	else MessageBox::Show("flase");
	//	qls.writeFile("GhiFlle.txt");
	
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

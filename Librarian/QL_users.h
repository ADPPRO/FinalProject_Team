#pragma once
#include"Help_tk.h"
namespace ProjectLibrarian {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for QL_users
	/// </summary>
	public ref class QL_users : public System::Windows::Forms::Form
	{
	public:
		QL_users(void)
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
		~QL_users()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
















	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  txt05;

	private: System::Windows::Forms::TextBox^  txt04;

	private: System::Windows::Forms::TextBox^  txt03;

	private: System::Windows::Forms::TextBox^  txt02;

	private: System::Windows::Forms::TextBox^  txt01;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(QL_users::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txt05 = (gcnew System::Windows::Forms::TextBox());
			this->txt04 = (gcnew System::Windows::Forms::TextBox());
			this->txt03 = (gcnew System::Windows::Forms::TextBox());
			this->txt02 = (gcnew System::Windows::Forms::TextBox());
			this->txt01 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(85, 240);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(667, 209);
			this->dataGridView1->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Mã Độc Giả";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Tên Độc Giả";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Ngày Sinh";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Địa Chỉ";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Số Điên Thoại";
			this->Column5->Name = L"Column5";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-2, -4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(916, 40);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->txt05);
			this->groupBox2->Controls->Add(this->txt04);
			this->groupBox2->Controls->Add(this->txt03);
			this->groupBox2->Controls->Add(this->txt02);
			this->groupBox2->Controls->Add(this->txt01);
			this->groupBox2->Location = System::Drawing::Point(85, 42);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(667, 192);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Quản Lí Bạn Đọc";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &QL_users::groupBox1_Enter);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(356, 97);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 17);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Số Điện Thoại";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(356, 48);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 17);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Địa Chỉ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(58, 156);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 17);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Ngày Sinh";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(58, 92);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(88, 17);
			this->label12->TabIndex = 7;
			this->label12->Text = L"Tên Độc Giả";
			this->label12->Click += gcnew System::EventHandler(this, &QL_users::label2_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(58, 92);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 17);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Tên Độc Giả";
			this->label9->Click += gcnew System::EventHandler(this, &QL_users::label2_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(58, 44);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(82, 17);
			this->label11->TabIndex = 6;
			this->label11->Text = L"Mã Độc Giả";
			this->label11->Click += gcnew System::EventHandler(this, &QL_users::label1_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(58, 44);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(82, 17);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Mã Độc Giả";
			this->label10->Click += gcnew System::EventHandler(this, &QL_users::label1_Click);
			// 
			// txt05
			// 
			this->txt05->Location = System::Drawing::Point(481, 92);
			this->txt05->Name = L"txt05";
			this->txt05->Size = System::Drawing::Size(100, 22);
			this->txt05->TabIndex = 4;
			// 
			// txt04
			// 
			this->txt04->Location = System::Drawing::Point(481, 44);
			this->txt04->Name = L"txt04";
			this->txt04->Size = System::Drawing::Size(100, 22);
			this->txt04->TabIndex = 3;
			// 
			// txt03
			// 
			this->txt03->Location = System::Drawing::Point(184, 156);
			this->txt03->Name = L"txt03";
			this->txt03->Size = System::Drawing::Size(100, 22);
			this->txt03->TabIndex = 2;
			this->txt03->TextChanged += gcnew System::EventHandler(this, &QL_users::textBox8_TextChanged);
			// 
			// txt02
			// 
			this->txt02->Location = System::Drawing::Point(184, 92);
			this->txt02->Name = L"txt02";
			this->txt02->Size = System::Drawing::Size(100, 22);
			this->txt02->TabIndex = 1;
			this->txt02->TextChanged += gcnew System::EventHandler(this, &QL_users::textBox9_TextChanged);
			// 
			// txt01
			// 
			this->txt01->Location = System::Drawing::Point(184, 44);
			this->txt01->Name = L"txt01";
			this->txt01->Size = System::Drawing::Size(100, 22);
			this->txt01->TabIndex = 0;
			this->txt01->TextChanged += gcnew System::EventHandler(this, &QL_users::textBox10_TextChanged);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(787, 68);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 49);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Thêm";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &QL_users::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(787, 148);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 45);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Xóa";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(787, 210);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 48);
			this->button7->TabIndex = 14;
			this->button7->Text = L"Hủy";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &QL_users::button7_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(812, 431);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 65);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Đóng";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &QL_users::button1_Click_1);
			// 
			// QL_users
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(912, 526);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox2);
			this->Name = L"QL_users";
			this->Text = L"QL_users";
			this->Load += gcnew System::EventHandler(this, &QL_users::QL_users_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void QL_users_Load(System::Object^  sender, System::EventArgs^  e) {
		/*Help_tk help;
		std::vector<std::string> v;
		GridView01->Rows->Clear();
		v = help.readFileVT("muo.txt");
		help.addToDataGripView1(GridView01, v);*/
	}

private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	txt01->Text = "";
	txt02->Text = "";
	txt03->Text = "";
	txt04->Text = "";
	txt05->Text = "";

}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	Help_tk help;
	System::String^S = "";
	S += txt01->Text + "|";
	S += txt02->Text + "|";
	S += txt03->Text + "|";
	S += txt04->Text + "|";
	S += txt04->Text + "|";
	S += txt05->Text + "|";
	//GridView01->Rows->Clear();
	help.writeToFile("GhiFlle.txt", S);
	dataGridView1->Rows->Add(txt01->Text, txt02->Text, txt03->Text, txt04->Text, txt05->Text);
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
};
}

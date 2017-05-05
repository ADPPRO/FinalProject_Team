#pragma once
#include"MyForm.h"
#include"Help_tk.h"
#include"VT_Account.h"

namespace ProjectLibrarian {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  jTxt02;

	private: System::Windows::Forms::TextBox^  jTxt01;


	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::CheckBox^  check;
	private: System::Windows::Forms::PictureBox^  pictureBox1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->jTxt02 = (gcnew System::Windows::Forms::TextBox());
			this->jTxt01 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->check = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->jTxt02);
			this->groupBox1->Controls->Add(this->jTxt01);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->groupBox1->Location = System::Drawing::Point(131, 124);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(308, 140);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Thông tin đăng nhập";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Mật Khẩu :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Tài Khản :";
			// 
			// jTxt02
			// 
			this->jTxt02->Location = System::Drawing::Point(112, 82);
			this->jTxt02->Name = L"jTxt02";
			this->jTxt02->Size = System::Drawing::Size(149, 22);
			this->jTxt02->TabIndex = 1;
			// 
			// jTxt01
			// 
			this->jTxt01->Location = System::Drawing::Point(112, 40);
			this->jTxt01->Name = L"jTxt01";
			this->jTxt01->Size = System::Drawing::Size(149, 22);
			this->jTxt01->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::Green;
			this->button2->Location = System::Drawing::Point(296, 306);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Đóng";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Login::button2_Click);
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::Color::ForestGreen;
			this->button3->Location = System::Drawing::Point(159, 306);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(96, 40);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Đăng Nhập";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Login::button3_Click);
			// 
			// check
			// 
			this->check->AutoSize = true;
			this->check->Checked = true;
			this->check->CheckState = System::Windows::Forms::CheckState::Checked;
			this->check->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->check->Location = System::Drawing::Point(193, 271);
			this->check->Name = L"check";
			this->check->Size = System::Drawing::Size(140, 21);
			this->check->TabIndex = 6;
			this->check->Text = L"Hiển thị mất khẩu";
			this->check->UseVisualStyleBackColor = true;
			this->check->CheckedChanged += gcnew System::EventHandler(this, &Login::checkBox1_CheckedChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(4, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(557, 92);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(561, 373);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->check);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Login";
			this->Text = L"Login";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^user = "", ^pass = "";
		user = jTxt01->Text;
		pass = jTxt02->Text;
		vt_account v;
		Help_tk help;
		if (user->Equals("") || pass->Equals(""))
			MessageBox::Show("Vui long nhap mk hay tk");
		else {
			v.readfile();
			v.writefile();
			if (v.check(help.toStandardString(user),help.toStandardString(pass))) {
				this->Hide();
				MyForm ^fr = gcnew MyForm();
				fr->ShowDialog();
			}
			else
				MessageBox::Show("Tai khoan hoac mat khau khong chinh xac");
		}
	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^user = "", ^pass = "";
	user = jTxt01->Text;
	pass = jTxt02->Text;
	vt_account v;
	Help_tk help;
	if (user->Equals("") || pass->Equals(""))
		MessageBox::Show("Vui long nhap mk hay tk");
	else {
		v.readfile();
		v.writefile();
		if (v.check(help.toStandardString(user), help.toStandardString(pass))) {
			this->Hide();
			MyForm ^fr = gcnew MyForm();
			fr->ShowDialog();
		}
		else
			MessageBox::Show("Tai khoan hoac mat khau khong chinh xac");
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (check->Checked)
		jTxt02->PasswordChar = '\0';
	else
		jTxt02->PasswordChar = '*';


}
};
}

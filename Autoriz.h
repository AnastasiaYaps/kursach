#pragma once
#include"personal_page1.h"
#include <msclr\marshal_cppstd.h>
#include "настройки.h"
#include "personal_page1.h"

namespace типакурсач {
	using namespace System::Data::OleDb;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class Autoriz : public System::Windows::Forms::Form	{
	public:
		Autoriz(void){
			InitializeComponent();
		}
		int Ukod;
	protected:
		~Autoriz(){
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private:
		настройки^ nastr;
		personal_page1^ persona;
	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void){
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Autoriz::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(68, 170);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 31);
			this->label2->TabIndex = 25;
			this->label2->Text = L"login";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(68, 263);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 31);
			this->label1->TabIndex = 24;
			this->label1->Text = L"password";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(243, 256);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(488, 38);
			this->textBox2->TabIndex = 23;
		//	this->textBox2->TextChanged += gcnew System::EventHandler(this, &Autoriz::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(243, 163);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(488, 38);
			this->textBox1->TabIndex = 22;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Beige;
			this->button3->Location = System::Drawing::Point(588, 658);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(274, 49);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Выход";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Autoriz::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Beige;
			this->button2->Location = System::Drawing::Point(345, 340);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 52);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Авторизация";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Autoriz::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(339, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(218, 31);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Введите данные";
		//	this->label3->Click += gcnew System::EventHandler(this, &Autoriz::label3_Click);
			// 
			// Autoriz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(874, 829);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Poor Richard", 10.125F));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Autoriz";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Авторизация";
			this->Load += gcnew System::EventHandler(this, &Autoriz::Autoriz_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void Autoriz_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = false;
	String^ login;
	String^ password;
	int kod;
	String^ login_check, ^ password_check;
	login = textBox1->Text;
	password = textBox2->Text;
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=logpass.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();//открываем соединение
	String^ query = "SELECT * FROM [Таблица1]";// запрос
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);//команда
	OleDbDataReader^ dbReader1 = dbCommand->ExecuteReader();// считываем данные
	while (dbReader1->Read() ) {

		login_check = (String^)dbReader1["log"];
		password_check = (String^)dbReader1["pass"];

		if (DBNull::Value != dbReader1["log"] && DBNull::Value != dbReader1["pass"]) {
			if (login_check== login && password_check == password) {
				MessageBox::Show("Пользователь " + login + " успешно авторизован!", "Успешный вход!", MessageBoxButtons::OK);
				check = true;
				kod = (int)dbReader1["код"];
				Ukod = kod;
				dbReader1->Close();// закрываем соединение
				dbConnection->Close();
				if (nastr) nastr->Close();
				nastr = gcnew настройки();
				this->AddOwnedForm(nastr);
				this->nastr->Ukod = Ukod;
				if (persona) persona->Close();
				persona = gcnew personal_page1();
			    this->AddOwnedForm(persona);
				this->persona->Ukod = Ukod;
				personal_page1^ pers = gcnew personal_page1();// создаем новый экземпляр
				pers->Show();//открывается персональная страница
				Autoriz::Hide();// закрываем
			break;
			}	}}
	if (check==false) {
		MessageBox::Show(this, "Вы ввели  неверный логин или пароль(", "Cообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		dbReader1->Close();// закрываем соединение
		dbConnection->Close();
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
//private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//}
//private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
//}
};
}

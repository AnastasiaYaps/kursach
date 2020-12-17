#pragma once
#include <msclr\marshal_cppstd.h>
#include "regex"
#include <string>
#include "iostream"
#include "stdlib.h"
namespace типакурсач {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace System::Data::OleDb;
	public ref class usersfood : public System::Windows::Forms::Form{
	public:
		usersfood(void)	{
			InitializeComponent();
		}
	protected:
		~usersfood()	{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private:
		System::ComponentModel::Container ^components;
	
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)	{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(usersfood::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(216, 142);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(313, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ѕоиск продуктов питани€";
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(131, 278);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(198, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"»скать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &usersfood::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(162, 202);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(408, 35);
			this->textBox1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(268, 344);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(198, 37);
			this->button2->TabIndex = 3;
			this->button2->Text = L"¬ыход";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(404, 278);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(198, 37);
			this->button3->TabIndex = 4;
			this->button3->Text = L"ƒобавить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &usersfood::button3_Click);
			// 
			// usersfood
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(739, 479);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"usersfood";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &usersfood::usersfood_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = false;
	String^ food;
	String^ kkal;
	String^ food_check;
	food = textBox1->Text;
	int fl1 = 0;
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=product.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
	dbConnection->Open();//открываем соединение
	String^ query = "SELECT * FROM [“аблица1]";// запрос
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);//команда
	OleDbDataReader^ dbReader1 = dbCommand->ExecuteReader();// считываем данные
	while (dbReader1->Read()) {
		food_check = (String^)dbReader1["ѕродукт"];
		if (DBNull::Value != dbReader1["ѕродукт"]) {
			if (food_check == food) {
				MessageBox::Show(" " + food + " есть в базе!", "", MessageBoxButtons::OK);
				kkal = (String^)dbReader1["калорийность"];
				MessageBox::Show(" алорийность данного продукта = " + kkal + "", "", MessageBoxButtons::OK);
				check = true;
				fl1 = 1;
				String^ kod = kkal;
				dbReader1->Close();// закрываем соединение
				dbConnection->Close();
				break;
			}}}
	if (check == false) {
		MessageBox::Show(this, "»звините, данного продукта пока нет в базе данных, если вы точно знаете калорийность, то можете его добавить сами", "Cообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		dbReader1->Close();// закрываем соединение
		dbConnection->Close();
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = false;
	String^ food;
	String^ kkal;
	String^ food_check;
	food = textBox1->Text;
	int fl1 = 0;
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=product.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
	dbConnection->Open();//открываем соединение
	String^ query = "SELECT * FROM [“аблица1]";// запрос
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);//команда
	OleDbDataReader^ dbReader1 = dbCommand->ExecuteReader();// считываем данные
	while (dbReader1->Read()) {
		food_check = (String^)dbReader1["ѕродукт"];
		if (DBNull::Value != dbReader1["ѕродукт"]) {
			if (food_check == food) {
				MessageBox::Show(" " + food + " есть в базе!", "", MessageBoxButtons::OK);
				kkal = (String^)dbReader1["калорийность"];
				MessageBox::Show(" алорийность данного продукта = " + kkal + "", "", MessageBoxButtons::OK);
				MessageBox::Show("" + food + " добавлен к вашему списку продуктов!", "", MessageBoxButtons::OK);
				std::string kkal1 = msclr::interop::marshal_as<std::string>(kkal);
				int kkal2 = 0;
				int al = kkal1.length();
				int k = 1;
				for (int i = 0; i < al - 1; i++) {
					k *= 10;
				}
				for (int i = 0; kkal1[i] != 0; i++) {
					kkal2 += (kkal1[i] - '0') * k;
					k /= 10;
				}
				check = true;
				fl1 = 1;
				this->Close();
			}}}
	if (check == false) {
		MessageBox::Show(this, "»звините, данного продукта пока нет в базе данных, если вы точно знаете калорийность, то можете его добавить сами", "Cообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		dbReader1->Close();// закрываем соединение
		dbConnection->Close();
	}
}
private: System::Void usersfood_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}

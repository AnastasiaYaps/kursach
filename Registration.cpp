#include "Registration.h"
//#include <msclr\marshal_cppstd.h>
//#include "regex"
//#include "string"
//#include "inf_for_registr.h"
//using namespace System::Data::OleDb;
//using namespace System;
//using namespace System::ComponentModel;
//using namespace System::Collections;
//using namespace System::Windows::Forms;
//using namespace System::Data;
//using namespace System::Drawing;
//using namespace std;
//main() {
//	System::Void button2_Click(System::Object ^ sender, System::EventArgs ^ e) {
//		String^ login = textBox1->Text;
//		String^ password = textBox2->Text, ^ login_check;
//		int kay;
//		int fl = 0;
//
//		String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=logpass.mdb";
//		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
//		dbConnection->Open();
//		String^ query = "SELECT * FROM [Таблица1]";
//		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
//		OleDbDataReader^ dbReader = dbCommand->ExecuteReader();
//		int n;
//		if (login == "" || password == "") {
//			fl = 1;
//			MessageBox::Show("Не все поля заполнены, проверьте форму!", "Ошибка!", MessageBoxButtons::OK);
//			dbReader->Close();
//			dbConnection->Close();
//
//		}
//		else {
//
//			while (dbReader->Read()) {
//				if ((String^)dbReader["log"] != "")  login_check = (String^)dbReader["log"];
//				if (DBNull::Value != dbReader["log"])login_check = (String^)dbReader["log"];
//				if (login_check == login) {
//					MessageBox::Show("Пользователь " + login + " уже зарегистрирован!", "", MessageBoxButtons::OK);
//					fl = 1;
//					dbReader->Close();
//					dbConnection->Close();
//					break;
//				}
//
//			}
//		}
//
//
//		if (fl == 0) {
//			int n = 0;
//			String^ query1 = "INSERT INTO [Таблица1] (log,pass )VALUES ('" + login + "' , '" + password + "')";
//			OleDbCommand^ dbCommand1 = gcnew OleDbCommand(query1, dbConnection);
//			dbCommand1->ExecuteNonQuery();
//			MessageBox::Show("Новый пользователь " + login + " зарегистрирован!", "", MessageBoxButtons::OK);
//			dbReader->Close();
//			dbConnection->Close();
//			/*if (persona) persona->Close();
//			persona = gcnew personal_page1();
//			this->AddOwnedForm(persona);
//			this->persona->Ukay = Ukay;*/
//			inf_for_registr^ pers = gcnew inf_for_registr();// создаем новый экземпляр
//			pers->Show();//открывается персональная страница
//			Registration::Hide();// закрываем
//
//		}
//	}
//
//}


#pragma once
#include <string>
#include <iostream>
#include <List>
#include "Frame2.h"
#include "food2.h"
namespace Project3 {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;


	/// <summary>
	/// Summary for FrontPage
	/// </summary>
	public ref class FrontPage : public System::Windows::Forms::Form
	{
	public:
		List<String^>^ result_input;
		FrontPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		List<String^>^ FrontPage::GetSelectedItems()
		{
			List<String^>^ selectedItems = gcnew List<String^>();
			for each (Object ^ item in listBox1->SelectedItems)
			{
				selectedItems->Add(item->ToString());
			}
			return selectedItems;
		}



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FrontPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button3;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(24, 105);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(754, 47);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Please choose nutrients and amount you consume daily";
			this->label1->Click += gcnew System::EventHandler(this, &FrontPage::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(24, 415);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 47);
			this->label2->TabIndex = 1;
			this->label2->Text = L"You chose: ";
			this->label2->Click += gcnew System::EventHandler(this, &FrontPage::label2_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Sitka Display", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(26) {
				L"protein", L"carbs", L"sugar", L"fiber",
					L"cholesterol", L"vitA", L"thiamin", L"riboflavin", L"niacin", L"vitB6", L"folate", L"choline", L"vitB12", L"vitC", L"vitD",
					L"vitE", L"vitK", L"calcium", L"phosphorus", L"magnesium", L"iron", L"zinc", L"copper", L"selenium", L"potassium", L"sodium"
			});
			this->checkedListBox1->Location = System::Drawing::Point(32, 203);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(539, 169);
			this->checkedListBox1->TabIndex = 2;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &FrontPage::checkedListBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::OliveDrab;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(646, 343);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(266, 59);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FrontPage::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button2->FlatAppearance->BorderSize = 5;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(535, 586);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(422, 59);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FrontPage::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 27.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(246, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(504, 53);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Health Reccomendation System";
			this->label3->Click += gcnew System::EventHandler(this, &FrontPage::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(724, 162);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 35);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Amount";
			this->label4->Click += gcnew System::EventHandler(this, &FrontPage::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(221, 162);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(111, 35);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Nutrients";
			this->label5->Click += gcnew System::EventHandler(this, &FrontPage::label5_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(688, 203);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(166, 96);
			this->richTextBox1->TabIndex = 9;
			this->richTextBox1->Text = L"16";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &FrontPage::richTextBox1_TextChanged);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Sitka Subheading", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 30;
			this->listBox1->Location = System::Drawing::Point(32, 466);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(539, 94);
			this->listBox1->TabIndex = 10;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &FrontPage::listBox1_SelectedIndexChanged_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::OliveDrab;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(32, 586);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(474, 59);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Continue";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FrontPage::button3_Click);
			// 
			// FrontPage
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::PapayaWhip;
			this->ClientSize = System::Drawing::Size(980, 700);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"FrontPage";
			this->Text = L"FrontPage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		/*for each (auto s in checkedListBox1->CheckedItems)
		{
			listBox1->Items.Add(s);
		}*/
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Add button to add to total things looking up
	int number1;
	if (!int::TryParse(richTextBox1->Text, number1)) {
		MessageBox::Show("Amount wasn't an integer");
		return;
	}
	for (int i = 0; i < checkedListBox1->Items->Count; i++) {
		if (checkedListBox1->GetItemChecked(i)) {
			String^ item = checkedListBox1->Items[i]->ToString();
			int quantity = 1;
			bool found = false;
			for (int j = 0; j < listBox1->Items->Count; j++) {
				String^ existingItem = listBox1->Items[j]->ToString();
				if (existingItem->StartsWith(item)) {
					// Item already exists, increment quantity
					quantity = Int32::Parse(existingItem->Substring(item->Length));
					quantity+=number1;
					listBox1->Items[j] = item + " " + quantity.ToString();
					found = true;
					break;
				}
			}
			if (!found) {
				// Item not yet in list, add with quantity of 1
				listBox1->Items->Add(item + " " + number1.ToString());
			}
			// Uncheck item in checkedListBox1
			checkedListBox1->SetItemChecked(i, false);
		}
	}
	
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ message = "";
	for each (Object ^ item in listBox1->Items)
	{
		message += item->ToString() + "\n";
	}
	System::String^ result;
	Console::WriteLine("String input:\n " + message);
	food2 myFood2Object;
	// create an instance of the food2 class with the required arguments
	result = myFood2Object.ReturnResult(message); // call the ReturnResult function on the object

	Frame2 obj(result);
	obj.ShowDialog();

}
};
}

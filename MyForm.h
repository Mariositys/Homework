#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Label^ resLabel;
	private: System::Windows::Forms::Button^ clearButton;






	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ dotButton;

	private: System::Windows::Forms::Button^ equlButton;

	private: System::Windows::Forms::Button^ plusButton;

	private: System::Windows::Forms::Button^ minButton;

	private: System::Windows::Forms::Button^ mulButton;

	private: System::Windows::Forms::Button^ divButton;

	private: float first_num;
	private: char user_action = ' ';
	private: bool is_equal = false;


	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->resLabel = (gcnew System::Windows::Forms::Label());
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->dotButton = (gcnew System::Windows::Forms::Button());
			this->equlButton = (gcnew System::Windows::Forms::Button());
			this->plusButton = (gcnew System::Windows::Forms::Button());
			this->minButton = (gcnew System::Windows::Forms::Button());
			this->mulButton = (gcnew System::Windows::Forms::Button());
			this->divButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonExit
			// 
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExit->Location = System::Drawing::Point(13, 13);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(68, 32);
			this->buttonExit->TabIndex = 0;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm::buttonExit_Click);
			// 
			// resLabel
			// 
			this->resLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->resLabel->Location = System::Drawing::Point(17, 48);
			this->resLabel->Name = L"resLabel";
			this->resLabel->Size = System::Drawing::Size(289, 76);
			this->resLabel->TabIndex = 1;
			this->resLabel->Text = L"0";
			this->resLabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// clearButton
			// 
			this->clearButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clearButton->Location = System::Drawing::Point(17, 127);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(77, 62);
			this->clearButton->TabIndex = 2;
			this->clearButton->Text = L"AC";
			this->clearButton->UseVisualStyleBackColor = true;
			this->clearButton->Click += gcnew System::EventHandler(this, &MyForm::clearButton_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(177, 195);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(77, 62);
			this->button4->TabIndex = 5;
			this->button4->Text = L"9";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::numberClick);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(100, 195);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(71, 62);
			this->button5->TabIndex = 6;
			this->button5->Text = L"8";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::numberClick);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(17, 195);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(77, 62);
			this->button6->TabIndex = 7;
			this->button6->Text = L"7";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::numberClick);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(177, 263);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(77, 62);
			this->button7->TabIndex = 8;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::numberClick);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(100, 263);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(71, 62);
			this->button8->TabIndex = 9;
			this->button8->Text = L"5";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::numberClick);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(17, 263);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(77, 62);
			this->button9->TabIndex = 10;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::numberClick);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(177, 331);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(77, 62);
			this->button10->TabIndex = 11;
			this->button10->Text = L"3";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::numberClick);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(100, 331);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(71, 62);
			this->button11->TabIndex = 12;
			this->button11->Text = L"2";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::numberClick);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(17, 331);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(77, 62);
			this->button12->TabIndex = 13;
			this->button12->Text = L"1";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::numberClick);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(17, 399);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(154, 62);
			this->button13->TabIndex = 14;
			this->button13->Text = L"0";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::numberClick);
			// 
			// dotButton
			// 
			this->dotButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dotButton->Location = System::Drawing::Point(177, 399);
			this->dotButton->Name = L"dotButton";
			this->dotButton->Size = System::Drawing::Size(77, 62);
			this->dotButton->TabIndex = 15;
			this->dotButton->Text = L".";
			this->dotButton->UseVisualStyleBackColor = true;
			this->dotButton->Click += gcnew System::EventHandler(this, &MyForm::dotButton_Click);
			// 
			// equlButton
			// 
			this->equlButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->equlButton->Location = System::Drawing::Point(260, 399);
			this->equlButton->Name = L"equlButton";
			this->equlButton->Size = System::Drawing::Size(73, 62);
			this->equlButton->TabIndex = 16;
			this->equlButton->Text = L"=";
			this->equlButton->UseVisualStyleBackColor = true;
			this->equlButton->Click += gcnew System::EventHandler(this, &MyForm::equlButton_Click);
			// 
			// plusButton
			// 
			this->plusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plusButton->Location = System::Drawing::Point(260, 331);
			this->plusButton->Name = L"plusButton";
			this->plusButton->Size = System::Drawing::Size(73, 62);
			this->plusButton->TabIndex = 17;
			this->plusButton->Text = L"+";
			this->plusButton->UseVisualStyleBackColor = true;
			this->plusButton->Click += gcnew System::EventHandler(this, &MyForm::plusButton_Click);
			// 
			// minButton
			// 
			this->minButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minButton->Location = System::Drawing::Point(260, 263);
			this->minButton->Name = L"minButton";
			this->minButton->Size = System::Drawing::Size(73, 62);
			this->minButton->TabIndex = 18;
			this->minButton->Text = L"-";
			this->minButton->UseVisualStyleBackColor = true;
			this->minButton->Click += gcnew System::EventHandler(this, &MyForm::minButton_Click);
			// 
			// mulButton
			// 
			this->mulButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mulButton->Location = System::Drawing::Point(260, 195);
			this->mulButton->Name = L"mulButton";
			this->mulButton->Size = System::Drawing::Size(73, 62);
			this->mulButton->TabIndex = 19;
			this->mulButton->Text = L"*";
			this->mulButton->UseVisualStyleBackColor = true;
			this->mulButton->Click += gcnew System::EventHandler(this, &MyForm::mulButton_Click);
			// 
			// divButton
			// 
			this->divButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->divButton->Location = System::Drawing::Point(260, 127);
			this->divButton->Name = L"divButton";
			this->divButton->Size = System::Drawing::Size(73, 62);
			this->divButton->TabIndex = 20;
			this->divButton->Text = L"/";
			this->divButton->UseVisualStyleBackColor = true;
			this->divButton->Click += gcnew System::EventHandler(this, &MyForm::divButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(416, 498);
			this->Controls->Add(this->divButton);
			this->Controls->Add(this->mulButton);
			this->Controls->Add(this->minButton);
			this->Controls->Add(this->plusButton);
			this->Controls->Add(this->equlButton);
			this->Controls->Add(this->dotButton);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->clearButton);
			this->Controls->Add(this->resLabel);
			this->Controls->Add(this->buttonExit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BadCalc";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void numberClick(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);

				if (this->resLabel->Text == "0" || is_equal) {
					this->resLabel->Text = button->Text;
					is_equal = false;
			}
			   else
				   this->resLabel->Text = this->resLabel->Text + button->Text;
			}

		private: System::Void plusButton_Click(System::Object^ sender, System::EventArgs^ e) {
			math_action('+');
		}
		private: System::Void minButton_Click(System::Object^ sender, System::EventArgs^ e) {
			math_action('-');
		}
		private: System::Void mulButton_Click(System::Object^ sender, System::EventArgs^ e) {
			math_action('*');
		}
		private: System::Void divButton_Click(System::Object^ sender, System::EventArgs^ e) {
			math_action('/');
		}

		private: System::Void math_action(char action) {
			this->first_num = System::Convert::ToDouble(this->resLabel->Text);
			this->user_action = action;
			this->resLabel->Text = "0";
		}


		private: System::Void equlButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (user_action == ' ')
				return;

			float second = System::Convert::ToDouble(this->resLabel->Text);
			float res;
			switch (this->user_action) {
			case '+': res = this->first_num + second; break;
			case '-': res = this->first_num - second; break;
			case '*': res = this->first_num * second; break;
			case '/': res = this->first_num / second; break;
				if (second == 0) {
					res = 0;
					MessageBox::Show(this, "ƒействие запрещено", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else
					res = this->first_num / second;
				break;
			};
			this->is_equal = true;
			this->resLabel->Text = System::Convert::ToString(res);
		}
	private: System::Void clearButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->resLabel->Text = "0";
		this->first_num = 0;
		this->user_action = ' ';
		this->is_equal = false;
	}
	private: System::Void dotButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = this->resLabel->Text;
		if (!text->Contains(","))
			this->resLabel->Text = text + ",";
	}
};
}

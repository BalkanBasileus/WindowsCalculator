#pragma once
#include<iostream>

namespace WindowsCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			numberOne = 0;
			numberTwo = 0;
			result = 0;
			equalClicked = false;
			operatorPressed = false;
		}

		//enum operators { SUBTRACT = '-', ADD = '+', MULTIPLY = '*', DIVIDE = '/' };


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ buttonDecimal;
	private: System::Windows::Forms::Button^ buttonEqual;
	private: System::Windows::Forms::Button^ buttonMult;

	private: System::Windows::Forms::Button^ buttonMinus;

	private: System::Windows::Forms::Button^ buttonPlus;
	private: System::Windows::Forms::Button^ buttonDivide;
	private: System::Windows::Forms::Button^ buttonCE;
	private: System::Windows::Forms::Button^ buttonExponential;

	private: System::Windows::Forms::Button^ buttonFactorial;
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	protected:

	private:
		// private variables or calculator
		
		double numberOne, numberTwo, result;
		bool equalClicked = false;
		bool operatorPressed = false;
		char operatorUsed = NULL;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->buttonDecimal = (gcnew System::Windows::Forms::Button());
			this->buttonEqual = (gcnew System::Windows::Forms::Button());
			this->buttonMult = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonDivide = (gcnew System::Windows::Forms::Button());
			this->buttonCE = (gcnew System::Windows::Forms::Button());
			this->buttonExponential = (gcnew System::Windows::Forms::Button());
			this->buttonFactorial = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(13, 289);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(58, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::numberButton0_9_Clicked);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(77, 289);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(58, 52);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::numberButton0_9_Clicked);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(141, 289);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(58, 52);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::numberButton0_9_Clicked);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(13, 231);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(58, 52);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::numberButton0_9_Clicked);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(141, 231);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(58, 52);
			this->button5->TabIndex = 5;
			this->button5->Text = L"6";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::numberButton0_9_Clicked);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(77, 231);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(58, 52);
			this->button6->TabIndex = 4;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::numberButton0_9_Clicked);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(141, 173);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(58, 52);
			this->button7->TabIndex = 8;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::numberButton0_9_Clicked);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(77, 173);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(58, 52);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::numberButton0_9_Clicked);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(13, 173);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(58, 52);
			this->button9->TabIndex = 6;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::numberButton0_9_Clicked);
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button0->Location = System::Drawing::Point(13, 347);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(122, 52);
			this->button0->TabIndex = 9;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::numberButton0_9_Clicked);
			// 
			// buttonDecimal
			// 
			this->buttonDecimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDecimal->Location = System::Drawing::Point(141, 347);
			this->buttonDecimal->Name = L"buttonDecimal";
			this->buttonDecimal->Size = System::Drawing::Size(58, 52);
			this->buttonDecimal->TabIndex = 10;
			this->buttonDecimal->Text = L".";
			this->buttonDecimal->UseVisualStyleBackColor = true;
			// 
			// buttonEqual
			// 
			this->buttonEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEqual->Location = System::Drawing::Point(205, 347);
			this->buttonEqual->Name = L"buttonEqual";
			this->buttonEqual->Size = System::Drawing::Size(58, 52);
			this->buttonEqual->TabIndex = 14;
			this->buttonEqual->Text = L"=";
			this->buttonEqual->UseVisualStyleBackColor = true;
			this->buttonEqual->Click += gcnew System::EventHandler(this, &MyForm::equalButtonClicked);
			// 
			// buttonMult
			// 
			this->buttonMult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMult->Location = System::Drawing::Point(205, 173);
			this->buttonMult->Name = L"buttonMult";
			this->buttonMult->Size = System::Drawing::Size(58, 52);
			this->buttonMult->TabIndex = 13;
			this->buttonMult->Text = L"*";
			this->buttonMult->UseVisualStyleBackColor = true;
			this->buttonMult->Click += gcnew System::EventHandler(this, &MyForm::arithmeticButtonClicked);
			this->buttonMult->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::multiplyPressed);
			// 
			// buttonMinus
			// 
			this->buttonMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMinus->Location = System::Drawing::Point(205, 231);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(58, 52);
			this->buttonMinus->TabIndex = 12;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = true;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &MyForm::arithmeticButtonClicked);
			this->buttonMinus->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::subtractPressed);
			// 
			// buttonPlus
			// 
			this->buttonPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPlus->Location = System::Drawing::Point(205, 289);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(58, 52);
			this->buttonPlus->TabIndex = 11;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = true;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &MyForm::arithmeticButtonClicked);
			this->buttonPlus->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::additionPressed);
			// 
			// buttonDivide
			// 
			this->buttonDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDivide->Location = System::Drawing::Point(205, 115);
			this->buttonDivide->Name = L"buttonDivide";
			this->buttonDivide->Size = System::Drawing::Size(58, 52);
			this->buttonDivide->TabIndex = 18;
			this->buttonDivide->Text = L"/";
			this->buttonDivide->UseVisualStyleBackColor = true;
			this->buttonDivide->Click += gcnew System::EventHandler(this, &MyForm::arithmeticButtonClicked);
			this->buttonDivide->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::dividePressed);
			// 
			// buttonCE
			// 
			this->buttonCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCE->Location = System::Drawing::Point(141, 115);
			this->buttonCE->Name = L"buttonCE";
			this->buttonCE->Size = System::Drawing::Size(58, 52);
			this->buttonCE->TabIndex = 17;
			this->buttonCE->Text = L"CE";
			this->buttonCE->UseVisualStyleBackColor = true;
			// 
			// buttonExponential
			// 
			this->buttonExponential->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonExponential->Location = System::Drawing::Point(77, 115);
			this->buttonExponential->Name = L"buttonExponential";
			this->buttonExponential->Size = System::Drawing::Size(58, 52);
			this->buttonExponential->TabIndex = 16;
			this->buttonExponential->Text = L"n^2";
			this->buttonExponential->UseVisualStyleBackColor = true;
			// 
			// buttonFactorial
			// 
			this->buttonFactorial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonFactorial->Location = System::Drawing::Point(13, 115);
			this->buttonFactorial->Name = L"buttonFactorial";
			this->buttonFactorial->Size = System::Drawing::Size(58, 52);
			this->buttonFactorial->TabIndex = 15;
			this->buttonFactorial->Text = L"n!";
			this->buttonFactorial->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->MaximumSize = System::Drawing::Size(300, 300);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(250, 60);
			this->textBox1->TabIndex = 19;
			this->textBox1->Text = L" ";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(275, 407);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->buttonDivide);
			this->Controls->Add(this->buttonCE);
			this->Controls->Add(this->buttonExponential);
			this->Controls->Add(this->buttonFactorial);
			this->Controls->Add(this->buttonEqual);
			this->Controls->Add(this->buttonMult);
			this->Controls->Add(this->buttonMinus);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->buttonDecimal);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void numberButton0_9_Clicked(System::Object^ sender, System::EventArgs^ e) {

	//if (operatorPressed) {			// <- Problem here. If commented out it cannot compute with operator in textbox string. If you use it, it will reset second number after first calculation...
		//textBox1->ResetText();
	//}

	Button^ numbers = safe_cast<Button^>(sender);

	textBox1->AppendText(numbers->Text);

	
	//cout << "numberOne: " << numberOne << " " << "numberTwo: " << numberTwo << " " << "Result: " << result << endl;
	
}
private: System::Void arithmeticButtonClicked(System::Object^ sender, System::EventArgs^ e) {

	numberOne = Double::Parse(textBox1->Text); // Set numberOne before appending operator to display.

	Button^ numbersOperator = safe_cast<Button^>(sender);

	textBox1->AppendText(numbersOperator->Text);
	operatorPressed = true;
	
}
private: System::Void equalButtonClicked(System::Object^ sender, System::EventArgs^ e) {

	numberTwo = Double::Parse(textBox1->Text);
	cout << operatorPressed << endl;
	switch (operatorUsed) {
	case '/': 
		result = numberOne / numberTwo;
		break;
	case '*':
		result = numberOne * numberTwo;
		break;
	case '-':
		result = numberOne - numberTwo;
		break;
	case '+':
		result = numberOne + numberTwo;
		break;
	}

	textBox1->ResetText();
	textBox1->Text = result.ToString();

}
private: System::Void dividePressed(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	operatorUsed = '/';
}
private: System::Void multiplyPressed(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	operatorUsed = '*';
}
private: System::Void subtractPressed(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	operatorUsed = '-';
}
private: System::Void additionPressed(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	operatorUsed = '+';
}

};
}

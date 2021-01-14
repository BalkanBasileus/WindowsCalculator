#pragma once
#include<iostream>
#include<string>
#include<iomanip>

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

			// Initialize Variables
			numberOne = 0;
			numberTwo = 0;
			result = 0;
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
		double const PI = 3.14159;
		double const E = 2.71828;

	// Menu Buttons
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ viewToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ viewToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ setPrecisionToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ regularToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ scientificToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
	private: System::Windows::Forms::Button^ button_e;

	private: System::Windows::Forms::Button^ buttonPi;
	private: System::Windows::Forms::Button^ exponentThree;



	private: System::Windows::Forms::Button^ buttonDel;
	private: System::Windows::Forms::Button^ button_Cos;

	private: System::Windows::Forms::Button^ button_Sin;
	private: System::Windows::Forms::Button^ button_Fraction;



	private: System::Windows::Forms::Button^ button_Tan;





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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->regularToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->scientificToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setPrecisionToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button_e = (gcnew System::Windows::Forms::Button());
			this->buttonPi = (gcnew System::Windows::Forms::Button());
			this->exponentThree = (gcnew System::Windows::Forms::Button());
			this->buttonDel = (gcnew System::Windows::Forms::Button());
			this->button_Cos = (gcnew System::Windows::Forms::Button());
			this->button_Sin = (gcnew System::Windows::Forms::Button());
			this->button_Fraction = (gcnew System::Windows::Forms::Button());
			this->button_Tan = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
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
			this->buttonDecimal->Click += gcnew System::EventHandler(this, &MyForm::makeDecimal);
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
			this->buttonCE->Click += gcnew System::EventHandler(this, &MyForm::clearCE);
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
			this->buttonExponential->Click += gcnew System::EventHandler(this, &MyForm::exponetTwo_Clicked);
			// 
			// buttonFactorial
			// 
			this->buttonFactorial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonFactorial->Location = System::Drawing::Point(280, 115);
			this->buttonFactorial->Name = L"buttonFactorial";
			this->buttonFactorial->Size = System::Drawing::Size(58, 52);
			this->buttonFactorial->TabIndex = 15;
			this->buttonFactorial->Text = L"n!";
			this->buttonFactorial->UseVisualStyleBackColor = true;
			this->buttonFactorial->Click += gcnew System::EventHandler(this, &MyForm::factorial);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(13, 49);
			this->textBox1->MaximumSize = System::Drawing::Size(300, 300);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(250, 60);
			this->textBox1->TabIndex = 19;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->viewToolStripMenuItem,
					this->viewToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(564, 24);
			this->menuStrip1->TabIndex = 20;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->regularToolStripMenuItem,
					this->scientificToolStripMenuItem
			});
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->viewToolStripMenuItem->Text = L"Edit";
			// 
			// regularToolStripMenuItem
			// 
			this->regularToolStripMenuItem->Name = L"regularToolStripMenuItem";
			this->regularToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->regularToolStripMenuItem->Text = L"Regular";
			this->regularToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::regularMode);
			// 
			// scientificToolStripMenuItem
			// 
			this->scientificToolStripMenuItem->Name = L"scientificToolStripMenuItem";
			this->scientificToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->scientificToolStripMenuItem->Text = L"Scientific";
			this->scientificToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::scientificMode);
			// 
			// viewToolStripMenuItem1
			// 
			this->viewToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->setPrecisionToolStripMenuItem1 });
			this->viewToolStripMenuItem1->Name = L"viewToolStripMenuItem1";
			this->viewToolStripMenuItem1->Size = System::Drawing::Size(44, 20);
			this->viewToolStripMenuItem1->Text = L"View";
			// 
			// setPrecisionToolStripMenuItem1
			// 
			this->setPrecisionToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem2,
					this->toolStripMenuItem3, this->toolStripMenuItem4
			});
			this->setPrecisionToolStripMenuItem1->Name = L"setPrecisionToolStripMenuItem1";
			this->setPrecisionToolStripMenuItem1->Size = System::Drawing::Size(141, 22);
			this->setPrecisionToolStripMenuItem1->Text = L"Set Precision";
			this->setPrecisionToolStripMenuItem1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(101, 22);
			this->toolStripMenuItem2->Text = L"0.0";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::setPrecisionTenths);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(101, 22);
			this->toolStripMenuItem3->Text = L"0.00";
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(101, 22);
			this->toolStripMenuItem4->Text = L"0.000";
			// 
			// button_e
			// 
			this->button_e->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_e->Location = System::Drawing::Point(471, 115);
			this->button_e->Name = L"button_e";
			this->button_e->Size = System::Drawing::Size(58, 52);
			this->button_e->TabIndex = 24;
			this->button_e->Text = L"e";
			this->button_e->UseVisualStyleBackColor = true;
			this->button_e->Click += gcnew System::EventHandler(this, &MyForm::button_e_Pressed);
			// 
			// buttonPi
			// 
			this->buttonPi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPi->Location = System::Drawing::Point(407, 115);
			this->buttonPi->Name = L"buttonPi";
			this->buttonPi->Size = System::Drawing::Size(58, 52);
			this->buttonPi->TabIndex = 23;
			this->buttonPi->Text = L" π";
			this->buttonPi->UseVisualStyleBackColor = true;
			this->buttonPi->Click += gcnew System::EventHandler(this, &MyForm::buttonPi_Pressed);
			// 
			// exponentThree
			// 
			this->exponentThree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exponentThree->Location = System::Drawing::Point(343, 115);
			this->exponentThree->Name = L"exponentThree";
			this->exponentThree->Size = System::Drawing::Size(58, 52);
			this->exponentThree->TabIndex = 22;
			this->exponentThree->Text = L"n^3";
			this->exponentThree->UseVisualStyleBackColor = true;
			this->exponentThree->Click += gcnew System::EventHandler(this, &MyForm::exponentThree_Clicked);
			// 
			// buttonDel
			// 
			this->buttonDel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDel->Location = System::Drawing::Point(13, 115);
			this->buttonDel->Name = L"buttonDel";
			this->buttonDel->Size = System::Drawing::Size(58, 52);
			this->buttonDel->TabIndex = 21;
			this->buttonDel->Text = L"Del";
			this->buttonDel->UseVisualStyleBackColor = true;
			this->buttonDel->Click += gcnew System::EventHandler(this, &MyForm::buttonDel_Click);
			// 
			// button_Cos
			// 
			this->button_Cos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Cos->Location = System::Drawing::Point(343, 173);
			this->button_Cos->Name = L"button_Cos";
			this->button_Cos->Size = System::Drawing::Size(58, 52);
			this->button_Cos->TabIndex = 26;
			this->button_Cos->Text = L"Cos";
			this->button_Cos->UseVisualStyleBackColor = true;
			// 
			// button_Sin
			// 
			this->button_Sin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Sin->Location = System::Drawing::Point(280, 173);
			this->button_Sin->Name = L"button_Sin";
			this->button_Sin->Size = System::Drawing::Size(58, 52);
			this->button_Sin->TabIndex = 25;
			this->button_Sin->Text = L"Sin";
			this->button_Sin->UseVisualStyleBackColor = true;
			// 
			// button_Fraction
			// 
			this->button_Fraction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_Fraction->Location = System::Drawing::Point(471, 173);
			this->button_Fraction->Name = L"button_Fraction";
			this->button_Fraction->Size = System::Drawing::Size(58, 52);
			this->button_Fraction->TabIndex = 28;
			this->button_Fraction->Text = L"1/x";
			this->button_Fraction->UseVisualStyleBackColor = true;
			this->button_Fraction->Click += gcnew System::EventHandler(this, &MyForm::button_FractionClicked);
			// 
			// button_Tan
			// 
			this->button_Tan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Tan->Location = System::Drawing::Point(408, 173);
			this->button_Tan->Name = L"button_Tan";
			this->button_Tan->Size = System::Drawing::Size(58, 52);
			this->button_Tan->TabIndex = 27;
			this->button_Tan->Text = L"Tan";
			this->button_Tan->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(564, 411);
			this->Controls->Add(this->button_Fraction);
			this->Controls->Add(this->button_Tan);
			this->Controls->Add(this->button_Cos);
			this->Controls->Add(this->button_Sin);
			this->Controls->Add(this->button_e);
			this->Controls->Add(this->buttonPi);
			this->Controls->Add(this->exponentThree);
			this->Controls->Add(this->buttonDel);
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
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void numberButton0_9_Clicked(System::Object^ sender, System::EventArgs^ e) {	// PROBLEM WITH "10.2 - .2". Results in "10.2 - 2"

	// if display contains decimal number with operator. Ex: "1.5+*"
	if ( operatorPressed && numberOne.ToString()->Contains(".") ) {
		
		textBox1->ResetText();
		Button^ numbers = safe_cast<Button^>(sender);
		textBox1->AppendText(numbers->Text);
	}
	// If display only "."
	else if ( textBox1->Text->Length == 1 && textBox1->Text->Contains(".") ) {
		// Else append. Ex: . -> .1
		Button^ numbers = safe_cast<Button^>(sender);

		textBox1->AppendText(numbers->Text);
	}
	else {
		// Else append. Ex: 1 -> 18
		Button^ numbers = safe_cast<Button^>(sender);

		textBox1->AppendText(numbers->Text);
	}

	// If arithmetic oper. already pressed, reset display in order to get second number.
	if ( operatorPressed && !textBox1->Text->Contains(".") ) {
		textBox1->ResetText();
		operatorPressed = false;

		// Else append. Ex: 1 -> 18
		Button^ numbers = safe_cast<Button^>(sender);

		textBox1->AppendText(numbers->Text);
	}
	
}
private: System::Void arithmeticButtonClicked(System::Object^ sender, System::EventArgs^ e) {
	// Appends spciic operator to display and initializes numberOne
	
	// If screen blank, do nothing.
	if (textBox1->Text->Length == NULL) {
		textBox1->AppendText("");
	}
	else {
		numberOne = Double::Parse(textBox1->Text); // Set numberOne before appending operator to display.

		Button^ numbersOperator = safe_cast<Button^>(sender);

		textBox1->AppendText(numbersOperator->Text);
		operatorPressed = true;
	}
	
}
private: System::Void equalButtonClicked(System::Object^ sender, System::EventArgs^ e) {
	// Initializes second number and performs math based on operator pressed.

	// If screen blank, do nothing.
	if (textBox1->Text->Length == NULL) {
		textBox1->AppendText("");
	}
	else {
		numberTwo = Double::Parse(textBox1->Text);

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

		// Display result to screen.
		textBox1->ResetText();
		textBox1->Text = result.ToString();

		//Reset numbers 
		numberOne = 0;
		numberTwo = 0;
		result = 0;

		operatorPressed = false;	//Reset for numberButton0_9_Clicked
	}

}

// Functions set operator for switch statement in equalButtonClicked function

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


// Exponentiate n^2
private: System::Void exponetTwo_Clicked(System::Object^ sender, System::EventArgs^ e) {
	// Return number on display ^ 2

	// If screen blank, do nothing.
	if (textBox1->Text->Length == NULL) {
		textBox1->AppendText("");
	}
	else {
		// n^2
		double exponentiateNumber = Double::Parse(textBox1->Text);
		exponentiateNumber *= exponentiateNumber;

		//Display
		textBox1->ResetText();
		textBox1->Text = exponentiateNumber.ToString();
	}
}


// CE
private: System::Void clearCE(System::Object^ sender, System::EventArgs^ e) {
	// Resets everything.

	textBox1->ResetText();
	numberOne = 0;
	numberTwo = 0;
	result = 0;
}

// n!
private: System::Void factorial(System::Object^ sender, System::EventArgs^ e) {
	// Calculates factorial of number on display

	// If screen blank, do nothing.
	if (textBox1->Text->Length == NULL) {
		textBox1->AppendText("");
	}
	else {
		double answer = 1;

		double n = Double::Parse(textBox1->Text); // Number from display
		int i = 1; // index

		// Factorial in reverse. 5! = 1 * 2 * 3 * 4 * 5.
		while (i <= n)
		{
			answer = answer * i;
			i++;
		}

		//Display
		textBox1->ResetText();
		textBox1->Text = answer.ToString();
	}
}

private: System::Void makeDecimal(System::Object^ sender, System::EventArgs^ e) {
	// Sets decimal

	// if blank screen
	if (textBox1->Text->Length == NULL) {
		textBox1->AppendText(".");
	}

	// After pressing operator button, reset screen and append decimal. Ex: (3 + .5) = 3 + -> . -> .5 -> = -> 3.5
	else if (operatorPressed && !textBox1->Text->Length == NULL) {
		textBox1->ResetText();
		textBox1->AppendText(".");
	}
	// Prevent two decimals side by side. Ex: 3..5 or .3.5
	if ( !textBox1->Text->Contains(".") ) {
		textBox1->AppendText(".");
	}

}

// Edit & View Menu Options
private: System::Void scientificMode(System::Object^ sender, System::EventArgs^ e) {

	MyForm::Width = 580;
}
private: System::Void regularMode(System::Object^ sender, System::EventArgs^ e) {

	MyForm::Width = 290;
}
private: System::Void setPrecisionTenths(System::Object^ sender, System::EventArgs^ e) {

	// Need to figure out how to set precision.
//	textBox1->Text-> setprecision(1);
}


private: System::Void buttonDel_Click(System::Object^ sender, System::EventArgs^ e) {
	// Delete last entry on display

	if (textBox1->Text->Length > 0) {
		// Display
		textBox1->Text = textBox1->Text->Substring(0, textBox1->Text->Length - 1);
	}
	else {
		// Do Nothing
	}

}
private: System::Void buttonPi_Pressed(System::Object^ sender, System::EventArgs^ e) {


	// 
	if (numberOne != 0 && operatorPressed || numberOne == 0 && !operatorPressed) {
		textBox1->ResetText();
		textBox1->AppendText("3.14159");
	}
	// If Display contains somehting
	else if (textBox1->Text->Length > 0) {
		// Do nothing	
	}
	// Append Pi
	else if (textBox1->Text->Length == 0) {
		textBox1->AppendText("3.14159");
	}
}
private: System::Void button_e_Pressed(System::Object^ sender, System::EventArgs^ e) {

	// 
	if (numberOne != 0 && operatorPressed || numberOne == 0 && !operatorPressed) {
		textBox1->ResetText();
		textBox1->AppendText("2.71828");
	}
	// If Display contains somehting
	else if (textBox1->Text->Length > 0) {
		// Do nothing	
	}
	// Append e
	else if (textBox1->Text->Length == 0) {
		textBox1->AppendText("2.71828");
	}
}

private: System::Void button_FractionClicked(System::Object^ sender, System::EventArgs^ e) {
	// Fraction. 1/x

	// If screen blank, do nothing.
	if (textBox1->Text->Length == NULL) {
		textBox1->AppendText("");
	}
	else { // Otherwise, compute 1/x

		double answer = 0;
		double numerator = 1.0;
		double denominator = Double::Parse(textBox1->Text);

		answer = numerator / denominator;

		// Display
		textBox1->Text = answer.ToString();
	}


}

// n^3
private: System::Void exponentThree_Clicked(System::Object^ sender, System::EventArgs^ e) {
	// Return number on display ^ 3

	// If screen blank, do nothing.
	if (textBox1->Text->Length == NULL) {
		textBox1->AppendText("");
	}
	else {
		// n^2
		double exponentiateNumber = Double::Parse(textBox1->Text);
		exponentiateNumber *= (exponentiateNumber * exponentiateNumber); // n^3

		//Display
		textBox1->ResetText();
		textBox1->Text = exponentiateNumber.ToString();
	}
}


};
}

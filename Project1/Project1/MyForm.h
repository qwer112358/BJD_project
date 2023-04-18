#pragma once
#include <cmath>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		double P;
		double L;
		double B;
		double H;
		double Fl;
		double Eh;
		double Kz;
		double Z;
		double Wt;
		double Sn;
		double n;
		double eta;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::ToolTip^ toolTip2;
	private: System::Windows::Forms::ToolTip^ toolTip4;
	private: System::Windows::Forms::ToolTip^ toolTip3;
	private: System::Windows::Forms::ToolTip^ toolTip5;
	private: System::Windows::Forms::ToolTip^ toolTip10;
	private: System::Windows::Forms::ToolTip^ toolTip6;
	private: System::Windows::Forms::ToolTip^ toolTip7;
	private: System::Windows::Forms::ToolTip^ toolTip8;
	private: System::Windows::Forms::ToolTip^ toolTip12;
	private: System::Windows::Forms::ToolTip^ toolTip9;
	private: System::Windows::Forms::ToolTip^ toolTip11;
	private: System::Windows::Forms::ToolTip^ toolTip13;
	private: System::Windows::Forms::ToolTip^ toolTip14;
	private: System::Windows::Forms::ToolTip^ toolTip18;
	private: System::Windows::Forms::ToolTip^ toolTip15;
	private: System::Windows::Forms::ToolTip^ toolTip16;
	private: System::Windows::Forms::ToolTip^ toolTip19;
	private: System::Windows::Forms::ToolTip^ toolTip17;
		   double myu;


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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;






	private: System::Windows::Forms::Label^ label15;



	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;


	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;


	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ методРасчетаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ способКоэффициентаИспользованияСветовогоПотокаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ способУдельнойМощностиСветильникаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ способМетодСветящихсяЛинийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ электрическаяМощностьСветильникаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ вычислитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ электрическаяМощностьСветильникаToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox2;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::ToolStripMenuItem^ вычислитьToolStripMenuItem1;












	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->методРасчетаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->способКоэффициентаИспользованияСветовогоПотокаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->способУдельнойМощностиСветильникаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->электрическаяМощностьСветильникаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->вычислитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->способМетодСветящихсяЛинийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->электрическаяМощностьСветильникаToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox2 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->вычислитьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip2 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip3 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip4 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip13 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip14 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip15 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip16 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip17 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip18 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip19 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(15, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 25;
			this->label2->Text = L"L";
			this->toolTip1->SetToolTip(this->label2, L"Длина");
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(15, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 13);
			this->label3->TabIndex = 26;
			this->label3->Text = L"B";
			this->toolTip2->SetToolTip(this->label3, L"Ширина");
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(15, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 13);
			this->label4->TabIndex = 27;
			this->label4->Text = L"Фл";
			this->toolTip4->SetToolTip(this->label4, L"Световой поток лампы");
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(15, 123);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(15, 13);
			this->label5->TabIndex = 28;
			this->label5->Text = L"H";
			this->toolTip3->SetToolTip(this->label5, L"Высота");
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(15, 163);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 13);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Eн";
			this->toolTip13->SetToolTip(this->label6, L"Освещенность");
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(15, 263);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 30;
			this->label7->Text = L"n";
			this->toolTip18->SetToolTip(this->label7, L"Количество ламп в светильнике, т.к. светильник ЛСП");
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(15, 183);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(20, 13);
			this->label8->TabIndex = 31;
			this->label8->Text = L"Kз";
			this->toolTip14->SetToolTip(this->label8, L"Коэффициент запаса");
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Location = System::Drawing::Point(15, 203);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(14, 13);
			this->label9->TabIndex = 32;
			this->label9->Text = L"Z";
			this->toolTip15->SetToolTip(this->label9, L"Коэффициент неравномерности освещения");
			// 
			// textBox1
			// 
			this->textBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox1->Location = System::Drawing::Point(39, 80);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 34;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(39, 100);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 35;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(39, 120);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 36;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(39, 140);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 37;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(39, 160);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 38;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(39, 180);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 39;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Location = System::Drawing::Point(15, 223);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(23, 13);
			this->label15->TabIndex = 46;
			this->label15->Text = L"Wт";
			this->toolTip16->SetToolTip(this->label15, L"Табличная удельная мощность");
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Location = System::Drawing::Point(15, 283);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(13, 13);
			this->label19->TabIndex = 50;
			this->label19->Text = L"η";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Location = System::Drawing::Point(15, 303);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(13, 13);
			this->label20->TabIndex = 51;
			this->label20->Text = L"μ";
			this->toolTip19->SetToolTip(this->label20, L"Коэффициент учитывающий влияние удаленной линии");
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Location = System::Drawing::Point(15, 243);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(20, 13);
			this->label23->TabIndex = 54;
			this->label23->Text = L"Sn";
			this->toolTip17->SetToolTip(this->label23, L"Площадь помещения");
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(39, 200);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 55;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(39, 220);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 56;
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(39, 240);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 57;
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(39, 260);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 58;
			this->textBox10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(39, 280);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 59;
			this->textBox11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(39, 300);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 60;
			this->textBox12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Location = System::Drawing::Point(307, 124);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(298, 156);
			this->label10->TabIndex = 63;
			this->label10->Text = resources->GetString(L"label10.Text");
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Location = System::Drawing::Point(145, 83);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(21, 13);
			this->label13->TabIndex = 65;
			this->label13->Text = L"[м]";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Location = System::Drawing::Point(145, 103);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(21, 13);
			this->label14->TabIndex = 66;
			this->label14->Text = L"[м]";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Location = System::Drawing::Point(145, 123);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(21, 13);
			this->label16->TabIndex = 67;
			this->label16->Text = L"[м]";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Location = System::Drawing::Point(145, 143);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(25, 13);
			this->label17->TabIndex = 68;
			this->label17->Text = L"[лк]";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Location = System::Drawing::Point(145, 163);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(25, 13);
			this->label18->TabIndex = 69;
			this->label18->Text = L"[лк]";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Location = System::Drawing::Point(145, 183);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(25, 13);
			this->label21->TabIndex = 70;
			this->label21->Text = L"[лк]";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Location = System::Drawing::Point(145, 223);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(20, 13);
			this->label22->TabIndex = 71;
			this->label22->Text = L"[В]";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Location = System::Drawing::Point(145, 243);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(24, 13);
			this->label24->TabIndex = 72;
			this->label24->Text = L"[м²]";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(111, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(369, 24);
			this->label1->TabIndex = 62;
			this->label1->Text = L"Расчет освещенности рабочих мест";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->методРасчетаToolStripMenuItem,
					this->оПрограммеToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(617, 24);
			this->menuStrip1->TabIndex = 73;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// методРасчетаToolStripMenuItem
			// 
			this->методРасчетаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->способКоэффициентаИспользованияСветовогоПотокаToolStripMenuItem,
					this->способУдельнойМощностиСветильникаToolStripMenuItem, this->способМетодСветящихсяЛинийToolStripMenuItem
			});
			this->методРасчетаToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->методРасчетаToolStripMenuItem->Name = L"методРасчетаToolStripMenuItem";
			this->методРасчетаToolStripMenuItem->Size = System::Drawing::Size(103, 20);
			this->методРасчетаToolStripMenuItem->Text = L"Метод расчета";
			// 
			// способКоэффициентаИспользованияСветовогоПотокаToolStripMenuItem
			// 
			this->способКоэффициентаИспользованияСветовогоПотокаToolStripMenuItem->Name = L"способКоэффициентаИспользованияСветовогоПотокаToolStripMenuItem";
			this->способКоэффициентаИспользованияСветовогоПотокаToolStripMenuItem->Size = System::Drawing::Size(416, 22);
			this->способКоэффициентаИспользованияСветовогоПотокаToolStripMenuItem->Text = L"Способ «Коэффициента использования светового потока»";
			this->способКоэффициентаИспользованияСветовогоПотокаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::способКоэффициентаИспользованияСветовогоПотокаToolStripMenuItem_Click);
			// 
			// способУдельнойМощностиСветильникаToolStripMenuItem
			// 
			this->способУдельнойМощностиСветильникаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->электрическаяМощностьСветильникаToolStripMenuItem,
					this->toolStripTextBox1, this->вычислитьToolStripMenuItem
			});
			this->способУдельнойМощностиСветильникаToolStripMenuItem->Name = L"способУдельнойМощностиСветильникаToolStripMenuItem";
			this->способУдельнойМощностиСветильникаToolStripMenuItem->Size = System::Drawing::Size(416, 22);
			this->способУдельнойМощностиСветильникаToolStripMenuItem->Text = L"Способ «Удельной мощности светильника»";
			// 
			// электрическаяМощностьСветильникаToolStripMenuItem
			// 
			this->электрическаяМощностьСветильникаToolStripMenuItem->Name = L"электрическаяМощностьСветильникаToolStripMenuItem";
			this->электрическаяМощностьСветильникаToolStripMenuItem->Size = System::Drawing::Size(302, 22);
			this->электрическаяМощностьСветильникаToolStripMenuItem->Text = L"Электрическая мощность светильника";
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Size = System::Drawing::Size(100, 23);
			this->toolStripTextBox1->Text = L"0";
			this->toolStripTextBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// вычислитьToolStripMenuItem
			// 
			this->вычислитьToolStripMenuItem->Name = L"вычислитьToolStripMenuItem";
			this->вычислитьToolStripMenuItem->Size = System::Drawing::Size(302, 22);
			this->вычислитьToolStripMenuItem->Text = L"Вычислить";
			this->вычислитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вычислитьToolStripMenuItem_Click);
			// 
			// способМетодСветящихсяЛинийToolStripMenuItem
			// 
			this->способМетодСветящихсяЛинийToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->электрическаяМощностьСветильникаToolStripMenuItem1,
					this->toolStripTextBox2, this->вычислитьToolStripMenuItem1
			});
			this->способМетодСветящихсяЛинийToolStripMenuItem->Name = L"способМетодСветящихсяЛинийToolStripMenuItem";
			this->способМетодСветящихсяЛинийToolStripMenuItem->Size = System::Drawing::Size(416, 22);
			this->способМетодСветящихсяЛинийToolStripMenuItem->Text = L"Способ «Метод светящихся линий»";
			// 
			// электрическаяМощностьСветильникаToolStripMenuItem1
			// 
			this->электрическаяМощностьСветильникаToolStripMenuItem1->Name = L"электрическаяМощностьСветильникаToolStripMenuItem1";
			this->электрическаяМощностьСветильникаToolStripMenuItem1->Size = System::Drawing::Size(302, 22);
			this->электрическаяМощностьСветильникаToolStripMenuItem1->Text = L"Электрическая мощность светильника";
			// 
			// toolStripTextBox2
			// 
			this->toolStripTextBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox2->Name = L"toolStripTextBox2";
			this->toolStripTextBox2->Size = System::Drawing::Size(100, 23);
			this->toolStripTextBox2->Text = L"0";
			this->toolStripTextBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// вычислитьToolStripMenuItem1
			// 
			this->вычислитьToolStripMenuItem1->Name = L"вычислитьToolStripMenuItem1";
			this->вычислитьToolStripMenuItem1->Size = System::Drawing::Size(302, 22);
			this->вычислитьToolStripMenuItem1->Text = L"Вычислить";
			this->вычислитьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::вычислитьToolStripMenuItem1_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(95, 20);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оПрограммеToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(617, 333);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Расчет освещенности рабочих мест";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


//private: void isEmptyTextBox(System::String^ Text) {
private: bool isEmptyTextBox(System::Windows::Forms::TextBox^ textbox) {
	bool flag;
	if(flag = textbox->Text->Length==0)
		MessageBox::Show(this, "Заполните все поля!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
	return flag;
}

private: bool isEmptyTextBox(System::Windows::Forms::ToolStripTextBox^ textbox) {
	bool flag;
	if (flag = textbox->Text->Length == 0)
		MessageBox::Show(this, "Заполните все поля!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
	return !flag;
}

private: bool inputNotValidation() {
	bool flag = isEmptyTextBox(this->textBox1);
	if (!flag) flag = isEmptyTextBox(this->textBox2);
	if (!flag) flag = isEmptyTextBox(this->textBox3);
	if (!flag) flag = isEmptyTextBox(this->textBox4);
	if (!flag) flag = isEmptyTextBox(this->textBox5);
	if (!flag) flag = isEmptyTextBox(this->textBox6);
	if (!flag) flag = isEmptyTextBox(this->textBox7);
	if (!flag) flag = isEmptyTextBox(this->textBox8);
	if (!flag) flag = isEmptyTextBox(this->textBox9);
	if (!flag) flag = isEmptyTextBox(this->textBox10);
	if (!flag) flag = isEmptyTextBox(this->textBox11);
	if (!flag) flag = isEmptyTextBox(this->textBox12);
	if (!flag) flag = isEmptyTextBox(this->toolStripTextBox1);
	return flag;
}


private: void printResult(int N, double FsvShtrih) {
	FsvShtrih = round(FsvShtrih * 100) / 100;
	System::String^ result = "Общий световой поток: " + FsvShtrih.ToString() + " лк" + "\nОбщее количество светильников: " + N.ToString();
	MessageBox::Show(this, result, "Вычисление завершено", MessageBoxButtons::OK);
}


private: bool initValues() {
	if (inputNotValidation()) 
		return false;
	P = System::Double::Parse(this->toolStripTextBox1->Text);
	L = System::Double::Parse(this->textBox1->Text);
	B = System::Double::Parse(this->textBox2->Text);
	H = System::Double::Parse(this->textBox3->Text);
	Fl = System::Double::Parse(this->textBox4->Text);
	Eh = System::Double::Parse(this->textBox5->Text);
	Kz = System::Double::Parse(this->textBox6->Text);
	Z = System::Double::Parse(this->textBox7->Text);
	Wt = System::Double::Parse(this->textBox8->Text);
	Sn = System::Double::Parse(this->textBox9->Text);
	n = System::Double::Parse(this->textBox10->Text);
	eta = System::Double::Parse(this->textBox11->Text);
	myu = System::Double::Parse(this->textBox12->Text);
	return true;
}


private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ message = "Над проектом работали студенты группы 321-20:\nСахабиев Рослан\nИсмагилов Дамир\nМахмудов Бехруз\nЦой Леонид";
	MessageBox::Show(this, message, "О программе", MessageBoxButtons::OK);
}

//1. Способ «Коэффициента использования светового потока»
private: System::Void способКоэффициентаИспользованияСветовогоПотокаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (initValues()) {
		double Fsv = 2 * Fl;
		int N = static_cast<int>((Eh * Sn * Kz * Z * 100) / (Fsv * eta));
		double FsvShtrih = (Eh * Sn * Kz * Z * 100) / (N * eta);
		printResult(N, FsvShtrih);
	}
}


//2. Способ «Удельной мощности светильника»
private: System::Void вычислитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (initValues()) {
		double W = 0.9 * Wt;
		double alpha_kz = 1.3 / 1.5 * W;
		double alpha_z = 1.15 / 1.1 * alpha_kz;
		double alpha_e = 4.0 * alpha_z;
		double K = alpha_e;
		double Wp = K * Wt;
		int N = static_cast<int>((Wp * Sn) / (n * P));
		double FsvShtrih = (Eh * Sn * Kz * Z * 100) / (N * eta);
		printResult(N, FsvShtrih);
	}
}


//3. Способ «Метод светящихся линий»
private: System::Void вычислитьToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (initValues()) {
		double H_shtrih = H - 0.3;
		double L_shtrih = L / H_shtrih;
		double P_shtrih = P / H_shtrih;
		double l = L_shtrih / 2;
		double sigma_e = 42.84; // CHANGE ME!!!
		double Fl_shtrih = (1000 * Eh * Kz * Z) / (myu * sigma_e);
		double Fsv = 2 * Fl;
		int N = static_cast<int>(2 * Fl * L / Fsv);
		double FsvShtrih = (Eh * Sn * Kz * Z * 100) / (N * eta);
		printResult(N, FsvShtrih);
	}
}

private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->textBox1->Text->Contains(".") && !this->textBox1->SelectedText->Contains("."))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->textBox1->Text->Contains("-"))) {
		e->Handled = true;
		textBox1->Text = "-" + textBox1->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
};
}
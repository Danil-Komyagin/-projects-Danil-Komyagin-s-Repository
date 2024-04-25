#pragma once
#include <ctime>





namespace визуализация {

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
	private: System::Windows::Forms::Button^ buttonCreateGraphic;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ temperatura;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ schmell;

















	private: System::ComponentModel::IContainer^ components;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->buttonCreateGraphic = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->temperatura = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->schmell = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-2, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(786, 491);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::Color::Sienna;
			this->buttonExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonExit->FlatAppearance->BorderSize = 0;
			this->buttonExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Personal Chess Trainer", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonExit->Location = System::Drawing::Point(763, 0);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(21, 21);
			this->buttonExit->TabIndex = 1;
			this->buttonExit->Text = L"X";
			this->buttonExit->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm::buttonExit_click);
			// 
			// chart
			// 
			this->chart->BackColor = System::Drawing::Color::Orange;
			this->chart->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->chart->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Center;
			this->chart->BackImageWrapMode = System::Windows::Forms::DataVisualization::Charting::ChartImageWrapMode::Scaled;
			this->chart->BorderlineColor = System::Drawing::Color::OrangeRed;
			this->chart->BorderlineWidth = 0;
			this->chart->BorderSkin->BackColor = System::Drawing::Color::Sienna;
			this->chart->BorderSkin->BackImageWrapMode = System::Windows::Forms::DataVisualization::Charting::ChartImageWrapMode::Scaled;
			this->chart->BorderSkin->BorderColor = System::Drawing::Color::Sienna;
			this->chart->BorderSkin->BorderWidth = 0;
			this->chart->BorderSkin->PageColor = System::Drawing::Color::Sienna;
			chartArea1->BackColor = System::Drawing::Color::Orange;
			chartArea1->BackImageWrapMode = System::Windows::Forms::DataVisualization::Charting::ChartImageWrapMode::Scaled;
			chartArea1->InnerPlotPosition->Auto = false;
			chartArea1->InnerPlotPosition->Height = 89.91409F;
			chartArea1->InnerPlotPosition->Width = 88.8919F;
			chartArea1->InnerPlotPosition->X = 11.1081F;
			chartArea1->InnerPlotPosition->Y = 2.38653F;
			chartArea1->Name = L"ChartArea1";
			chartArea1->Position->Auto = false;
			chartArea1->Position->Height = 92;
			chartArea1->Position->Width = 73;
			chartArea1->Position->Y = 6.99F;
			this->chart->ChartAreas->Add(chartArea1);
			this->chart->Cursor = System::Windows::Forms::Cursors::Default;
			legend1->BackColor = System::Drawing::Color::Cyan;
			legend1->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::TopRight;
			legend1->BorderWidth = 0;
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			legend1->Position->Auto = false;
			legend1->Position->Height = 12.33184F;
			legend1->Position->Width = 25.28993F;
			legend1->Position->X = 73.71008F;
			legend1->Position->Y = 9.005885F;
			legend1->Title = L"Параметр";
			this->chart->Legends->Add(legend1);
			this->chart->Location = System::Drawing::Point(-2, 0);
			this->chart->Name = L"chart";
			series1->BorderWidth = 5;
			series1->ChartArea = L"ChartArea1";
			series1->Color = System::Drawing::Color::Red;
			series1->Legend = L"Legend1";
			series1->MarkerBorderWidth = 3;
			series1->Name = L"Мёд";
			series2->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::LeftRight;
			series2->BorderWidth = 5;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::Blue;
			series2->Legend = L"Legend1";
			series2->LegendText = L"Влажность";
			series2->MarkerBorderColor = System::Drawing::Color::Lime;
			series2->Name = L"Влажность";
			series2->YValuesPerPoint = 3;
			series3->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			series3->BorderWidth = 5;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series3->EmptyPointStyle->BorderWidth = 3;
			series3->EmptyPointStyle->Color = System::Drawing::Color::Yellow;
			series3->Legend = L"Legend1";
			series3->LegendText = L"Температура";
			series3->Name = L"Температура";
			this->chart->Series->Add(series1);
			this->chart->Series->Add(series2);
			this->chart->Series->Add(series3);
			this->chart->Size = System::Drawing::Size(439, 491);
			this->chart->TabIndex = 2;
			this->chart->Text = L"chart1";
			title1->Name = L"Title1";
			title1->Text = L"График";
			this->chart->Titles->Add(title1);
			this->chart->Click += gcnew System::EventHandler(this, &MyForm::chart_Click);
			// 
			// buttonCreateGraphic
			// 
			this->buttonCreateGraphic->BackColor = System::Drawing::Color::Chocolate;
			this->buttonCreateGraphic->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buttonCreateGraphic->FlatAppearance->BorderSize = 0;
			this->buttonCreateGraphic->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonCreateGraphic->Location = System::Drawing::Point(328, 46);
			this->buttonCreateGraphic->Name = L"buttonCreateGraphic";
			this->buttonCreateGraphic->Size = System::Drawing::Size(90, 25);
			this->buttonCreateGraphic->TabIndex = 3;
			this->buttonCreateGraphic->Text = L"Влажность";
			this->buttonCreateGraphic->UseVisualStyleBackColor = false;
			this->buttonCreateGraphic->Click += gcnew System::EventHandler(this, &MyForm::buttonCreateGraphic_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Chocolate;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(328, 77);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 25);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Привес мёда";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// temperatura
			// 
			this->temperatura->BackColor = System::Drawing::Color::Chocolate;
			this->temperatura->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->temperatura->Location = System::Drawing::Point(328, 108);
			this->temperatura->Name = L"temperatura";
			this->temperatura->Size = System::Drawing::Size(90, 25);
			this->temperatura->TabIndex = 5;
			this->temperatura->Text = L"Температура";
			this->temperatura->UseVisualStyleBackColor = false;
			this->temperatura->Click += gcnew System::EventHandler(this, &MyForm::temperatura_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Orange;
			this->label1->Location = System::Drawing::Point(12, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Orange;
			this->label2->Location = System::Drawing::Point(328, 457);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 7;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204), true));
			this->dateTimePicker1->CalendarForeColor = System::Drawing::Color::Tan;
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::SystemColors::HotTrack;
			this->dateTimePicker1->CalendarTitleBackColor = System::Drawing::SystemColors::Highlight;
			this->dateTimePicker1->CalendarTitleForeColor = System::Drawing::SystemColors::HotTrack;
			this->dateTimePicker1->CalendarTrailingForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->dateTimePicker1->Location = System::Drawing::Point(584, 471);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->BackColor = System::Drawing::Color::Orange;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(325, 304);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(189, 31);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Данные на текущий день:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Orange;
			this->label4->Location = System::Drawing::Point(324, 304);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(190, 107);
			this->label4->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Orange;
			this->label5->Location = System::Drawing::Point(325, 344);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(189, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Влажность                                   г/м³";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Orange;
			this->label6->Location = System::Drawing::Point(325, 367);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(184, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Привес мёда                                 кг";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Orange;
			this->label7->Location = System::Drawing::Point(325, 391);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(181, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Температура                                °C";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Orange;
			this->label8->Location = System::Drawing::Point(448, 344);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 13);
			this->label8->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Orange;
			this->label9->Location = System::Drawing::Point(448, 367);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 15;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Orange;
			this->label10->Location = System::Drawing::Point(448, 391);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 16;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Orange;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(774, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(10, 10);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// schmell
			// 
			this->schmell->BackColor = System::Drawing::Color::Chocolate;
			this->schmell->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->schmell->Location = System::Drawing::Point(584, 0);
			this->schmell->Name = L"schmell";
			this->schmell->Size = System::Drawing::Size(91, 25);
			this->schmell->TabIndex = 17;
			this->schmell->Text = L"Шмель";
			this->schmell->UseVisualStyleBackColor = false;
			this->schmell->Click += gcnew System::EventHandler(this, &MyForm::schmell_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(783, 491);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->schmell);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->temperatura);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->buttonCreateGraphic);
			this->Controls->Add(this->chart);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Paseca";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void buttonExit_click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void buttonCreateGraphic_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void chart_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void temperatura_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void schmell_Click(System::Object^ sender, System::EventArgs^ e);
};
}

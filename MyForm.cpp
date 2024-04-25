#include "MyForm.h"
#include <windows.h>//
#pragma comment(lib,"Winmm.lib")//

//using namespace ppon;//

double prives = 81.4;
double temper = 17.2;
double vlazhn = 96.5;



using namespace std;
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]


int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	визуализация::MyForm form;
	Application::Run(% form);

	//HINSTANCE result;
	////result = ShellExecute(NULL, NULL, L"C:\mus1.MP3", NULL, NULL, SW_SHOWDEFAULT);
//	if ((int)result <= 32) {
//		return 0;
//	}




	return 0;
}


System::Void визуализация::MyForm::buttonCreateGraphic_Click(System::Object^ sender, System::EventArgs^ e)
{
	int a[10] = { 98, 95 ,92, 99, 94 ,96, 95, 91, 93, 92};
	double y;
	this->chart->Series[0]->Points->Clear();
	this->chart->Series[1]->Points->Clear();
	this->chart->Series[2]->Points->Clear();
	for (int i = 0; i < 10; i++) {
		y = a[i];
		this->chart->Series[1]->Points->AddXY(i + 1, a[i]);
	}
	this->label1->Text = L"г/м³";
	this->label2->Text = L"день";

	this->chart->ChartAreas[0]->BackColor = System::Drawing::Color::Aqua;
	this->label10->Text = Convert::ToString(temper);
	this->label9->Text = Convert::ToString(prives);
	this->label8->Text = Convert::ToString(vlazhn);

	//PlaySound(L"gimn-ligi-chempionov-uefa-polnaja-versija.mp3", 0, 0);
	return System::Void();
}

System::Void визуализация::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	// Привес мёда за день
	double a[10] = { 12, 50 ,10, 9, 9 ,32, 9, 23, 9, 2 };
	double y;
	this->chart->Series[0]->Points->Clear();
	this->chart->Series[1]->Points->Clear();
	this->chart->Series[2]->Points->Clear();
	for (int i = 0; i < 10; i++) {
		y = a[i];
		this->chart->Series[0]->Points->AddXY(i + 1, a[i]);
	}

	this->chart->ChartAreas[0]->BackColor = System::Drawing::Color::Aqua;
	this->label10->Text = Convert::ToString(temper);
	this->label9->Text = Convert::ToString(prives);
	this->label8->Text = Convert::ToString(vlazhn);
	this->label1->Text = L"кг";
	this->label2->Text = L"день";





	return System::Void();
}

System::Void визуализация::MyForm::temperatura_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->chart->Series[0]->Points->Clear();
	this->chart->Series[1]->Points->Clear();
	this->chart->Series[2]->Points->Clear();
	double a[10] = { 12, 14, 16, 14, 17 ,25, 26, 23, 20, 18 };
	double y;
	this->chart->Series[1]->Points->Clear();
	for (int i = 0; i < 10; i++) {
		y = a[i];
		this->chart->Series[2]->Points->AddXY(i + 1, a[i]);
	}
	this->chart->ChartAreas[0]->BackColor = System::Drawing::Color::Aqua;
	this->label10->Text = Convert::ToString(temper);
	this->label9->Text = Convert::ToString(prives);
	this->label8->Text = Convert::ToString(vlazhn);
	this->label1->Text = L"°C";
	this->label2->Text = L"час";

	return System::Void();

}

System::Void визуализация::MyForm::schmell_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->pictureBox2->BackColor = System::Drawing::Color::Orange;
	this->pictureBox2->Location = System::Drawing::Point(0, 0);
	this->pictureBox2->Name = L"pictureBox2";
	this->pictureBox2->Size = System::Drawing::Size(784, 491);

	return System::Void();
}


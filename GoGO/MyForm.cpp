#include "MyForm.h"
#include "time.h"

#include <Windows.h>

using namespace GoGO;
using namespace System;
using namespace System::Windows::Forms;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
    srand(time(NULL));
}

System::Void GoGO::MyForm::close_button_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
};

System::Void GoGO::MyForm::start_button_Click(System::Object^ sender, System::EventArgs^ e)
{
    int CoountryNumber = 0;
    int country_count = 12;
    CoountryNumber = rand()% country_count;

    switch (CoountryNumber)
    {
    case 1:
        Result->Visible = true;
        Result->Text = "������";
        break;
    case 2:
        Result->Visible = true;
        Result->Text = "CCC�";
        break;
    case 3:
        Result->Visible = true;
        Result->Text = "���";
        break;
    case 4:
        Result->Visible = true;
        Result->Text = "��������������";
        break;
    case 5:
        Result->Visible = true;
        Result->Text = "��������";
        break;
    case 6:
        Result->Visible = true;
        Result->Text = "�������";
        break;
    case 7:
        Result->Visible = true;
        Result->Text = "�������";
        break;
    case 8:
        Result->Visible = true;
        Result->Text = "������";
        break;
    case 9:
        Result->Visible = true;
        Result->Text = "������";
        break;
    case 10:
        Result->Visible = true;
        Result->Text = "������";
        break;
    case 11:
        Result->Visible = true;
        Result->Text = "�������";
        break;
    case 12:
        Result->Visible = true;
        Result->Text = "�������";
        break;
    default:
       break;
    }
   
    
};
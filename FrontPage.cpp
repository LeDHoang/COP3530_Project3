#include "FrontPage.h"
#include "food2.h"

#include <string>
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

[STAThread]
int main(array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Project3::FrontPage^ form = gcnew Project3::FrontPage();
    Application::Run(form);

    // Get selected items from listBox1
    return 0;
}

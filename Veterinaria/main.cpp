#include "Login.h";
using namespace Veterinaria;

[STAThread]
int main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Login());
    return 0;
}

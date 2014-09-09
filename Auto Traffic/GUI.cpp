#include "GUI.h"

using namespace System;
using namespace System ::Windows::Forms;


[STAThread]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	AutoTraffic::GUI form;
    Application::Run(%form);

	
}


#include "chessBoardForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
Void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	winformCPPchessboard2::chessBoardForm form;
	Application::Run(% form);

}
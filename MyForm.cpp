#include "PantallaInicio.h"

using namespace MatematicaComputacional;

[STAThread]

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew PantallaInicio); //nombre del proyecto
}

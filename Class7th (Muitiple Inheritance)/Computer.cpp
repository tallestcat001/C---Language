#include "Computer.h"

void Computer::Use()
{
	Mouse::Connect();
	KeyBoard::Connect();

	Select();
	Input();
}

#pragma once
#include "Mouse.h"
#include "KeyBoard.h"

class Computer : public Mouse,public KeyBoard
{
public:
	void Use();
};


#include "input_check.h"

bool InputCheck::CheckTargetPlayer(int input)
{
	if (input >= 1 && input <= 6)
	{
		return true;
	}
	else
	{
		return false;
	}
}
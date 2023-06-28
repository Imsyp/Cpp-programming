#include "Çì´õ.h"

void SwapPointer(int*(&pref1), int* (&pref2))
{
	int *ptr = pref1;
	pref1 = pref2;
	pref2 = ptr;
}
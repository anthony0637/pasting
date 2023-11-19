#include "wpm.h"
#include <Windows.h>
#include <iostream>


uintptr_t wpm(HANDLE hProcessors, uintptr_t TheLocalPlayer, uintptr_t Health, DWORD newValue)
{
	WriteProcessMemory(hProcessors, (LPVOID)(TheLocalPlayer + Health), &newValue, sizeof(Health), 0);

	return 0;
}
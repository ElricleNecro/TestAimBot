// ConsoleApplication1.cpp : définit le point d'entrée pour l'application console.
//

#include <Windows.h>
#include <iostream>

#include "Hprocess.h"

CHackProcess fProcess;

DWORD PlayerBase;
DWORD CrosshairId = 0xB2B4;

int id;

void sendkeypress() {

}

int main()
{
	fProcess.RunProcess();
	while (true) {
		ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(scan.LocalPlayerBase3), &PlayerBase, sizeof(PlayerBase), 0);
		ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(PlayerBase + CrosshairId), &id, sizeof(id), 0);

		if (GetAsyncKeyState(VK_MBUTTON) && id > 0) {
			sendkeypress();
		}

		Sleep(1);
	}

    return 0;
}


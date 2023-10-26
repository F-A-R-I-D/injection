#include<stdio.h>
#include<Windows.h>


int message() {
	MessageBoxA(NULL, "faaaarid", "khaaaaaan", MB_OK);
}
int main(int argc, char** argv) {

	int(*fp)() = &message;
	DWORD64* fpnum = (DWORD64)fp;
	fpnum -= 1234;
	int num = atoi(argv[1]);
	fpnum += num;
	int (*fp2)() = (int (*)())fpnum;
	fp2();




}
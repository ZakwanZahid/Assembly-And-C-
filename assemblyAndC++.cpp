#include <iostream>
#include<Windows.h>
using namespace std;
extern "C" int bubbleSort();
int main()
{
	int size = 10;
	cout << "ASM ....: \n"<<bubbleSort();
	system("pause");
	return 0;
}


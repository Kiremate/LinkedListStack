#define _CRTDBG_MAP_ALLOC  
#include <iostream>
#include <conio.h>
#include <stdlib.h>  
#include <crtdbg.h>  
#include "Stack.h"
#include "main.h"
using namespace std;

void test1();
void test2();
void test3();
void test4();
void test5();
void test6();
void test7();
void test8();
void test9();

int main() {

	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);

	_CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDERR);

	_CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_FILE);

	_CrtSetReportFile(_CRT_ERROR, _CRTDBG_FILE_STDERR);

	_CrtSetReportMode(_CRT_ASSERT, _CRTDBG_MODE_FILE);

	_CrtSetReportFile(_CRT_ASSERT, _CRTDBG_FILE_STDERR);



	test1();

	test2();

	test3();

	test4();

	test5();

	test6();

	test7();

	test8();

	test9();

	while (!_kbhit());
	return 0;
}

void test1()
{
	bloodmask::Stack s = bloodmask::Stack();

	s.Push(69);
	s.Push(32);
	s.Push(11);

	if (s.Pop() == 11 && s.Pop() == 32 && s.Pop() == 69 && s.Empty())
	{
		cout << "    Test 1 passed!\n";
	}
	else
	{
		cout << "*** Test 1 failed!\n";
	}
}

void test2()
{
	bloodmask::Stack s;
	s.Push(5);
	s.Push(3);
	s.Push(3);
	s.Push(3);
	if (s.Size() == 4)
	{
		cout <<"    Test 2 passed!\n";
	}
	else
	{
		cout <<"*** Test 2 failed!\n";
	}
}

void test3()
{
	bloodmask::Stack s;
	s.Push(5);
	s.Push(3);
	s.Pop();
	s.Push(69);
	s.Push(69);
	s.Push(69);
	s.Push(69);
	s.Pop();
	s.Pop();
	s.Pop();
	if (s.Size() == 2)
	{
		cout <<"    Test 3 passed!\n";
	}
	else
	{
		cout <<"*** Test 3 failed!\n";
	}
}

void test4()
{
	bloodmask::Stack s;
	s.Push(5);
	s.Push(3);
	s.Pop();
	s.Pop();
	s.Pop();
	s.Pop();
	if (s.Size() == 0)
	{
		cout <<"    Test 4 passed!\n";
	}
	else
	{
		cout <<"*** Test 4 failed!\n";
	}
}

void test5()
{
	bloodmask::Stack s;
	s.Push(5);
	s.Push(3);

	bloodmask::Stack s2 = s;
	s2.Pop();

	if (s.Size() == 2 && s2.Pop() == 5)
	{
		cout <<"    Test 5 passed!\n";
	}
	else
	{
		cout <<"*** Test 5 failed!\n";
	}
}

void test6()
{
	bloodmask::Stack s;
	s.Push(5);
	s.Push(3);

	{
		bloodmask::Stack s2 = s;
		s2.Pop();
	}

	if (s.Size() == 2 && s.Pop() == 3)
	{
		cout <<"    Test 6 passed!\n";
	}
	else
	{
		cout <<"*** Test 6 failed!\n";
	}
}

void test7()
{
	bloodmask::Stack s;
	s.Push(5);
	s.Push(3);

	bloodmask::Stack s2;
	s2 = s;
	s2.Pop();

	if (s.Size() == 2 && s2.Pop() == 5)
	{
		cout <<"    Test 7 passed!\n";
	}
	else
	{
		cout <<"*** Test 7 failed!\n";
	}
}

void test8()
{
	bloodmask::Stack s;
	s.Push(5);
	s.Push(3);

	{
		bloodmask::Stack s2;
		s2 = s;
		s2.Pop();
	}

	if (s.Size() == 2 && s.Pop() == 3)
	{
		cout <<"    Test 8 passed!\n";
	}
	else
	{
		cout <<"*** Test 8 failed!\n";
	}
}

void test9()
{
	bloodmask::Stack s;
	s.Push(5);
	s.Push(3);

	{
		bloodmask::Stack s2;
		s2.Push(828374);
		s2.Push(3454);
		s2 = s;
		s2.Pop();
	}

	if (s.Size() == 2 && s.Pop() == 3)
	{
		cout <<"    Test 9 passed!\n";
	}
	else
	{
		cout <<"*** Test 9 failed!\n";
	}
}
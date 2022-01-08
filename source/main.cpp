#include <iostream>
#include <conio.h>
#include "Stack.h"
using namespace std;


int main() {

	bloodmask::Stack stackTest = bloodmask::Stack();

	stackTest.Push(69);
	stackTest.Push(32);
	stackTest.Push(11);

	/*cout << stackTest.topElement->GetVal() << endl;
	stackTest.Pop();
	cout << stackTest.topElement->GetVal() << endl;
	stackTest.Pop();
	cout << stackTest.topElement->GetVal() << endl;
	stackTest.Pop();*/

	if (stackTest.Pop() == 11 && stackTest.Pop() == 32 && stackTest.Pop() == 69 && stackTest.Empty())
	{
		cout << "    Test 1 passed!\n";
	}
	else
	{
		cout << "*** Test 1 failed!\n";
	}

	while (!_kbhit);
	return 0;
}
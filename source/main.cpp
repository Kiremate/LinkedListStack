#include <iostream>
#include <conio.h>
#include "Stack.h"
using namespace std;


int main() {

	bloodmask::Stack stackTest = bloodmask::Stack();

	stackTest.Push(69);
	stackTest.Push(32);
	stackTest.Push(11);

	cout << stackTest.topElement->GetVal() << endl;
	stackTest.Pop();
	cout << stackTest.topElement->GetVal() << endl;
	stackTest.Pop();
	cout << stackTest.topElement->GetVal() << endl;

	while (!_kbhit);
	return 0;
}
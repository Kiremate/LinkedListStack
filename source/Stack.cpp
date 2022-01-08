#include "Stack.h"

void bloodmask::Stack::Push(int value)
{
	// Current topElement points to a new Element with a value and becomes new TopElement
	topElement = new Element(value, topElement);
}

int bloodmask::Stack::Pop()
{

	if (Empty())
		return -1;
	else {
		const int oldval = topElement->GetVal();
		auto tmpElem = topElement;
		topElement = tmpElem->Disconnect();
		delete tmpElem;
		tmpElem = nullptr;
		return oldval;
	}
	return 0;
}

int bloodmask::Stack::Size() const
{
	if (!Empty)
		return topElement->CountElements();
	else
		return 0;
}

bool bloodmask::Stack::Empty() const
{
	return topElement == nullptr;

}

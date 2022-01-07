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
		auto tmpElem = topElement;
		topElement->value = tmpElem->pNext->value;
		topElement = tmpElem->pNext;

		tmpElem->Disconnect();
		delete tmpElem;
		tmpElem = nullptr;
	}
	return 0;
}

int bloodmask::Stack::Size() const
{
	return topElement->CountElements();
}

bool bloodmask::Stack::Empty() const
{
	return topElement == nullptr;

}

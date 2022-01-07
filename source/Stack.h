
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
 *                                                                             *
 *  Stack                                                                      *
 *  Copyright © 2022+ Erik Mateos Morcillo                                     *
 *                                                                             *
 *  Distributed under the MIT License                                          *
 *  See documents/LICENSE.TXT												   *
 *                                                                             *
 *  bloodmaskofficial@gmail.com                                                *
 *                                                                             *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef STACK_H
#define STACK_H

namespace bloodmask {



	class Stack {

	private:
	
		class Element {


		public:

			int value;
			Element* pNext = nullptr;

			Element(int val, Element* pNext) : value(val), pNext(pNext) {}

			Element(const Element& src) : value(src.value) {
				if (src.pNext != nullptr)
					pNext = new Element(*src.pNext);
			}

			~Element() {
				delete pNext;
				pNext = nullptr;
			}

			// Assign operator
			Element& operator=(const Element&) = delete;

			int GetVal() const {
				return value;
			}

			Element* Disconnect() {
				auto pTempt = pNext;
				pNext = nullptr;
				return pTempt;
			}

			int CountElements() const {
				if (pNext != nullptr)
					return pNext->CountElements() + 1;
				else
					return 1;
			}
			


		};

	public:

		void Push(int value);
		int Pop();
		int Size() const;
		bool Empty() const;

		Element* topElement;

	};



}

#endif // !STACK
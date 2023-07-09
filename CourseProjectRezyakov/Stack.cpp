#include "Stack.h"

void Stack::Push(Figure* figure)
{
	StackElement* element = new StackElement();

	element->figure = figure;

	if (first == nullptr)
	{
		first = element;

		return;
	}

	element->next = first;

	first = element;
}

Figure* Stack::Pop()
{
	if (first == nullptr) return nullptr;

	auto element = first;

	first = element->next;

	Figure* f = element->figure;

	delete element;

	return f;
}

void Stack::ShowAll()
{
	while (first != nullptr)
	{
		first->figure->Show();

		Pop();
	}
}

Stack::~Stack()
{
	while (first != nullptr)
	{
		auto element = first->next;

		first->figure->~Figure();

		first = element;
	}
}

Stack::StackElement::~StackElement()
{
}

#pragma once

#include "Figure.h"

class Stack
{
	struct StackElement
	{
		StackElement* next = nullptr;

		Figure* figure = nullptr;

		~StackElement();
	};

	StackElement* first = nullptr;

public:
	void Push(Figure*);

	Figure* Pop();

	void ShowAll();

	~Stack();
};


#include "Stack.h"

Stack::Stack()
{
	top = -1;
	size = MAX_SIZE;
	data = new char[MAX_SIZE];
}

Stack::Stack(int mySize)
{
	this->top = -1;
	this->size = mySize;
	this->data = new char[size];
}


Stack::~Stack()
{
	//if (this->data != NULL)
	delete[] data;
}

void Stack::push(char myData)
{
	if (isFull())//ÅÐ¶Ï¶ÑÕ»ÊÇ·ñÎªÂú,ÂúÔòÅ×³öÒì³£
	{
		throw Full();
	}
	else
	{
		this->top++;
		this->data[top] = myData;
	}

}

char Stack::pop()
{
	char result = 's';
	if (isEmpty())
	{ 
		throw Empty();
	}
	else
	{
		result = data[top];
		data[top] = NULL;
		top--;
	}
	return result;
}

char Stack::getTop()
{
	if (!isEmpty())
		return data[top];
	else
		throw Empty();
}

bool Stack::isEmpty()
{
	if (top == -1)
		return true;
	return false;
}

bool Stack::isFull()
{
	if (top == this->size - 1)
		return true;
	return false;
}

void Stack::setNull()
{
	this->top = -1;
}

int main()
{
	Stack s1(2);
	char ch;

	try
	{
		s1.push('a');
		s1.push('b');
		s1.push('c');
	}
	catch (Stack::Full)
	{
		cout << "Stack is full!" << endl;
	};

	try
	{
		ch = s1.pop();
		cout << "ch is: " << ch << endl;
		ch = s1.pop();
		cout << "ch is: " << ch << endl;
		ch = s1.pop();
		cout << "ch is: " << ch << endl;
	}
	catch (Stack::Empty)
	{
		cout << "Stack is empty!" << endl;
	};


	system("pause");
	return 0;
}


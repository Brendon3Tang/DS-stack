#pragma once
#include <iostream>
using namespace std;

int MAX_SIZE = 100;
class Stack
{
private:
	char* data;
	int top;
	int size;
public:
	Stack();

	Stack(int mySize);

	~Stack();

	void push(char myData);

	char pop();

	char getTop();

	bool isEmpty();

	bool isFull();

	void setNull();

	//���������쳣�ڲ���
	class Full{};
	class Empty{};

};
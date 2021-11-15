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

	//定义两个异常内部类
	class Full{};
	class Empty{};

};
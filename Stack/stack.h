#pragma once
#include <iostream>
#define MAX_SIZE 10
using namespace std;

template<class T>
class Stack
{
private:
	T * top;
	int size;

public:
	Stack(); //初始化栈
	~Stack(); //销毁栈
	void push(); //压栈
	T front(); //返回栈顶元素
	void pop(); //删除栈顶元素
	int getsize(); //返回栈当前容量
	void clear(); //清空栈
	bool empty(); //判断栈是否为空
};

template<class T>
Stack<T>::Stack()  //初始化栈
{
	top = new T[MAX_SIZE];
	size = 0;
}

template<class T>
Stack<T>::~Stack()  //销毁栈
{
	delete top;
}

template<class T>
void Stack<T>::push() //压栈
{
	T e;
	cout << "请输入压入的元素\n";
	cin >> e;
	if (size < MAX_SIZE)
	{
		top[size++] = e;
		return;
	}
	else
		cout << "栈已满！\n";
	return;
}

template<class T>
T Stack<T>::front()  //返回栈顶元素
{
	T a;
	if (size)
	{
		a = top[size - 1];
		cout << a << endl;
		return a;
	}
	else
		cout << "空栈\n";
}

template<class T>
void Stack<T>::pop() //删除栈顶元素
{
	if (size)
	{
		size--;
	}
}

template<class T>
int Stack<T>::getsize() //返回栈当前容量
{
	cout << "栈的当前容量为:" << size;
	return size;
}

template<class T>
void Stack<T>::clear() //清空栈
{
	size = 0;
}

template<class T>
bool Stack<T>::empty() //判断栈是否为空
{
	if (size == 0)
	{
		cout << "该栈是空栈\n";
		return true;
	}
	else
	{
		cout << "该栈不是空栈\n";
		return false;
	}
}



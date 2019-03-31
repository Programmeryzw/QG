#pragma once
#ifndef  LINKSTACK_H_
#define LINKSTACK_H_

#include <iostream>
using namespace std;
template<class T>

struct node
{
	T data;
	struct node<T> *next;
};

template<class T>
class LinkStack
{
private:
	node<T> *top;
	int size;

public:
	LinkStack(); //初始化栈
	~LinkStack(); //销毁栈
	void push(); //压栈
	T front(); //返回栈顶元素
	void pop(); //删除栈顶元素
	int getsize(); //返回栈当前容量
	void clear(); //清空栈
	bool empty(); //判断栈是否为空
};

template<class T>
LinkStack<T>::LinkStack()  //初始化栈
{
	top = nullptr;
	size = 0;
}

template<class T>
LinkStack<T>::~LinkStack() //销毁栈
{
	clear();
}

template<class T>
void LinkStack<T>::push() //压栈
{
	T e;
	cout << "请输入压入的元素\n";
	cin >> e;
	node<T> *p = new node<T>;
	p->data = e;
	p->next = top;
	top = p;
	size++;
}

template<class T>
T LinkStack<T>::front() //返回栈顶元素
{
	if (size)
	{
		cout << top->data << endl;
		return top->data;
	}
	else
		cout << "空栈\n";
}

template<class T>
void LinkStack<T>::pop() //删除栈顶元素
{
	if (size)
	{
		node<T> *p;
		p = top;
		top = top->next;
		delete p;
		size--;
	}
}

template<class T>
int LinkStack<T>::getsize() //返回栈当前容量
{
	cout << "栈的当前容量为:" << size;
	return size;
}

template<class T>
void LinkStack<T>::clear()  //清空栈
{
	node<T> *p;
	while (size)
	{
		p = top;
		top = top->next;
		delete p;
		size--;
	}
}

template<class T>
bool LinkStack<T>::empty() //判空
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
#endif // ! LINKSTACK_H_


#pragma once
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
public:
	node<T> *top;
	int size;

public:
	LinkStack(); //��ʼ��ջ
	~LinkStack(); //����ջ
	void push(const T &e); //ѹջ
	T front(); //����ջ��Ԫ��
	void pop(); //ɾ��ջ��Ԫ��
	int getsize(); //����ջ��ǰ����
	void clear(); //���ջ
	bool empty(); //�ж�ջ�Ƿ�Ϊ��
	void show(); //չʾջ
};


template<class T>
LinkStack<T>::LinkStack()  //��ʼ��ջ
{
	top = nullptr;
	size = 0;
}

template<class T>
LinkStack<T>::~LinkStack() //����ջ
{
	clear();
}

template<class T>
void LinkStack<T>::push(const T &e) //ѹջ
{
	node<T> *p = new node<T>;
	p->data = e;
	p->next = top;
	top = p;
	size++;
}

template<class T>
T LinkStack<T>::front() //����ջ��Ԫ��
{
	if (size)
	{
		return top->data;
	}
}

template<class T>
void LinkStack<T>::pop() //ɾ��ջ��Ԫ��
{
	if (top != nullptr)
	{
		node<T> *p;
		p = top;
		top = top->next;
		delete p;
		size--;
	}
}

template<class T>
int LinkStack<T>::getsize() //����ջ��ǰ����
{
	cout << "ջ�ĵ�ǰ����Ϊ:" << size;
	return size;
}

template<class T>
void LinkStack<T>::clear()  //���ջ
{
	node<T> *p;
	while (top != nullptr)
	{
		p = top;
		top = top->next;
		delete p;
		size--;
	}
}

template<class T>
bool LinkStack<T>::empty() //�п�
{
	if (size == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<class T>
void LinkStack<T>::show() //չʾջ
{
	node<T> *p = top;
	while (p != nullptr)
	{
		cout << p->data;
		p = p->next;
	}
}


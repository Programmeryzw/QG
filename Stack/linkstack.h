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
	LinkStack(); //��ʼ��ջ
	~LinkStack(); //����ջ
	void push(); //ѹջ
	T front(); //����ջ��Ԫ��
	void pop(); //ɾ��ջ��Ԫ��
	int getsize(); //����ջ��ǰ����
	void clear(); //���ջ
	bool empty(); //�ж�ջ�Ƿ�Ϊ��
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
void LinkStack<T>::push() //ѹջ
{
	T e;
	cout << "������ѹ���Ԫ��\n";
	cin >> e;
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
		cout << top->data << endl;
		return top->data;
	}
	else
		cout << "��ջ\n";
}

template<class T>
void LinkStack<T>::pop() //ɾ��ջ��Ԫ��
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
int LinkStack<T>::getsize() //����ջ��ǰ����
{
	cout << "ջ�ĵ�ǰ����Ϊ:" << size;
	return size;
}

template<class T>
void LinkStack<T>::clear()  //���ջ
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
bool LinkStack<T>::empty() //�п�
{
	if (size == 0)
	{
		cout << "��ջ�ǿ�ջ\n";
		return true;
	}
	else
	{
		cout << "��ջ���ǿ�ջ\n";
		return false;
	}
}
#endif // ! LINKSTACK_H_


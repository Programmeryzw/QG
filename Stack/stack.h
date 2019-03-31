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
	Stack(); //��ʼ��ջ
	~Stack(); //����ջ
	void push(); //ѹջ
	T front(); //����ջ��Ԫ��
	void pop(); //ɾ��ջ��Ԫ��
	int getsize(); //����ջ��ǰ����
	void clear(); //���ջ
	bool empty(); //�ж�ջ�Ƿ�Ϊ��
};

template<class T>
Stack<T>::Stack()  //��ʼ��ջ
{
	top = new T[MAX_SIZE];
	size = 0;
}

template<class T>
Stack<T>::~Stack()  //����ջ
{
	delete top;
}

template<class T>
void Stack<T>::push() //ѹջ
{
	T e;
	cout << "������ѹ���Ԫ��\n";
	cin >> e;
	if (size < MAX_SIZE)
	{
		top[size++] = e;
		return;
	}
	else
		cout << "ջ������\n";
	return;
}

template<class T>
T Stack<T>::front()  //����ջ��Ԫ��
{
	T a;
	if (size)
	{
		a = top[size - 1];
		cout << a << endl;
		return a;
	}
	else
		cout << "��ջ\n";
}

template<class T>
void Stack<T>::pop() //ɾ��ջ��Ԫ��
{
	if (size)
	{
		size--;
	}
}

template<class T>
int Stack<T>::getsize() //����ջ��ǰ����
{
	cout << "ջ�ĵ�ǰ����Ϊ:" << size;
	return size;
}

template<class T>
void Stack<T>::clear() //���ջ
{
	size = 0;
}

template<class T>
bool Stack<T>::empty() //�ж�ջ�Ƿ�Ϊ��
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



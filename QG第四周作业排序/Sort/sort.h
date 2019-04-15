#ifndef _SORT_H
#define _SORT_H
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <stack>
#define MAX 10001
using namespace std;

//��������
void InsertSort(int *a, int n);


//�鲢����
void MergeArray(int *l, int l_size, int *r, int r_size, int *temp);


//�鲢����
void  MergeSort(int *a, int n, int *temp);


//�������򣨵ݹ�棩
void QuickSort_Recursion(int *a, int begin, int end);


//��������(�ǵݹ��)
void QuickSort(int *a, int begin, int end);


//�������������ţ�
int Partition(int *a, int begin, int end);


//��������
void CountSort(int *a, int n);


//��������
void RadixCountSort(int *a, int n, int *temp);


//�����ı����ݲ��Գ���
void Test(int *f);

#endif
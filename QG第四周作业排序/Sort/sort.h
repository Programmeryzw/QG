#ifndef _SORT_H
#define _SORT_H
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <stack>
#define MAX 10001
using namespace std;

//插入排序
void InsertSort(int *a, int n);


//归并数组
void MergeArray(int *l, int l_size, int *r, int r_size, int *temp);


//归并排序
void  MergeSort(int *a, int n, int *temp);


//快速排序（递归版）
void QuickSort_Recursion(int *a, int begin, int end);


//快速排序(非递归版)
void QuickSort(int *a, int begin, int end);


//快速排序（枢轴存放）
int Partition(int *a, int begin, int end);


//计数排序
void CountSort(int *a, int n);


//基数排序
void RadixCountSort(int *a, int n, int *temp);


//生成文本数据测试程序
void Test(int *f);

#endif
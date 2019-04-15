#include "sort.h"

using namespace std;
int a[10000], temp1[10000];
int b[50000], temp2[50000];
int c[200000], temp3[200000];
int d[100000][100],temp4[100];
int e[5] = { 5,3,4,1,2 };
int f[10], temp5[10];

int main()
{
	int start, t;
	char o;
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10000; i++)
		a[i] = rand() % 10000 + 1;
	for (int i = 0; i < 50000; i++)
		b[i] = rand() % 10000 + 1;
	for (int i = 0; i < 200000; i++)
		c[i] = rand() % 10000 + 1;
	for(int i = 0;i<100000;i++)
		for(int j = 0; j<100;j++)
			d[i][j] = rand() % 10000 + 1;

	while (1)
	{
			for (int i = 0; i < 10; i++)
				cout << endl;
			cout << "**************************************************\n";
			cout << "�����б�\n";
			cout << "1.�ݹ����\n";
			cout << "2.�鲢����\n";
			cout << "3.��������\n";
			cout << "4.�ǵݹ����\n";
			cout << "5.��������\n";
			cout << "6.��������\n";
			cout << "0.�˳�����\n";
			cout << "**************************************************\n";
			cout << "\n";
			cout << "\n";
			cout << "������������\n";
			cin >> o;
			cout << endl;
		switch (o)
		{
		case '1':
			start = clock();
			QuickSort_Recursion(a, 0, 10000);
			t = clock() - start;
			cout << "�ݹ����1w��������ʱ:" << t << "ms" << endl;

			start = clock();
			QuickSort_Recursion(b, 0, 50000);
			t = clock() - start;
			cout << "�ݹ����5w��������ʱ:" << t << "ms" << endl;

			start = clock();
			QuickSort_Recursion(c, 0, 200000);
			t = clock() - start;
			cout << "�ݹ����20w��������ʱ:" << t << "ms" << endl;

			start = clock();
			for (int i = 0; i < 100000; i++)
				QuickSort_Recursion(d[i], 0, 100);
			t = clock() - start;
			cout << "�ݹ����100000*100����С������ʱ:" << t << "ms" << endl;

			Test(f);
			QuickSort_Recursion(f, 0, 10);
			cout << "������Ԫ��Ϊ:";
			for (int i = 0; i < 10; i++)
				cout << f[i] << " ";
			cout << endl;
			break;

		case '2':
			start = clock();
			MergeSort(a, 10000, temp1);
			t = clock() - start;
			cout << "�鲢����1w��������ʱ:" << t << "ms" << endl;

			start = clock();
			MergeSort(b, 50000, temp2);
			t = clock() - start;
			cout << "�鲢����5w��������ʱ:" << t << "ms" << endl;

			start = clock();
			MergeSort(c, 200000, temp3);
			t = clock() - start;
			cout << "�鲢����20w��������ʱ:" << t << "ms" << endl;

			start = clock();
			for (int i = 0; i < 100000; i++)
				MergeSort(d[i], 100, temp4);
			t = clock() - start;
			cout << "�鲢����100000*100����С������ʱ:" << t << "ms" << endl;

			Test(f);
			MergeSort(f,10,temp5);
			cout << "������Ԫ��Ϊ:";
			for (int i = 0; i < 10; i++)
				cout << temp5[i] << " ";
			cout << endl;
			break;

		case '3':
			start = clock();
			InsertSort(a, 10000);
			t = clock() - start;
			cout << "��������1w��������ʱ:" << t << "ms" << endl;

			start = clock();
			InsertSort(b, 50000);
			t = clock() - start;
			cout << "��������5w��������ʱ:" << t << "ms" << endl;

			start = clock();
			InsertSort(c, 200000);
			t = clock() - start;
			cout << "��������20w��������ʱ:" << t << "ms" << endl;

			start = clock();
			for (int i = 0; i < 100000; i++)
				InsertSort(d[i], 100);
			t = clock() - start;
			cout << "��������100000*100����С������ʱ:" << t << "ms" << endl;

			Test(f);
			InsertSort(f, 10);
			cout << "������Ԫ��Ϊ:";
			for (int i = 0; i < 10; i++)
				cout << f[i] << " ";
			cout << endl;
			break;

		case '4':
			start = clock();
			QuickSort(a, 0, 10000);
			t = clock() - start;
			cout << "�ǵݹ����1w��������ʱ:" << t << "ms" << endl;

			start = clock();
			QuickSort(b, 0, 50000);
			t = clock() - start;
			cout << "�ǵݹ����5w��������ʱ:" << t << "ms" << endl;

			start = clock();
			QuickSort(c, 0, 200000);
			t = clock() - start;
			cout << "�ǵݹ����20w��������ʱ:" << t << "ms" << endl;

			start = clock();
			for (int i = 0; i < 100000; i++)
				QuickSort(d[i], 0, 100);
			t = clock() - start;
			cout << "�ǵݹ����100000*100����С������ʱ:" << t << "ms" << endl;

			Test(f);
			QuickSort(f, 0, 10);
			cout << "������Ԫ��Ϊ:";
			for (int i = 0; i < 10; i++)
				cout << f[i] << " ";
			cout << endl;
			break;

		case '5':
			start = clock();
			CountSort(a, 10000);
			t = clock() - start;
			cout << "��������1w��������ʱ:" << t << "ms" << endl;

			start = clock();
			CountSort(b, 50000);
			t = clock() - start;
			cout << "��������5w��������ʱ:" << t << "ms" << endl;

			start = clock();
			CountSort(c, 200000);
			t = clock() - start;
			cout << "��������20w��������ʱ:" << t << "ms" << endl;

			start = clock();
			for (int i = 0; i < 100000; i++)
				CountSort(d[i], 100);
			t = clock() - start;
			cout << "��������100000*100����С������ʱ:" << t << "ms" << endl;

			Test(f);
			CountSort(f,10);
			cout << "������Ԫ��Ϊ:";
			for (int i = 0; i < 10; i++)
				cout << f[i] << " ";
			cout << endl;
			break;

		case '6':
			start = clock();
			RadixCountSort(a, 10000, temp1);
			t = clock() - start;
			cout << "��������1w��������ʱ:" << t << "ms" << endl;

			start = clock();
			RadixCountSort(b, 50000, temp2);
			t = clock() - start;
			cout << "��������5w��������ʱ:" << t << "ms" << endl;

			start = clock();
			RadixCountSort(c, 200000, temp3);
			t = clock() - start;
			cout << "��������20w��������ʱ:" << t << "ms" << endl;

			start = clock();
			for (int i = 0; i < 100000; i++)
				RadixCountSort(d[i], 100, temp4);
			t = clock() - start;
			cout << "��������100000*100����С������ʱ:" << t << "ms" << endl;

			Test(f);
			RadixCountSort(f,10,temp5);
			cout << "������Ԫ��Ϊ:";
			for (int i = 0; i < 10; i++)
				cout << temp5[i] << " ";
			cout << endl;
			break;

		case '0': return 0;
		default: cout << "��������Чѡ��\n";
		}
	}
	system("pause");
}
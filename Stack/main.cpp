#include "stack.h"
#include "linkstack.h"

int main()
{
	Stack<int> s1;
	LinkStack<int> s2;
	int c, o;
	cout << "����������Ķ���0Ϊ˳��ջ��1Ϊ��ջ\n";
	cin >> c;
	if (c == 0 || c == 1)
		while (1)
		{
			for (int i = 0; i < 15; i++)
				cout << endl;
			cout << "**************************************************\n";
			cout << "1.ѹջ\n";
			cout << "2.����ջ��Ԫ��\n";
			cout << "3.ɾ��ջ��Ԫ��\n";
			cout << "4.����ջ��ǰ����\n";
			cout << "5.���ջ\n";
			cout << "6.�ж�ջ�Ƿ�Ϊ��\n";
			cout << "0.�˳�����\n";
			cout << "**************************************************\n";
			cout << "\n";
			cout << "\n";
			cout << "������Ҫ���еĲ���:";
			cin >> o;
			cout << "\n";
			switch (o)
			{
			case 1:if (c)
			{
				s2.push(); break;
			}
				   s1.push(); break;
			case 2:if (c)
			{
				s2.front(); break;
			}
				   s1.front(); break;

			case 3:if (c)
			{
				s2.pop(); break;
			}
				   s1.pop(); break;

			case 4:if (c)
			{
				s2.getsize(); break;
			}
				   s1.getsize(); break;

			case 5:if (c)
			{
				s2.clear(); break;
			}
				   s1.clear(); break;

			case 6:if (c)
			{
				s2.empty(); break;
			}
				   s1.empty(); break;

			case 0:return 0;
			default: cout << "��������Чѡ��\n";
			}
		}
	else
		cout << "���������������ȷ����\n";
	system("pause");
}
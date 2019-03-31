#include "stack.h"
#include "linkstack.h"

int main()
{
	Stack<int> s1;
	LinkStack<int> s2;
	int c, o;
	cout << "请输入操作的对象，0为顺序栈，1为链栈\n";
	cin >> c;
	if (c == 0 || c == 1)
		while (1)
		{
			for (int i = 0; i < 15; i++)
				cout << endl;
			cout << "**************************************************\n";
			cout << "1.压栈\n";
			cout << "2.返回栈顶元素\n";
			cout << "3.删除栈顶元素\n";
			cout << "4.返回栈当前容量\n";
			cout << "5.清空栈\n";
			cout << "6.判断栈是否为空\n";
			cout << "0.退出程序\n";
			cout << "**************************************************\n";
			cout << "\n";
			cout << "\n";
			cout << "请输入要进行的操作:";
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
			default: cout << "请输入有效选项\n";
			}
		}
	else
		cout << "输入错误，请输入正确数据\n";
	system("pause");
}
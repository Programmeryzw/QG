#include "polen.h"
void changeToPolen(char s[], LinkStack<char> &stk, LinkStack<char> &s_op);
void calculate(LinkStack<char> &backstk, LinkStack<int> &res_s);

int main()
{
	LinkStack<char> stk, s_op, backstk;
	LinkStack<int> res_s;
	char s[100];
	cout << "请输入计算式\n";
	cin.get(s, 100);
	changeToPolen(s, stk, s_op);

	while (stk.top != nullptr) //遍历逆波兰栈并输出
	{
		backstk.push(stk.front());
		stk.top = stk.top->next;
	}
	backstk.show();
	cout << endl;

	calculate(backstk, res_s);
	int a = res_s.front() - '0';
	cout << "计算结果为:" << (int)a << endl;
	system("pause");
	return 0;
}
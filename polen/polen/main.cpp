#include "polen.h"
void changeToPolen(char s[], LinkStack<char> &stk, LinkStack<char> &s_op);
void calculate(LinkStack<char> &backstk, LinkStack<int> &res_s);

int main()
{
	LinkStack<char> stk, s_op, backstk;
	LinkStack<int> res_s;
	char s[100];
	cout << "���������ʽ\n";
	cin.get(s, 100);
	changeToPolen(s, stk, s_op);

	while (stk.top != nullptr) //�����沨��ջ�����
	{
		backstk.push(stk.front());
		stk.top = stk.top->next;
	}
	backstk.show();
	cout << endl;

	calculate(backstk, res_s);
	int a = res_s.front() - '0';
	cout << "������Ϊ:" << (int)a << endl;
	system("pause");
	return 0;
}
#include "polen.h"

//ת��Ϊ�沨�����ʽ
void changeToPolen(char s[], LinkStack<char> &stk, LinkStack<char> &s_op)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			stk.push(s[i]);
			stk.push(' ');
		}
		else if (s[i] == '+' || s[i] == '-')
		{
			while (1)
			{
				if (!s_op.empty() && s_op.front() != '(')
				{
					stk.push(s_op.front());
					stk.push(' ');
					s_op.pop();
				}
				else
				{
					s_op.push(s[i]); //��Ϊ�ջ�������ֱ�ӽ�ջ
					break;
				}
			}
		}
		else if (s[i] == '*' || s[i] == '/')
		{
			while (1)
			{
				if (!s_op.empty() && (s_op.front() == '*' || s_op.front() == '/'))
				{
					stk.push(s_op.front());
					stk.push(' ');
					s_op.pop();
				}
				else
				{
					s_op.push(s[i]);
					break;
				}
			}
		}
		else if (s[i] == '(')
		{
			s_op.push(s[i]);
		}
		else if (s[i] == ')') //��Ϊ�����ţ��������ż�����Ԫ�س�ջ
		{
			while (1)
			{
				if (s_op.front() != '(')
				{
					stk.push(s_op.front());
					stk.push(' ');
					s_op.pop();
				}
				else
				{
					s_op.pop();
					break;
				}
			}
		}
	}
	while (!s_op.empty()) //�������ջ����Ԫ��ȫ����ջ
	{
		stk.push(s_op.front());
		stk.push(' ');
		s_op.pop();
	}
}


//�����沨�����ʽ
void calculate(LinkStack<char> &backstk, LinkStack<int> &res_s)
{
	while (backstk.top != nullptr)
	{
		if (backstk.front() >= '0' && backstk.front() <= '9')
		{
			res_s.push(backstk.front());
		}
		else if (backstk.front() != ' ')
		{
			char a = res_s.front();
			res_s.pop();
			char b = res_s.front();
			res_s.pop();
			switch (backstk.front())
			{
			case '+':
			{
				res_s.push((b - '0') + (a - '0') + '0'); //����ת��
				break;
			}
			case '-':
			{
				res_s.push((b - '0') - (a - '0') + '0');
				break;
			}
			case '*':
			{
				res_s.push((b - '0') * (a - '0') + '0');
				break;
			}
			case '/':
			{
				if (a != '0')
				{
					res_s.push((b - '0') / (a - '0') + '0');
				}
				else
				{
					cout << "��0������\n";
				}
				break;
			}
			}
		}
		backstk.top = backstk.top->next;
	}
}
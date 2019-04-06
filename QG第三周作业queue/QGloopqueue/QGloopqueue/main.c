#include <stdio.h>
#include <stdlib.h>
#include "LoopQueue.h"

int main()
{
	int datasize;
	char n;
	printf("请输入你要存储的数据类型的序号\n");
	printf("1.整型\n2.浮点型\n3.字符型\n");
	scanf_s("%c", &n);
	switch (n)
	{
	case '1':datasize = sizeof(int); break;
	case '2':datasize = sizeof(float); break;
	case '3':datasize = sizeof(char); break;
	default:printf("输入错误"); break; system("pause"); return 0;
	}
	LoopQueue Q;
	LoopQueue *q = &Q;
	InitLoopQueue(q, datasize);

	int o;
	while (1)
	{
		for (int i = 0; i < 13; i++)
			printf("\n");
		printf("**************************************************\n");
		printf("1.入队\n");
		printf("2.出队\n");
		printf("3.获取队头元素\n");
		printf("4.获取队尾元素\n");
		printf("5.判空\n");
		printf("6.遍历并输出队列\n");
		printf("7.判满\n");
		printf("8.清空队列\n");
		printf("0.退出程序\n");
		printf("**************************************************\n");
		printf("\n");
		printf("\n");
		printf("请输入要进行的操作:");
		scanf_s("%d", &o);
		printf("\n");
		switch (o)
		{
		case 1:
		{
			printf("请输入进队的元素\n");
			switch (n)
			{
			case '1': {int a; int *e = &a; scanf_s("%d", e); EnQueue(q, e, datasize); break; }
			case '2': {float a; float *e = &a; scanf_s("%f", e); EnQueue(q, e, datasize); break; }
			case '3': {char z; char *e = &z; scanf_s(" %c", e); EnQueue(q, e, datasize); break; }
			}
			break;
		}

		case 2:
		{
			DeQueue(q); break;
		}

		case 3:
		{
			switch (n)
			{
			case '1': {
				int *p = (int*)GetHead(q, datasize);
				if (p != NULL)
					printf("%d\n", *p);
				else
					printf("空队\n");
				break; }

			case '2': {
				float *p = (float*)GetHead(q, datasize);
				if (p != NULL)
					printf("%f\n", *p);
				else
					printf("空队\n");
				break; }

			case '3': {
				char *p = GetHead(q, datasize);
				if (p != NULL)
					printf("%c\n", *p);
				else
					printf("空队\n");
				break; }
			}
			break;
		}


		case 4:
		{
			switch (n)
			{
			case '1': {
				int *p = (int*)GetLast(q, datasize);
				if (p != NULL)
					printf("%d\n", *p);
				else
					printf("空队\n");
				break; }
			case '2': {
				float *p = (float*)GetLast(q, datasize);
				if (p != NULL)
					printf("%f\n", *p);
				else
					printf("空队\n");
				break; }
			case '3': {
				char *p = GetLast(q, datasize);
				if (p != NULL)
					printf("%c\n", *p);
				else
					printf("空队\n");
				break; }
			}
			break;
		}

		case 5:
		{
			isempty(q); break;
		}

		case 6:
		{
			TraverseQueue(q, datasize, n); break;
		}

		case 7: isfull(q); break;

		case 8: ClearQueue(q, datasize); break;

		case 0:return 0;
		default: printf("请输入有效选项\n");
		}
	}
	DestLoopQueue(q);
	system("pause");
}
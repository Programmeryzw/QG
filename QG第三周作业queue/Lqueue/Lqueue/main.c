#include <stdio.h>
#include <stdlib.h>
#include "Lqueue.h"

int main()
{
	int datasize;
	char n;
	printf("��������Ҫ�洢���������͵����\n");
	printf("1.����\n2.������\n3.�ַ���\n");
	scanf_s("%c", &n);
	switch (n)
	{
	case '1':datasize = sizeof(int); break;
	case '2':datasize = sizeof(float); break;
	case '3':datasize = sizeof(char); break;
	default:printf("�������"); break; system("pause"); return 0;
	}
	Lqueue Q;
	Lqueue *q = &Q;
	InitLqueue(q, datasize);

	int o;
		while (1)
		{
			for (int i = 0; i < 13; i++)
				printf("\n");
			printf("**************************************************\n");
			printf("1.���\n");
			printf("2.����\n");
			printf("3.��ȡ��ͷԪ��\n");
			printf("4.��ȡ��βԪ��\n");
			printf("5.�п�\n");
			printf("6.�������������\n");
			printf("7.��ȡ���г���\n");
			printf("8.��ն���\n");
			printf("0.�˳�����\n");
			printf("**************************************************\n");
			printf("\n");
			printf("\n");
			printf("������Ҫ���еĲ���:");
			scanf_s("%d", &o);
			printf("\n");
			switch (o)
			{
			case 1:
			{
				printf("��������ӵ�Ԫ��\n");
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
					int *p = (int*)GetHead(q);
					if (p != NULL)
						printf("%d\n", *p);
					else
						printf("�ն�\n");
					break; }

				case '2': {
					float *p = (float*)GetHead(q);
					if (p != NULL)
						printf("%f\n", *p);
					else
						printf("�ն�\n");
					break; }

				case '3': {
					char *p = GetHead(q);
					if (p != NULL)
						printf("%c\n", *p);
					else
						printf("�ն�\n");
					break; }
				}
				break;
			}
			case 4:
			{
				switch (n)
				{
				case '1': {
					int *p = (int*)GetLast(q);
					if (p != NULL)
						printf("%d\n", *p);
					else
						printf("�ն�\n");
					break; }
				case '2': {
					float *p = (float*)GetLast(q);
					if (p != NULL)
						printf("%f\n", *p);
					else
						printf("�ն�\n");
					break; }
				case '3': {
					char *p = GetLast(q);
					if (p != NULL)
						printf("%c\n", *p);
					else
						printf("�ն�\n");
					break; }
				}
				break;
			}
			case 5:
			{
				isempty(q); break;
			}
			case 6: TraverseQueue(q, datasize, n); break;
			case 7: LengthLQueue(q); break;
			case 8: ClearQueue(q); break;
			case 0:return 0;
			default: printf("��������Чѡ��\n");
			}
		}
	DestLqueue(q);
	system("pause");
}
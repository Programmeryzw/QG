#include "LoopQueue.h"
#include <stdlib.h>


void InitLoopQueue(LoopQueue *q, int datasize) //��ʼ������
{
	q->data = malloc(datasize*MAX_SIZE);
	q->front = q->rear = 0;
	q->length = 0;
}


void DestLoopQueue(LoopQueue *q) //���ٶ���
{
	free(q->data);
	return;
}


void EnQueue(LoopQueue *q, void *e, int datasize)  //���
{
	if (!(q->front == (q->rear + 1) % MAX_SIZE))
	{
		int address;
		address = q->rear * datasize;
		memcpy((q->data + address), e, datasize);
		q->rear = (q->rear + 1) % MAX_SIZE;
		q->length++;
		return;
	}
	else
	{
		printf("������\n");
		return;
	}
}


void DeQueue(LoopQueue *q) //����
{
	if (!(q->front == q->rear))
	{
		q->front = (q->front + 1) % MAX_SIZE;
		q->length--;
	}
	else
		printf("���ѿգ���Ԫ�ؿɳ���\n");
}


char* GetHead(LoopQueue *q, int datasize) //��ȡ��ͷԪ��
{
	if (!(q->front == q->rear))
	{
		int address;
		address = q->front * datasize;
		return (q->data + address);
	}
	else
		return NULL;
}


char* GetLast(LoopQueue *q, int datasize) //��ȡ��βԪ��
{
	if (!(q->front == q->rear))
	{
		int address;
		address = (q->rear - 1) * datasize;
		return (q->data + address);
	}
	else
		return NULL;
}


int isempty(LoopQueue *q) //�п�
{
	if (q->front == q->rear)
	{
		printf("�ö��ǿն�\n");
		return true;
	}
	else
	{
		printf("�öӲ��ǿն�\n");
		return false;
	}
}


int isfull(LoopQueue *q)  //����
{
	if (q->front == (q->rear + 1) % MAX_SIZE)
	{
		printf("�ö�������\n");
		return true;
	}
	else
	{
		printf("�öӲ�������\n");
		return false;
	}
}


void ClearQueue(LoopQueue *q, int datasize) //��ն���
{
	free(q->data);
	InitLoopQueue(q, datasize);
}



void TraverseQueue(LoopQueue *q, int datasize, int n) //���������
{
	while (!(q->front == q->rear))
	{
		switch (n)
		{
		case '1': {
			int *p = (int*)GetHead(q, datasize);
			if (p != NULL)
			{
				printf("%d \n", *p);
				DeQueue(q);
			}
			break; }

		case '2': {
			float *p = (float*)GetHead(q, datasize);
			if (p != NULL)
			{
				printf("%f \n", *p);
				DeQueue(q);
			}
			break; }

		case '3': {
			char *p = GetHead(q, datasize);
			if (p != NULL)
			{
				printf("%c \n", *p);
				DeQueue(q);
			}
			break; }
		}
	}
	return;
}
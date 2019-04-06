#include "Lqueue.h"
#include <stdlib.h>


void InitLqueue(Lqueue *q, int datasize)
{
	node *p = malloc(sizeof(node));
	p->next = nullptr;
	q->front = q->rear = p;
	q->length = 0;
}


void DestLqueue(Lqueue *q)
{
	while (q->front->next)
		DeQueue(q);
	free(q->front);
}


void EnQueue(Lqueue *q, void *e, int datasize)
{
	node *p = malloc(sizeof(node));
	p->data = malloc(datasize);
	memcpy(p->data,e,datasize);
	p->next = NULL;
	q->rear->next = p;
	q->rear = p;
	q->length++;
}


void DeQueue(Lqueue *q)
{
	if (!q->front->next)
	{
		printf("�ö���Ϊ�ձ���Ԫ�ؿɳ���\n");
		return ;
	}
	else if (q->front->next)
	{
		node *p = malloc(sizeof(node));
		p = q->front->next; 
		q->front->next = p->next;
		free(p);
		q->rear = q->front;
		q->length--;
	}
	else if (q->front->next->next)
	{
		node *p = malloc(sizeof(node));
		p = q->front->next;
		q->front->next = p->next;
		free(p);
		q->length--;
	}
}


char* GetHead(Lqueue *q)
{
	if (q->front->next)
	{
		return q->front->next->data;
	}
	printf("�ö���Ϊ��\n");
}


char* GetLast(Lqueue *q)
{
	if (q->front->next)
	{

		return q->rear->data;
	}
}


int isempty(Lqueue *q)
{
	if (!q->front->next)
	{
		printf("�ö���Ϊ��\n");
		return true;
	}
	else
	{
		printf("�ö��в�Ϊ��\n");
		return false;
	}
}


int LengthLQueue(Lqueue *q)
{
	return q->length;
}


void ClearQueue(Lqueue *q) //��ն���
{
	while (q->front->next)
		DeQueue(q);
}


void TraverseQueue(Lqueue *q, int datasize, int n) //���������
{
	while (q->length)
	{
		switch (n)
		{
		case '1': {
			int *p = (int*)GetHead(q);
			if (p != NULL)
			{
				printf("%d \n", *p);
				DeQueue(q);
			}
			break; }

		case '2': {
			float *p = (float*)GetHead(q);
			if (p != NULL)
			{
				printf("%f \n", *p);
				DeQueue(q);
			}
			break; }

		case '3': {
			char *p = GetHead(q);
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


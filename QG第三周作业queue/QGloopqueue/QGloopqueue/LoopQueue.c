#include "LoopQueue.h"
#include <stdlib.h>


void InitLoopQueue(LoopQueue *q, int datasize) //初始化队列
{
	q->data = malloc(datasize*MAX_SIZE);
	q->front = q->rear = 0;
	q->length = 0;
}


void DestLoopQueue(LoopQueue *q) //销毁队列
{
	free(q->data);
	return;
}


void EnQueue(LoopQueue *q, void *e, int datasize)  //入队
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
		printf("队已满\n");
		return;
	}
}


void DeQueue(LoopQueue *q) //出队
{
	if (!(q->front == q->rear))
	{
		q->front = (q->front + 1) % MAX_SIZE;
		q->length--;
	}
	else
		printf("队已空，无元素可出队\n");
}


char* GetHead(LoopQueue *q, int datasize) //获取队头元素
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


char* GetLast(LoopQueue *q, int datasize) //获取队尾元素
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


int isempty(LoopQueue *q) //判空
{
	if (q->front == q->rear)
	{
		printf("该队是空队\n");
		return true;
	}
	else
	{
		printf("该队不是空队\n");
		return false;
	}
}


int isfull(LoopQueue *q)  //判满
{
	if (q->front == (q->rear + 1) % MAX_SIZE)
	{
		printf("该队是满队\n");
		return true;
	}
	else
	{
		printf("该队不是满队\n");
		return false;
	}
}


void ClearQueue(LoopQueue *q, int datasize) //清空队列
{
	free(q->data);
	InitLoopQueue(q, datasize);
}



void TraverseQueue(LoopQueue *q, int datasize, int n) //遍历并输出
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
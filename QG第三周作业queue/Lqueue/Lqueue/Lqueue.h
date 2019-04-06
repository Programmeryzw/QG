#ifndef _LQUEUE_H_
#define _LQUEUE_H_
#define MAX_SIZE 10
#define false 0
#define true 1
#define nullptr NULL;

typedef struct node
{
	void *data;
	struct node *next;
}node;

typedef struct Lqueue
{
	node *front;
	node *rear;
	int length;
}Lqueue;

void InitLqueue(Lqueue *q, int datasize); // 初始化队列
void DestLqueue(Lqueue *q); //销毁队列
void EnQueue(Lqueue *q, void *e, int datasize); //入队
void DeQueue(Lqueue *q); //出队
char* GetHead(Lqueue *q); //获取队头元素
char* GetLast(Lqueue *q); //获取队尾元素
int isempty(Lqueue *q); //判空
void TraverseQueue(Lqueue *q, int datasize, int n); //遍历并输出
int LengthLQueue(Lqueue *q); //获取队列长度
void ClearQueue(Lqueue *q) //清空队列

#endif




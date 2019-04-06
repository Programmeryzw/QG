#pragma once
#define MAX_SIZE 10
#define false 0
#define true 1
#define nullptr NULL;

typedef struct LoopQueue
{
	unsigned int front;
	unsigned int rear;
	unsigned int length;
	char *data;
}LoopQueue;

void InitLoopQueue(LoopQueue *q, int datasize); //初始化队列
void DestLoopQueue(LoopQueue *q); //销毁队列
void EnQueue(LoopQueue *q, void *e, int datasize);  //入队
void DeQueue(LoopQueue *q); //出队
char* GetHead(LoopQueue *q, int datasize); //获取队头元素
char* GetLast(LoopQueue *q, int datasize); //获取队尾元素
int isempty(LoopQueue *q); //判空
int isfull(LoopQueue *q);  //判满
void show(); //展示队列
void ClearQueue(LoopQueue *q, int datasize); //清空队列
void TraverseQueue(LoopQueue *q, int datasize); //遍历并输出


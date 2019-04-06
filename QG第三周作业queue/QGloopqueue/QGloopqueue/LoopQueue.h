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

void InitLoopQueue(LoopQueue *q, int datasize); //��ʼ������
void DestLoopQueue(LoopQueue *q); //���ٶ���
void EnQueue(LoopQueue *q, void *e, int datasize);  //���
void DeQueue(LoopQueue *q); //����
char* GetHead(LoopQueue *q, int datasize); //��ȡ��ͷԪ��
char* GetLast(LoopQueue *q, int datasize); //��ȡ��βԪ��
int isempty(LoopQueue *q); //�п�
int isfull(LoopQueue *q);  //����
void show(); //չʾ����
void ClearQueue(LoopQueue *q, int datasize); //��ն���
void TraverseQueue(LoopQueue *q, int datasize); //���������


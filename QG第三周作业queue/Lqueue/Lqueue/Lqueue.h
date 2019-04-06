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

void InitLqueue(Lqueue *q, int datasize); // ��ʼ������
void DestLqueue(Lqueue *q); //���ٶ���
void EnQueue(Lqueue *q, void *e, int datasize); //���
void DeQueue(Lqueue *q); //����
char* GetHead(Lqueue *q); //��ȡ��ͷԪ��
char* GetLast(Lqueue *q); //��ȡ��βԪ��
int isempty(Lqueue *q); //�п�
void TraverseQueue(Lqueue *q, int datasize, int n); //���������
int LengthLQueue(Lqueue *q); //��ȡ���г���
void ClearQueue(Lqueue *q) //��ն���

#endif




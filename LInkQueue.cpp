#include <stdlib.h>
//链式队列节点
typedef struct LinkNode {
	int data;
	struct LinkNode* next;
};
//链式队列
typedef struct {
	LinkNode *front, *rear;//队列队头，队列队尾指针
}LinkQueue;//初始化
void	InitQueue(LinkQueue &q) {
	q.front = q.rear = (LinkNode *)malloc(sizeof(LinkNode));//建立头节点
	q.front->next = NULL;//初始队列
}
//判空
bool IsEmpty(LinkQueue q) {
	if (q.front == q.rear)
		return true;
	return false;

}
//入队
void EnQueue(LinkQueue &q,int x) 
{
	LinkNode *s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = x;
	s->next = NULL;
	q.rear->next = s;
	q.rear = s;
}
//出队
bool DeQueue(LinkQueue &q, int &x) {
	if (q.front == q.rear) return false;
	LinkNode* p = q.front->next;
	x = p->data;
	q.front->next = p->next;
	if (q.rear == p)
		q.rear = q.front;
	free(p);
	return true;
}
#include <stdlib.h>
//��ʽ���нڵ�
typedef struct LinkNode {
	int data;
	struct LinkNode* next;
};
//��ʽ����
typedef struct {
	LinkNode *front, *rear;//���ж�ͷ�����ж�βָ��
}LinkQueue;//��ʼ��
void	InitQueue(LinkQueue &q) {
	q.front = q.rear = (LinkNode *)malloc(sizeof(LinkNode));//����ͷ�ڵ�
	q.front->next = NULL;//��ʼ����
}
//�п�
bool IsEmpty(LinkQueue q) {
	if (q.front == q.rear)
		return true;
	return false;

}
//���
void EnQueue(LinkQueue &q,int x) 
{
	LinkNode *s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = x;
	s->next = NULL;
	q.rear->next = s;
	q.rear = s;
}
//����
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
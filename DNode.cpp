#include <stdio.h>
#include <stdlib.h>


typedef struct DNode {
	int date;//������
	struct DNode* prior, * next;//ǰ���ͺ���

}Node, * DLinklist;

void insert_DNode(DNode L, DLinklist s, int i)//����Ľڵ㣬�����˫���������λ��
{
	p = getitem(e, i);
	s->next = p->next;
	p->next->prior = s;
	x->prior = p;
	p->next = s;
}


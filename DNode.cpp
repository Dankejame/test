#include <stdio.h>
#include <stdlib.h>


typedef struct DNode {
	int date;//数据域
	struct DNode* prior, * next;//前驱和后驱

}Node, * DLinklist;

void insert_DNode(DNode L, DLinklist s, int i)//插入的节点，插入的双链表，插入的位置
{
	p = getitem(e, i);
	s->next = p->next;
	p->next->prior = s;
	x->prior = p;
	p->next = s;
}


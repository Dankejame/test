#include <stdio.h>
#include <stdlib.h>
//算法描述
typedef struct LNode{
    int date;
   struct LNode *next;    
}LNode,*LinkList;

LinkList List_HeadInsert(LinkList &L){
    LNode *s;
    int x;
    L = (LinkList*)malloc(sizeof(LNode));
    L->next = NULL;
    scanf("%d",&x);
    while(x!=999){
        s = (LNode*)malloc(sizeof(LNode));
        s->date=x;
        s->next=L->next;
        L->next=s;
        scanf("%d",&x);

    }
    return L;
}
LNode *GetElem(LinkList L，int i){
	int j=i;
	LNode *p=L->next;

	if(i==0){
		return L;
	}
	if(i<0){
		return NULL;
	}
	if(p&&j<i){
		p=p->next;
		j++;
	}
	return  p;
}
LNode *LocateElemType(LinkList L,int e){
	LNode *p = L->next;
	while(p!=NULL&&p->date!=e){
		p = p->next;
	}
	return p;
}
LNode Insert_elemitem(LinkList L, LNode e,int i) {
	p = GetElem(L, i);
	e->next = p->next;
	p->next = e;
}
LNode Del_elemType(LinkList L, int i) {
	p = GetElem(L, i-1);
	q = p-> next;
	p->next = q->next;
	frer(q);
}
void  main (){
    //
}
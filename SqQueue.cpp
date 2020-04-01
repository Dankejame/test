#include <stdio.h>
#include <stdlib.h>
#define MaxSize   50//定义队列的最大长度
//顺序存储
typedef struct {
	int data[MaxSize];//存放队列
	int front, rear;//定义头指针和尾指针
}SqQuenue;
//循环队列初始化
void InitQuenu(SqQuenue &S) {
	S.front = S.rear = 0;
 }
//循环队列判空
bool isEmpty(SqQuenue S) {
	if (S.front == S.rear)
		return true;
	return false;
}
//队列入队，用牺牲一个单元来区分队空和队满
bool EnQueue(SqQuenue &s,int x) {
	if ((s.rear + 1) % MaxSize == s.front)
		return false;
	else {
		s.data[s.rear] = x;
		s.rear = (s.rear + 1) % MaxSize;
		return true;
	}

}
//出队
bool DeQueue(SqQuenue& s, int& x) {
	if (s.front == s.rear)
		return false;
	else {
		s.data[s.front++] = x;
		s.front = s.front % MaxSize;
	}
}

int main()//test
{
	SqQuenue i, x;
	int j = 0;
	InitQuenu(i);
	InitQuenu(x);
	for (j = 0; j<50; j++) {
		EnQueue(i, j);
		EnQueue(x, 2 * j);
	}
	for (j = 0; j<49; j++) {
		printf("%d:%d\n",j, i.data[j]);
	}
	for (j = 0; j<49; j++) {
		printf("%d:%d\n",j, x.data[j]);
	}
	system("pause");

}


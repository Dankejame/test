#include <stdio.h>
#include <stdlib.h>
#define MaxSize  50

//ջ����(˳��洢)
typedef struct {
	int date[MaxSize];
	int top;

}SqStack;
//��ʼ��
void InitStack(SqStack &S) {
	S.top = -1;
}
//ջ�п�
bool StackEmpty(SqStack &S) {
	if (S.top == -1) {
		return true;
	}
	else
	{
		return false;
	}

	                      } 
//��ջ
bool Push(SqStack &s, int x) {
	if (s.top == MaxSize - 1) {
		return false;
	}
	else {
		s.date[++s.top] = x;
		return true;
	}
}
//��ջ
bool Pop(SqStack &S,int &x) {
	if (S.top == -1) {
		return false;
	}
	else
	{
		x = S.date[S.top--];
		return true;
	}
}
//��ջ��
bool GetTop(SqStack &S,int &x) {
	if (S.top == -1)
		return false;
	else
	{
		x = S.date[S.top];
		return true;
	}
}
//����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������//
//��ʽ�洢

typedef struct Linknode {
	int date;//������
	struct Linknode *next;//ָ����
}*Linkstack;

//����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������//
//����ջ
#define Maxsize_con   100
typedef struct stk{
	int stack[Maxsize_con];
	int top[2];
};
stk s;
//��ջ����
int push_stk(stk s, int i, int x) {
	if (i == 0 || i == 1) {
		if (s.top[1] - s.top[0] == 1) {
			printf("full\n");
			return 0;

		}
		switch (i)
		{
		case 0: s.stack[++s.top[0]] = x; return 1; break;
		case 1: s.stack[--s.top[1]] = x; return 1; break;

		}

	}
	else {
		printf("error_second_i_out_of_range\n");
		return 0;
	}
}
//��ջ����
int pop_stk(stk s,int i) {
	if (i == 1 || i == 0) {
		switch (i)
		{
		case 1: 
			if (s.top[1] = Maxsize_con) {
				printf("Empty\n");
					return -1;
			}
			return s.stack[s.top[1]++];
		case 0: 
			if (s.top[-1] == -1) {
				printf("Empty\n");
				return -1;
			}
			return s.stack[s.top[0]--];
		}
	}
	else
	{
		printf("error_second_i_out_of_range\n");
		return 0;
	}
}
		

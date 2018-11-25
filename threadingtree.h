#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;

typedef int Type;
typedef struct BitNode
{
       Type data; //�������
       struct BitNode *lchild, *rchild, *prior, *next; //���Һ���ָ���Լ�ǰ�����ָ��
}BitNode, *Bitree;

int Initree(Bitree& T);
int Destory(Bitree& T);
int Search(Bitree T,Type x,Bitree& Childtree);
int Deepth(Bitree T,Type x);
int TreeDepth(Bitree T);
Type Insert(Type e,Bitree& T);
Type Delete_x(Type x,Bitree& T);
Type DeleteNode(Bitree& T,Type& e,BitNode* p);
Bitree CreatPirorThread(Bitree &T);
Bitree CreatMiddleThread(Bitree &T);
Bitree CreatPostThread(Bitree &T);
int RemoveThread(Bitree& T);
void Travel_prior(Bitree T);
void Travel_middle(Bitree T);
void Travel_post(Bitree T);

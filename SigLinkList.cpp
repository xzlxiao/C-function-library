/*
功能：SigLinkList.h的定义
*/

#include "SigLinkList"
#include <iostream>
using namespace std;
template<class DataType>
void Link<Datatype>::Initiate()
{
	DeleteAll();
	head = NULL;
}

template<class DataType>
void Link<DataType>:: TailCreate(int n)
{
	/*
	*函数介绍：从表尾到表头建立单链表
	*输入参数：n,新建链表长度
	*输出参数：
	*返回类型：
	*/
	DeleteAll();
	Item *s, *p;
	int i;
	p = NULL;
	for (i = 1; i <= n; i++)
	{
		s = new Item();
		cin >> s ->data;
		p = s;
	}
	head = p;
}

template<class DataType>
void Link<DataType>:: HeadCreate(int n)
{
	/*
	*函数介绍：从表头到表尾建立单链表
	*输入参数：n,新建链表长度
	*输出参数：
	*返回类型：
	*/
	s = new Item();
	cin >> s->data;
	s->next = NULL;
	if (p == NULL)
	{
		p = r = s;
	}
	else
	{
		r->next = s;
		r = s;
	}
	head = p;
}

template<class DataType>
void Link<DataType>:: TailCreateWithHead(int n)
{
	/*
	*函数介绍：从表尾到表头建立单链表(带空白头节点）
	*输入参数：n,新建链表长度
	*输出参数：
	*返回类型：
	*/
	Item *s, *p;
	int i;
	DeleteAll();
	p = new Item();
	p->next = NULL;
	for(i = 1; i <= n; i++)
	{
		s = new Item();
		cin >> s->data;
		s->next = p->next;
		p->next = s;
	}
	head = p;
}

template<class DataType>
void Link<DataType>:: HeadCreateWithHead(int n)
{
	/*
	*函数介绍：从表头到表尾建立单链表(待空白头节点）
	*输入参数：n,新建链表长度
	*输出参数：
	*返回类型：
	*/
	Item *s, *r, *p;
	int i;
	DeleteAll();
	p = new Item();
	p->next = NULL;
	r = p;
	for(i = 1; i <= n; i++)
	{
		s = new Item();
		cin >> s->data;
		r ->next = s;
		r = s;
	}
	r->next = NULL;
	head = p;
}

template<class DataType>
int Link<DataType>:: Length()
{
	//求表长
	int j;
	Item *p;
	j = 1;
	p = head->next;
	while(p != NULL)
	{
		j++;
		p = p->next;
	}
	return --j;
}

template<class DataType>
Item *Link<DataType>:: Locatei(int i)
{
	//按序号查找
	int j = 1;
	Item *p; 
	if (i == 0)
	{
		return head;
	}
	p = head->next;
	while((p != NULL)&&(j < i))
	{
		p = p->next;
		j++;
	}
	if(j == i)
	{
		return p;
	}
	else{
		cout << "postion is not correct!" << endl;
		return NULL;
	}
}
template<class DataType>
Item *Link<DataType>:: Locatex(DataType x)
{
	// 按值查询定位
	Item *p;
	p = head->next;
	while ((p!=NULL)&&(p->data!=x))
	{
		p = p->next;
	}
	if(p)
	{
		return p;
	}
	else
	{
		cout << x << "is not exist!" << endl;
		return NULL;
	}
}
template<class DataType>
DataType Link:: Get(int i)
{
	// 取第i个位置上的元素
	int j;
	Item *p;
	j = 1;
	p = head -> next;
	while((j < i)&&(p != NULL))
	{
		j++;
		p = p->next;
	}
	if ((p == NULL)||(j > i))
	{
		cout << "position is not correct!" << endl;
		return NULL;
	}
	else return p->data;
}
template<class DataType>
bool Link:: Insert(DataType x, int i)
{
	// 前插节点
	Item *p, *s;
	p = Locatei(i - 1);
	if (p == NULL)
	{
		cout << "position is not correct!" << endl;
		return false;
	}
	s = new Item();
	s->data = x;
	s->next = p->next;
	p->next = s;
	return true;
}
template<class DataType>
bool Link<DataType>:: Delete(int i)
{
	// 删除节点
	Item *p = Locatei(i - 1);
	Item *q;
	if(p == NULL)
	{
		cout << "position is not correct!" << endl;
		return false;
	}
	q = p->next;
	if(q!=NULL)
	{
		p->next = q->next;
		delete q;
		return true;
	}
	else 
	{
		cout << "position is not correct!" << endl;
		return false;
	}
}
template<class DataType>
void Link<DataType>:: Print()
{
	// 打印
	Item *p;
	p = head->next;
	while(p!=NULL)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}
void Link:: DeleteAll()
{
	Item *p = head, *q;
	while (p != NULL)
	{
		q = p->next;
		delete p;
		p = q;
	}
	head = NULL;
}

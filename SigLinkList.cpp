/*
���ܣ�SigLinkList.h�Ķ���
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
	*�������ܣ��ӱ�β����ͷ����������
	*���������n,�½�������
	*���������
	*�������ͣ�
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
	*�������ܣ��ӱ�ͷ����β����������
	*���������n,�½�������
	*���������
	*�������ͣ�
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
	*�������ܣ��ӱ�β����ͷ����������(���հ�ͷ�ڵ㣩
	*���������n,�½�������
	*���������
	*�������ͣ�
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
	*�������ܣ��ӱ�ͷ����β����������(���հ�ͷ�ڵ㣩
	*���������n,�½�������
	*���������
	*�������ͣ�
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
	//���
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
	//����Ų���
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

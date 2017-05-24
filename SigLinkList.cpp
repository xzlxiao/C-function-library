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
template<class DataType>
Item *Link<DataType>:: Locatex(DataType x)
{
	// ��ֵ��ѯ��λ
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
	// ȡ��i��λ���ϵ�Ԫ��
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
	// ǰ��ڵ�
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
	// ɾ���ڵ�
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
	// ��ӡ
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

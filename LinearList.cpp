/*���Ա�LinearList��ʵ��*/
#include "LinearList.h"
#include <iostream>
using namespace std;
template<class LinearType, int MAXSIZE>
void LinearList<LinearType, MAXSIZE>::Initiate()
{
	len = 0;
}

template<class LinearType, int MAXSIZE>
void LinearList<LinearType, MAXSIZE>::Insert(LinearType x, int i)
{
	//�����Ա��i��Ԫ��֮ǰ����һ���µ�����Ԫ��x
	int j;
	if(len >= MAXSIZE)
	{
		cout << "overflow!" << endl;	//�������
		return 0;
	}
	else if((i < 1)||(i > len+1))
	{
		cout << "position is not correct!" << endl;
		return 0;
	}
	else
	{
		for(j = len + 1; j >= i; j--)
		{
			data[j] = data[j-1];	//���ݺ���
		}
		data[i - 1] = x;	//����Ԫ��
		len++;				//��������1
		return 1;
	}
}

template<class LinearType, int MAXSIZE>
int LinearList<LinearType, MAXSIZE>::Deleted(int i)
{
	int j;
	if ((i<1)||(i>len))		//��ɾ��λ�ò��Ϸ�
	{
		cout << "position is not correct!" << endl;
		return 0;
	}
	else
	{
		for (j = i; j < len; j++)
		{
			data[j - 1] = data[j];	//Ԫ��ǰ��
		}
		len--;	//����1
		return 1;
	}
}

template<class LinearType, int MAXSIZE>
int LinearList<LinearType, MAXSIZE>::Search(LinearType X)
{
	//����ֵΪx����������Ԫ�ص�λ��ֵ
	
}
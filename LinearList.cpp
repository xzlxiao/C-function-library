/*线性表LinearList的实现*/
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
	//在线性表第i个元素之前插入一个新的数据元素x
	int j;
	if(len >= MAXSIZE)
	{
		cout << "overflow!" << endl;	//数据溢出
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
			data[j] = data[j-1];	//数据后移
		}
		data[i - 1] = x;	//插入元素
		len++;				//表长度增加1
		return 1;
	}
}

template<class LinearType, int MAXSIZE>
int LinearList<LinearType, MAXSIZE>::Deleted(int i)
{
	int j;
	if ((i<1)||(i>len))		//若删除位置不合法
	{
		cout << "position is not correct!" << endl;
		return 0;
	}
	else
	{
		for (j = i; j < len; j++)
		{
			data[j - 1] = data[j];	//元素前移
		}
		len--;	//表长减1
		return 1;
	}
}

template<class LinearType, int MAXSIZE>
int LinearList<LinearType, MAXSIZE>::Search(LinearType X)
{
	//返回值为x的所有数据元素的位序值
	
}
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
int LinearList<LinearType, MAXSIZE>::Insert(LinearType x, int i)
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
		for(j = len; j >= i; j--)
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
int* LinearList<LinearType, MAXSIZE>::Search(LinearType X)
{
	//返回值为x的所有数据元素的位序值
	int j;
	int Got = 0;	//判断是否有匹配元素
	LinearType mGot_tmp[len];	//创建一个临时二维数组，储存匹配序号
	for (j = 0; j < len; j++)
	{
		if (data[j] == x)
		{
			mGot_tmp[Got] = j + 1;
			Got++;
		}
	}
	LinearType* mGot = new LinearType[Got];
	if (Got == 0)
	{
		cout << "no match" << endl;
		return mGot;
	}
	else
	{
		return mGot;
	}
}

template<class LinearType, int MAXSIZE>
LinearType LinearList<LinearType, MAXIZE>::Get(int i)
{
	//取得第i个元素
	if ((i < 1)||(i > len))
	{
		cout << "position is not correct!" << endl;
		return NULL;
	}
	else
	{
		return data[i-1];
	}
}

template<class LinearType, int MAXSIZE>
int LinearList<LinearType, MAXSIZE>::Length()
{
	return len;
}
typedef int DataType;		//这里以整型为栈的数据类型
class StackNode					//定义链栈的节点
{
public:
	DataType data;
	StackNode *next;
	StackNode()
	{
		next = NULL;
	};
};
class LinkStack
{
private:
	StackNode *top;
public:
	LinkStack()
	{
		top = NULL;		//构造一个新的空栈
	}
	~LinkStack()			//销毁一个已存在的栈
	{
		stackNode *p;
		while(top)			//销毁栈中所有元素
		{
			p = top;
			top = top -> next;
			delete p;
		}
		top = NULL;		//栈顶指针赋空表示为空栈
	};
	int Empty_Stack();	//判断栈是否为空
	int Push_Stack(DataType e);		//将元素e插入栈顶
	int Pop_Stack(DataType &e);		//从栈顶删除一个元素到e中返回
	int GetTop_Stack(DataType &e);		//从栈顶去除一个元素到e中返回
};		//链栈类
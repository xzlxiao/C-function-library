typedef int DataType;		//这里以整型为栈的数据类型
class SeqStack
{
private:
	DataType *base;			//栈底指针
	DataType *top;			//栈顶指针始终指向栈顶元素的后一个位置
	int size;				//栈的大小
public:
	SeqStack(int stacksize=100)
	{
		base = new DataType[stacksize];
		top = base;		//指向栈顶元素的后一个位置
		size = stacksize;
	};		//构造一个空栈，默认大小为100个单元
	~SeqStack()
	{
		delete[] base;
		top = NULL;
		base = NULL;
	};		//销毁一个已存在的栈
	int Empty_Stack();		//判断栈是否为空
	int Push_Stack(DataType e);		//将元素e插入栈顶
	int Pop_Stack(DataType &e);		//从栈顶删除一个元素到e中返回
	int GetTop_Stack(DataType &e);		//从栈顶取出一个元素到e中返回
};		//顺序栈类
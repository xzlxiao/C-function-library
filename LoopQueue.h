typedef int DataType;		//这里以整型为队列的数据类型
class SeqQueue
{
private:
	DataType *base;
	int front;
	int rear;
	int size;
public:
	SeqQueue(int Queuesize = 100)			//构造一个空队列，默认空间大小为100
	{
		base = new DataType[Queuesize];
		front = 0;
		rear = 0;
		size = Queuesize;
	};
	~SeqQueue()			//销毁一个已存在的队列
	{
		delete[] base;
	};
	int Empty_Queue();		//判断队列是否为空
	int En_Queue(DataType e);		//入队将元素e插入队尾
	int De_Queue(DataType &e);		//出队从队头删除一个元素到e中返回
	int Front_Queue(DataType &e);		//取队头元素，从队头取出一个元素到e中返回
};		//循环队列类
typedef int DataType;		//这里以整型为队列的数据类型
class QueueNode
{
public:
	DataType data;
	QueueNode *next;
	QueueNode()
	{
		next = NULL;
	}
};		//链队列节点
class LinkQueue
{
private:
	QueueNode *front;
	QueueNode *rear;
public:
	LinkQueue()		//构造一个新的空队列
	{
		front = NULL;
		rear = NULL;
	}
	~LinkQueue()		//销毁一个已存在的队列
	{
		QueueNode *p, *q;
		p = front;
		while(p)		//删除链上所有的节点
		{
			q=p;
			p = p->next;
			delete q;
		}
		front = NULL;		//设置为空表示空队列
		rear = NULL;		//设置为空表示空队列
	}
	int Empty_Queue();		//判断队列是否为空
	int En_Queue(DataType e);		//将元素e插入队尾
	int De_Queue(DataType &e);		//从队头删除一个元素到e中返回
};		//链队列类
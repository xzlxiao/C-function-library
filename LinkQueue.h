typedef int DataType;		//����������Ϊ���е���������
class QueueNode
{
public:
	DataType data;
	QueueNode *next;
	QueueNode()
	{
		next = NULL;
	}
};		//�����нڵ�
class LinkQueue
{
private:
	QueueNode *front;
	QueueNode *rear;
public:
	LinkQueue()		//����һ���µĿն���
	{
		front = NULL;
		rear = NULL;
	}
	~LinkQueue()		//����һ���Ѵ��ڵĶ���
	{
		QueueNode *p, *q;
		p = front;
		while(p)		//ɾ���������еĽڵ�
		{
			q=p;
			p = p->next;
			delete q;
		}
		front = NULL;		//����Ϊ�ձ�ʾ�ն���
		rear = NULL;		//����Ϊ�ձ�ʾ�ն���
	}
	int Empty_Queue();		//�ж϶����Ƿ�Ϊ��
	int En_Queue(DataType e);		//��Ԫ��e�����β
	int De_Queue(DataType &e);		//�Ӷ�ͷɾ��һ��Ԫ�ص�e�з���
};		//��������
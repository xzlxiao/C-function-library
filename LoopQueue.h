typedef int DataType;		//����������Ϊ���е���������
class SeqQueue
{
private:
	DataType *base;
	int front;
	int rear;
	int size;
public:
	SeqQueue(int Queuesize = 100)			//����һ���ն��У�Ĭ�Ͽռ��СΪ100
	{
		base = new DataType[Queuesize];
		front = 0;
		rear = 0;
		size = Queuesize;
	};
	~SeqQueue()			//����һ���Ѵ��ڵĶ���
	{
		delete[] base;
	};
	int Empty_Queue();		//�ж϶����Ƿ�Ϊ��
	int En_Queue(DataType e);		//��ӽ�Ԫ��e�����β
	int De_Queue(DataType &e);		//���ӴӶ�ͷɾ��һ��Ԫ�ص�e�з���
	int Front_Queue(DataType &e);		//ȡ��ͷԪ�أ��Ӷ�ͷȡ��һ��Ԫ�ص�e�з���
};		//ѭ��������
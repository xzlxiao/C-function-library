typedef int DataType;		//����������Ϊջ����������
class StackNode					//������ջ�Ľڵ�
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
		top = NULL;		//����һ���µĿ�ջ
	}
	~LinkStack()			//����һ���Ѵ��ڵ�ջ
	{
		stackNode *p;
		while(top)			//����ջ������Ԫ��
		{
			p = top;
			top = top -> next;
			delete p;
		}
		top = NULL;		//ջ��ָ�븳�ձ�ʾΪ��ջ
	};
	int Empty_Stack();	//�ж�ջ�Ƿ�Ϊ��
	int Push_Stack(DataType e);		//��Ԫ��e����ջ��
	int Pop_Stack(DataType &e);		//��ջ��ɾ��һ��Ԫ�ص�e�з���
	int GetTop_Stack(DataType &e);		//��ջ��ȥ��һ��Ԫ�ص�e�з���
};		//��ջ��
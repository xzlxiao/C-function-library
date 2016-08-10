typedef int DataType;		//����������Ϊջ����������
class SeqStack
{
private:
	DataType *base;			//ջ��ָ��
	DataType *top;			//ջ��ָ��ʼ��ָ��ջ��Ԫ�صĺ�һ��λ��
	int size;				//ջ�Ĵ�С
public:
	SeqStack(int stacksize=100)
	{
		base = new DataType[stacksize];
		top = base;		//ָ��ջ��Ԫ�صĺ�һ��λ��
		size = stacksize;
	};		//����һ����ջ��Ĭ�ϴ�СΪ100����Ԫ
	~SeqStack()
	{
		delete[] base;
		top = NULL;
		base = NULL;
	};		//����һ���Ѵ��ڵ�ջ
	int Empty_Stack();		//�ж�ջ�Ƿ�Ϊ��
	int Push_Stack(DataType e);		//��Ԫ��e����ջ��
	int Pop_Stack(DataType &e);		//��ջ��ɾ��һ��Ԫ�ص�e�з���
	int GetTop_Stack(DataType &e);		//��ջ��ȡ��һ��Ԫ�ص�e�з���
};		//˳��ջ��
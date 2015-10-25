/*
*������������
*/

template<class DataType>
class Item
{
public:
	DataType m_data;
	Item *next;
	Item()
	{
		next = NULL;
	}
}

template<class DataType>
class Link
{
public:
	Item *head;		// ����ͷָ��
	Link()
	{
		head = NULL;
	}
	~Link()
	{
		DeleteAll();
	}
	void Initiate();	//��ʼ��
	void DeleteAll();	//ɾ�����нڵ�
	void HeadCreate(int n);	//��ͷ������
	void TailCreate(int n); //��β������
	void HeadCreateWithHead(int n);	//��������ͷ��������ͷ��
	void TailCreateWithHead(int n);	//��������ͷ��������β��
	int Length();		//��������
	Item *Locatex(DataType x);		//����ֵΪx������Ԫ��
	Item *Locatei(int i);	//���ҵ�i��Ԫ��
	DataType Get(int i);	//����i��Ԫ��ֵ
	bool Insert(DataType x, int i);	//�������i���ڵ�֮ǰ����x
	bool Deleted(int i);	//ɾ�������е�i���ڵ�
	void Print();		//��ӡ����
}
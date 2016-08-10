typedef int DataType;
class Item
{
	public:
		DataType data;
		Item *next;
		Item(){next=NULL;}
};

class Link
{
	public:
		Item *head;			// ����ͷָ��
		Link(){head=NULL;}		// ���캯��
		~Link(){DeleteAll();}		// ��������
		void Initiate();				// ��ʼ��
		void DeleteAll();			// ɾ�����нڵ�
		void HeadCreate(int n);		// ��ͷ������
		void TailCreate(int n);		// ��β������
		void HeadCreateWithHead(int n);		// ��������ͷ��������ͷ��
		void TaidCreateWithHead(int n);		// ��������ͷ��������β��
		int Length();			// ��������
		Item *Locatex(DataType x);		// ����ֵΪx������Ԫ��
		Item *Locatei(int i);				// ���ҵ�i��Ԫ��
		DataType Get(int i);			// ȡ��i��Ԫ��ֵ
		bool Insert(DataType x, int i);	// �������е�i���ڵ�֮ǰ����x
		bool Deleted(int i);			// ɾ�������е�i���ڵ�
		void Print();		// ��ӡ����
}
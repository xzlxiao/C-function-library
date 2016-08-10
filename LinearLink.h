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
		Item *head;			// 链表头指针
		Link(){head=NULL;}		// 构造函数
		~Link(){DeleteAll();}		// 析构函数
		void Initiate();				// 初始化
		void DeleteAll();			// 删除所有节点
		void HeadCreate(int n);		// 从头建链表
		void TailCreate(int n);		// 从尾建链表
		void HeadCreateWithHead(int n);		// 建立带表头的链表（从头）
		void TaidCreateWithHead(int n);		// 建立带表头的链表（从尾）
		int Length();			// 求链表长度
		Item *Locatex(DataType x);		// 查找值为x的数据元素
		Item *Locatei(int i);				// 查找第i个元素
		DataType Get(int i);			// 取第i个元素值
		bool Insert(DataType x, int i);	// 在链表中第i个节点之前插入x
		bool Deleted(int i);			// 删除链表中第i个节点
		void Print();		// 打印链表
}
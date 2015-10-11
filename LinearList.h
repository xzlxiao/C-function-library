/*脚本名称：线性表*/
template <class LinearType, int MAXSIZE>
class LinearList
{
protected:
	LinearType data[MAXSIZE - 1];
	int len;
public:
	void Initiate()；	//线性表初始化
	int Length();		//求线性表的长度
	LinearType Get(int i);		//取表元
	int* Search(LinearType X);	//按值查找
	int Insert(LinearType x, int i);	//插入操作
	int Deleted(int i);	//删除操作
};
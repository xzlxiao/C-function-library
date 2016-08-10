typedef int DataType;
class DualItem
{
public:
	DataType data;
	DualItem *next;
	DualItem *prior;
	DualItem(){next=NULL; prior=NULL;}
};
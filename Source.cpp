#include "mDequeu.h"

int main()
{
	mDeque<int>* dInt = new mDeque<int>();
	cout << dInt->GetSize() << endl;

	dInt->pushFront(50);
	dInt->pushBack(60);
	dInt->pushFront(40);
	dInt->pushBack(70);
	dInt->pushFront(30);
	dInt->pushBack(80);
	cout << dInt->GetSize() << endl;
	int ss = dInt->GetSize();
	for (int i=0; i<ss;i++)
	{
		cout << dInt->getFront() <<" ";
		dInt->popFront();
	}


}
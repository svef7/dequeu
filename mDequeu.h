#pragma once

#include <iostream>
#include "mNode.h"
using namespace std;
template <typename obj_type>
class mDeque
{
	typedef mNode<obj_type> sNode;
	typedef mNode<obj_type>* pNode;
	pNode
		front = nullptr,
		back = nullptr;
	int Size = 0;
public:
	mDeque() {}
	int GetSize() const
	{
		return Size;
	}
	bool Empty() const
	{
		return Size == 0;
	}
	obj_type getFront() const
	{
		if (!Empty())
		{
			return front->data;
		}
		obj_type* ptr = new obj_type;
		obj_type obj = *ptr;
		delete ptr;
		return obj;
	}
	obj_type getBack() const
	{
		if (!Empty())
		{
			return back->data;
		}
		obj_type* ptr = new obj_type;
		obj_type obj = ptr;
		delete ptr;
		return obj;
	}
	void pushFront(const obj_type value)
	{
		pNode ptr = new sNode(value);

		if (ptr == nullptr) return;
		if (Size == 0)
		{
			front = back = nullptr;
			Size++;
			return;
		}
		ptr->next = front;
		front->prev = ptr;
		front = ptr;
		Size++;
	}
	void pushBack(const obj_type value)
	{
		pNode ptr = new sNode(value);

		if (ptr == nullptr) return;
		if (Size == 0)
		{
			front = back = nullptr;
			Size++;
			return;
		}
		ptr->prev = back;
		back->next = ptr;
		back = ptr;
		Size++;
	}
	void popBack()
	{
		if (Size == 0)
		{
			cout << "The structure is Empty " << endl;
			return;
		}
		pNode ptr = back;
		back = back->next;
		delete ptr;
		Size--;

		if (Size == 0)
		{
			front = nullptr;
			return;
		}
		back->next = nullptr;
	}
	
	void popFront()
	{
		if (Size == 0)
		{
			cout << "The structure is Empty " << endl;
			return;
		}
		pNode ptr = front;
		front = front->next;
		delete ptr;
		Size--;

		if (Size == 0)
		{
			back = nullptr;
			return;
		}
		front->prev = nullptr;
	}




};
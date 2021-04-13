#pragma once
template<typename obj_type>
class mNode {
public:
	obj_type data;
	mNode* next;
	mNode* prev;
	mNode <obj_type>(obj_type value, mNode* _prev = nullptr,
		mNode* _next = nullptr)
	{
		data = value;
		prev = _prev;
		next = _next;
	}
};


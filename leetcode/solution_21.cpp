#include "solution.h"

//21. �ϲ�������������

//��������������ϲ�Ϊһ���µ� ���� �������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ�

struct solution_21::ListNode
{
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};


//β�巨��������
solution_21::ListNode* solution_21::ListNodeInit(int arr[], int nums)
{
	int arr_length = nums;
	ListNode* L = new ListNode;
	L->val = arr[0];
	L->next = NULL;
	ListNode* r = L;
	for (int i = 1; i < arr_length; i++)
	{
		ListNode* p = new ListNode;
		p->val = arr[i];
		p->next = NULL;
		r->next = p;
		r = p;
	}
	return L;
}

solution_21::ListNode* solution_21::mergeTwoLists(ListNode* list1, ListNode* list2)
{
	if (list1 == NULL)
		return list2;
	else if(list2 == NULL)
		return list1;
	else if (list1->val < list2->val)
	{
		list1->next = mergeTwoLists(list1->next,list2);
		return list1;
	}
	else
	{
		list2->next = mergeTwoLists(list1, list2->next);
		return list2;
	}
}
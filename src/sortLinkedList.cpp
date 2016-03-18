/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};
typedef struct node * lptr;
void display2(lptr first)
{
	lptr t;
	t = first;
	while (t != NULL)
	{
		printf("%d", t->num);
		t = t->next;
	}
}
struct node * sortLinkedList(struct node *head) {
	int p=0, t, i, j;
	lptr first = head;
	lptr f = head;
	if (head == NULL)
	{
		return NULL;
	}
	
	while (first!= NULL)
	{
		
		first = first->next;
		
		p++;
	}
	
	if (p == 0)
	{
		return first;
	}
	while (f&&f->next)
	{
		lptr sec = f->next;
		while (sec)
		{
			if (f->num > sec->num)
			{
				t = f->num;
				f->num = sec->num;
				sec->num = t;
			}
			sec = sec->next;
		}
		f = f->next;
	}
	

		
		

	
	return head;
}
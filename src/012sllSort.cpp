/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};
typedef struct node *lptr;
void sll_012_sort(struct node *head){
	lptr f = head;
	int t;
	while (f&&f->next)
	{
		lptr sec = f->next;
		while (sec)
		{
			if (f->data > sec->data)
			{
				t = f->data;
				f->data = sec->data;
				sec->data = t;
			}
			sec = sec->next;
		}
		f = f->next;
	}
	
}
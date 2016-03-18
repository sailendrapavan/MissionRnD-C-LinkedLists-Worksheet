/*
OVERVIEW:  Given a single linked list (two digits as a node).Convert that to number


INPUTS:  SLL head pointer

OUTPUT: Create a number from the linked list given ,In each node there are two numbers ,digit1 and digit1 ,
So if the nodes are 12->34->56->78 , Final number would be 12345678 ( Integer)

ERROR CASES:

NOTES: Only Postive Numbers
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int digit1;
	int digit2;
	struct node *next;
};
typedef struct node *lptr;
int convert_sll_2digit_to_int(struct node *head){
	lptr h = head;
	int c=0,temp1,temp2,final=0;
	if (head == NULL)
	{
		return NULL;
	}
	while (h != NULL)
	{
		temp1 = h->digit1;
		temp2 = h->digit2;
		final = final * 100 + (h->digit1) * 10 + h->digit2;
		h = h->next;
	}
	
	return final;
}

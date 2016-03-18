/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};
typedef struct node * lptr;
struct node * removeEveryKthNode(struct node *head, int K) {
	if (head == NULL||K<=0)
	{
		return NULL;
	}
	lptr g = head,m=head;

	int c = 0, t = 0,i=1;
	while (g != NULL)
	{
		c++;
		g = g->next;
	}
	printf("%d", c);
	t = K - 1;
	while (m->next!=NULL)
	{
		
		if (i%K==0)
		{

			m->next = m->next->next;
			
		}
		i++;
	}m = m->next;
	return head;
}
/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>
#include<math.h>

struct node {
	int num;
	struct node *next;
};
typedef struct node *lptr;
lptr t1;

lptr insertfrot(struct node *first, int x)
{
	lptr p;
	p = (lptr)malloc(sizeof(struct node));
	p->num = x;
	p->next = NULL;
	if (first == NULL)
	{
		first = p;
		return first;
	}
	p->next = first;
	first = p;
	return first;
}
void display(lptr first)
{
	lptr t;
	t = first;
	while (t != NULL)
	{
		printf("%d", t->num);
		t = t->next;
	}
}
lptr numberToLinkedList(int N) {
	if (N == 0)
	{
		lptr p;
		p = (lptr)malloc(sizeof(struct node));
		p->num = 0;
		p->next = NULL;
		return p;
	}
	int p = abs(N);
	
	int n = p, rem;
	while (n != 0)
	{
		rem = n % 10;
		t1=insertfrot(t1, rem);
		n = n/10;

	}
	
	//display(t1);
	return t1;
}


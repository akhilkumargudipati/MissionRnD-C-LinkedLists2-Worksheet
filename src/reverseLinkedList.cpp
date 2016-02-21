/*
OVERVIEW: Given a single linked list, reverse the linked list.
E.g.: 1->2->3->4->5, output is 5->4->3->2->1.

INPUTS: A linked list.

OUTPUT: Reverse the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * reverseLinkedList(struct node *head) 
{
	if (head == NULL)
		return NULL;

	struct node *cur = head, *temp1 = NULL, *temp2, *temp3 = head;
	while (cur != NULL){
		temp2 = temp1;
		temp1 = cur;
		cur = cur->next;
		temp1->next = temp2;
	}
	head->next = NULL;
	return temp1;
}

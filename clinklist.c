#include "clinklist.h"

struct clinklist* createlinklist()
{
  struct clinklist* ll = malloc(sizeof(struct clinklist));
  ll->head = NULL;
  return ll;
}

struct node* createNode(struct data *d)
{
  struct node* n = malloc(sizeof(struct node));
  n->d = d;
  n->next = NULL;
  return n;
}

void addFront(struct clinklist *ll,struct data *d)
{

	struct node *n = createNode(d);
	n->next = ll->head;

	struct node *temp;
	for(temp->next = ll->head; temp->next != ll->head; temp= temp->next)
	{

	}
	temp->next = n;
	ll->head = n;
}

void addBack(struct clinklist *ll,struct data *d)
{

}

void printList(struct clinklist *ll)
{

	if(head is not NULL)
	{

		do
		{
			printData()

		}while()

	}

}

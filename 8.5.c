#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int No;
	struct _node * next; 
} Node;

typedef struct{
	Node * start;
	Node * end;
} lst;

lst* create_lst(void) {
    Node* p = malloc(sizeof(Node));
    p->No = 1;
    p->next = p;
    lst* P = malloc(sizeof(lst));
    P->start = p;
    P->end = p;
    return P;
}

void add(lst* l, int a) {
    Node* p = l->start;
    while (p->next != l->start) {
        p = p->next;
    }
    Node* new_node = malloc(sizeof(Node));
    new_node->No = a;
    new_node->next = l->start;
    p->next = new_node;
    l->end = new_node;
}


int main()
{
	int n, l, i;
	printf("input number of person: n=");
	scanf("%d", &n);
	lst *circle = create_lst();
	for (i = 2; i <= n; i++)
	{
		add(circle, i);
	}
	Node *p = circle -> start;
	while (p -> next != p)
	{
		for (i = 1; i <= 2; i++)
		{
			p = p -> next;
		}
		Node *dlt = p -> next;
		p -> next = dlt -> next;
		free(dlt);
		p = p -> next;
	}
	l = p -> No + 1v;
	printf("\nThe last one is NO.%d", l);
}

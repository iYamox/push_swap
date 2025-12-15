#include "push_swap.h"

void printlist(t_stack *lst)
{

	while (lst != NULL)
	{
		printf("%d -> ", lst->content);
		lst = lst->next;
	}
	printf("\n");
}

void push_front(t_stack **head, t_stack *new_node)
{
	if (!new_node || !head)
		return;
	new_node->next = *head;
	*head = new_node;
}
t_stack	*node_new(int value)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->content = value;
	new_node->next = NULL;
	return (new_node);
}

int main(void)
{
	t_stack *lst = NULL;
	int	i = 6;

	while (--i > -1)
		push_front(&lst, node_new(i));
	printf("Liste avant :");
	printlist(lst);

	sa(&lst);

	printf("Liste apres :");
	printlist(lst);

}
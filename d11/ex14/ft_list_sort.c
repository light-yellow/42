#include "ft_list.h"
#include <stdio.h>
#include <string.h>

void	ft_swap_ptrs(t_list **begin_list, t_list *previous, t_list *current, t_list *next)
{
	current->next = next->next;
	if (previous)
		previous->next = next;
	else
		*begin_list = next;
        next->next = current;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	unsigned int	sorted;
	t_list		*previous;
	t_list		*current;
	t_list		*next;

	sorted = 0;
	while (begin_list && *begin_list && !sorted)
	{
		previous = NULL;
		current = *begin_list;
		sorted = 1;
		while (current && current->next)
		{
			next = current->next;
			if ((*cmp)(current->data, next->data) > 0)
			{
				sorted = 0;
				ft_swap_ptrs(begin_list, previous, current, next);
			}
			previous = current;
			current = current->next;
		}
	}
}

#define CE(data) ft_create_elem(data)
#define CL(list) crap_a_list(list)

// pronounced with an exclaimation point at the end
void crap_a_list(t_list* list)
{
	for (; list != 0; list = list->next)
		printf("%s,", (char*)list->data);
	printf("\n");
}

// pronounced with an exclaimation point at the end
t_list* crap_the_argv(char** argv)
{
	t_list* res = 0;
	t_list* tail = 0;
	argv++;
	while (*argv != 0)
	{
		if (tail == 0)
			res = tail = CE(*argv++);
		else
		{
			tail->next = CE(*argv++);
			tail = tail->next;
		}
	}
	return res;
}

void print_str(char* str)
{
	printf("%s\n", str);
}

int starts_with(char* str, char* ref)
{
	return str[0] - ref[0];
}

int main(int argc, char** argv)
{
	if (argc < 1)
		return 1;
	t_list* list = crap_the_argv(argv);
	ft_list_sort(&list, (int(*)())strcmp);
	crap_a_list(list);
}

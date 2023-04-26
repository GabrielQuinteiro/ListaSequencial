#include "lista.h"

void init_list(List* list)
{
	list->list_size = 0;
	int i;
	for (i = 0; i < MAX_LIST_SIZE; i++)
	{
		list->dados[i] = 0;
	}
}

int list_size(List list)
{
	return list.list_size;
}

bool is_list_empty(List list)
{
	if (list_size(list) > 0)
		return false;
	
	return true;
}

void print_list(List list)
{
	if (is_list_empty(list))
	{
		printf("Empty list\n");
	}

	int i;
	for (i = 0; i < list_size(list); i++)
		printf("%d\n", list.dados[i]);
}

bool list_add(List* list, int k, data value)
{
	if (k < 0 || k > list_size(*list))
		return false;

	if (list->list_size == MAX_LIST_SIZE)
		return false;

	int i;
	for (i = list_size(*list); i >= k; i--)
	{
		list->dados[i] = list->dados[i - 1];
	}

	list->dados[k] = value;
	list->list_size++;

	return true;
}

bool list_remove(List* list, int k)
{
	if (k < 0 || k > list_size(*list))
		return false;
	
	if (is_list_empty(*list))
		return false;

	int i;
	for (i = k; i < list_size(*list); i++)
	{
		list->dados[i] = list->dados[i + 1];
	}

	list->list_size--;

	return true;
}

int list_search(List list, data value)
{
	int i;
	for (i = 0; i < list_size(list); i++)
	{
		if (value == list.dados[i])
		{
			return i;
		}
	}
	return -1;
}

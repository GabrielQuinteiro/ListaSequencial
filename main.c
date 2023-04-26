#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lista.h"

int main()
{
	List list;
	bool a;
	
	init_list(&list);

	list_add(&list, 0, 2);
	print_list(list);

	a = list_remove(&list, 0);
	printf("%d\n", a);
	print_list(list);

	return 0;
}
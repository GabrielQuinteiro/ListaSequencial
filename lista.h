#ifndef _LISTA_H 
#define _LISTA_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_LIST_SIZE 10

typedef int data;

typedef struct {
	data dados[MAX_LIST_SIZE];
	int list_size;
} List;

//Inicializa lista 
void init_list(List* list);

//Retorna tamanho da lista
int list_size(List list);

bool is_list_empty(List list);

void print_list(List list);

bool list_add(List* list, int k, data value);

bool list_remove(List* list, int k);

int list_search(List list, data value);

#endif // !_LISTA_H 

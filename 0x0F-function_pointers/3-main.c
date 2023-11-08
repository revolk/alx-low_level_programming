/* 3-main.c */

#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	int num1 = atoi(argv[1]);
	char *op = argv[2];
	int num2 = atoi(argv[3);

	int (*op_func)(int, int) = get_op_func(op);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_func(num1, num2));

	return (0);
}


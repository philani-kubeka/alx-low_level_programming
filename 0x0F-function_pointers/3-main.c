#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - perform operations
 *
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, res;
	char i;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	i = *argv[2];

	if ((i == '/' || i == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = func(arg1, arg2);
	printf("%d\n", res);

	return (0);
}

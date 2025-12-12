#include <stdio.h>

/**
* main - A program that prints the size of various data types
*
* Return: Always (0).
*/

int main(void)
{
	printf("Print the size of various types on computer specific\n");
	printf("====================================================\n");
	printf("Size of a char: %lu bytes(s).\n", sizeof(char));
	printf("Size of a int: %lu bytes(s)\n", sizeof(int));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu bytes(s).\n", sizeof(long long int));
	printf("Size of a float: %lu bytes(s)\n", sizeof(float));

	return (0);
}

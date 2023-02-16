#include <stdio.h>
/*
 *Description: main - print the size of variables and space they consume in the memory
 *Return: 0 if successful
 */
int main()
{
	printf("size of a char is: %lu byte(s)\n", sizeof(char));
	printf("size of an int is: %lu  byte(s)\n", sizeof(int));
	printf("size of a long int is: %lu byte(s)\n", sizeof(long int ));
	printf("size of a long long is: %lu byte(s)\n", sizeof(long long int));
	printf("size of a float is: %lu byte(s)\n", sizeof(float));

	return (0);
}

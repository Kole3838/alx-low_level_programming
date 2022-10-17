#include <stdio.h>
/**
 * main -serves as the entry point for the program.
 * the program prints the various sizes of data types.
 * Return: return zero.
 */
int main(void)
{

	/* sizeof evaluates the size of a variable */
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld bytes(s)\n", sizeof(float));
	return (0);

}

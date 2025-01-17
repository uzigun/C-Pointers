/*
	Create an array of integers. Use a pointer to traverse the array and print each element.
*/

#include <stdio.h>

int main(void)
{
	int array[5] = { 1, 2, 3, 4, 5 };

	int* ptr = array;

	for (int i = 0; i < 5; i++)
	{
		printf("element %d: %d\n", i, *(ptr + i));
	}

	return 0;
}

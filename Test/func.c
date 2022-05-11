#include <stdio.h>

//extern int i;

//void testFunc(int value)
void testFunc(int *value)
{
//	i++;
	(*value)++;
}

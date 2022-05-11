#include <stdio.h>

void testFunc();

//int i = 0;
int main()
{
	int i = 0;
	int b = 3;
	printf("%d", i);
	testFunc(&i);	
	printf("%d", i);

	printf("%d", b);
        testFunc(&b);
	printf("%d", b);
		
}

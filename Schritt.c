#include <stdio.h>
#include <stdlib.h>

void global();
void reference();
int value();
int a = 1;

int main()
{
	int start;
//	int a = 1;
	int b = 1;
	int c = 1;
	int d = 1;
	int e = 1;
	int f = 1;
	
	char aufstehen [2];
	char Wand[2];
	char Stuhl[2];
	
	while(aufstehen[0] != 'y' && aufstehen[0] != 'Y')
	{
		
		printf("Aufstehen bitte!\n\n");
		scanf("%s", aufstehen);
	}

	while (a <= 2)
	{
		printf("Schritt %d\n", a);
		global(); 
	}		
	while (Wand[0] != 'y' && Wand[0] != 'Y')
	{
		printf ("Ist schon die Wand da?\n\n");
		scanf("%s",Wand);
	}
		printf ("Drehung nach links um 90 Grad.\n\n");
	Wand[0] = ' ' ;
	while(b <= 8)
	{
		printf ("Schritt %d\n", b);
		b=value(b);
	}
	while (Wand[0] != 'y' && Wand[0] != 'Y' )
	{
		printf ("Ist schon die Wand da?\n\n");
		scanf("%s",Wand);
	}
	        printf ("Drehung nach links um 90 Grad.\n\n");
	Wand[0] = ' ' ;
	while(c <= 6)
	{
	        printf ("Schritt %d\n", c);
	        reference(&c);
	}
	while (Wand[0] != 'y' && Wand[0] != 'Y' )
	{
	        printf ("Ist schon die Wand da?\n\n");
	        scanf("%s",Wand);
	}
	        printf ("Drehung nach links um 90 Grad.\n\n");
	Wand[0] = ' ' ;
	while(d <= 8)
	{
		printf ("Schritt %d\n", d);
		d++;
	}
	while (Wand[0] != 'y' && Wand[0] != 'Y' )
	{
	        printf ("Ist schon die Wand da?\n\n");
	        scanf("%s",Wand);
	}
	        printf ("Drehung nach links um 90 Grad.\n\n");
	Wand[0] = ' ' ;	
	while(e <= 4)
	{
	        printf ("Schritt %d\n", e);
	        e++;
	}
	while (Wand[0] != 'y' && Wand[0] != 'Y' )
	{
	        printf ("Ist schon die Wand da?\n\n");
	        scanf("%s",Wand);
	}
	        printf ("Drehung nach links um 90 Grad.\n\n");
	while (f <= 1)
	{
		printf("War das eine lange Runde! :D\n\n", f);
		f++;
		
	}
	Stuhl[0] = 'q';
	while (Stuhl[0] != 'y' && Stuhl[0] != 'Y')
	{
		printf("Ist der Stuhl da?\n\n");
		scanf("%s", Stuhl);
	}
		printf("Stuhl erreicht wieder hinsetzen!\n\n");

	return 0;

}

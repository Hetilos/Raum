#include <stdio.h>
#include <stdlib.h>

int main()
{
	int start;
	int a = 1;
	int b = 1;
	int c = 1;
	int d = 1;
	int e = 1;
	int f = 1;
	
	char aufstehen [2];
	char WandA[2];
	char WandB[3];
	char WandC[4];
	char WandD[5];
	char WandE[6];
	char Stuhl[0];
	
/*	while(start != 11)
	{
	printf("Start Programm\n");
	scanf("%d", &start);

		if(start = 10 )
		{
		
			printf("Initalisiere Programm! \n\n");
			printf("Guten Tag wir beginnen in Kuerze!\n\n");
			break;	
		}
		else if (start = 11 )
		{
			printf("Bitte Vorgang wiederholen!\n\n");
			break;
		}
		else
		{
			printf("Error 404-- Bitte wenden Sie sich an den Administrator!\n\n");
			return 0;
		}
	}
*/	
	while(aufstehen[0] != 'y' && aufstehen[0] != 'Y')
	{
		
		printf("Aufstehen bitte!\n\n");
		scanf("%s", aufstehen);
	}

	while (a <= 2)
	{
		printf("Schritt %d\n", a);
		a++; 
	}		
	while (WandA[0] != 'y' && WandA[0] != 'Y')
	{
		printf ("Ist schon die Wand da?\n\n");
		scanf("%s",WandA);
	}
		printf ("Drehung nach links um 90 Grad.\n\n");
	
	while(b <= 8)
	{
		printf ("Schritt %d\n", b);
		b++;
	}
	while (WandB[0] != 'y' && WandB[0] != 'Y' )
	{
		printf ("Ist schon die Wand da?\n\n");
		scanf("%s",WandB);
	}
	        printf ("Drehung nach links um 90 Grad.\n\n");
	
	while(c <= 6)
	{
	        printf ("Schritt %d\n", c);
	        c++;
	}
	while (WandC[0] != 'y' && WandC[0] != 'Y' )
	{
	        printf ("Ist schon die Wand da?\n\n");
	        scanf("%s",WandC);
	}
	        printf ("Drehung nach links um 90 Grad.\n\n");
	
	while(d <= 8)
	{
		printf ("Schritt %d\n", d);
		d++;
	}
	while (WandD[0] != 'y' && WandD[0] != 'Y' )
	{
	        printf ("Ist schon die Wand da?\n\n");
	        scanf("%s",WandD);
	}
	        printf ("Drehung nach links um 90 Grad.\n\n");
	
	while(e <= 4)
	{
	        printf ("Schritt %d\n", e);
	        e++;
	}
	while (WandE[0] != 'y' && WandE[0] != 'Y' )
	{
	        printf ("Ist schon die Wand da?\n\n");
	        scanf("%s",WandE);
	}
	        printf ("Drehung nach links um 90 Grad.\n\n");

	while (f <= 1)
	{
		printf("War das eine lange Runde! :D\n\n", f);
		f++;
		
	}
	while (Stuhl[0] != 'y' && Stuhl[0] != 'Y');
	{
		printf("Ist der Stuhl da?\n\n");
		scanf ("%s", Stuhl);
	}
		printf("Stuhl erreicht wieder hinsetzen!\n\n");
	

	
	return 0;

}

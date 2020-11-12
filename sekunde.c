#include <stdio.h>

void main ()
{
     int broj, h, min, sec;


     printf("\nUpisite sekunde: ");
     scanf("%d", &broj);

     h = broj / 3600;
     min = (broj % 3600) / 60;
     sec = (broj % 3600) % 60;

     printf ("\n%d sekundi iznosi: ", broj);
	 printf ("\n%d sat, %d minute i %d sekunde", h, min, sec);

    getch();

     return;
}
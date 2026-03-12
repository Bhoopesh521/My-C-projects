#include <stdio.h>
main ()
{
	printf("meter\t Km \n");
	int meter ;
	int Km ;
	meter = 0;
	while (meter <= 10000000) {
		Km = meter/1000;
		printf("%d \t %d \n", meter,Km);
		meter = meter + 1000;
	}
}
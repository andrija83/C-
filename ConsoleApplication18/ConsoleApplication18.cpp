
#include "stdafx.h"
#include "stdio.h" 
#include "time.h"
#include "stdlib.h"
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

void main() 
{ 
	int x, y;


	printf("Zadajte x kordinatu (od -3 do 3 ) : ");
	scanf_s("%d", &x);

	printf("Zadajte y kordinatu (od -3 do 3 ) : ");
	scanf_s("%d", &y);

	if (x > 0 && x <4 && y > 0 && y < 4)
	{
		printf("nalazite se u oblasti I \n");
	}
	else if (x >0 && x <4 && y>-4 && y <0)
	{
		printf("nalazite se u oblasti II \n");
	}
	else if (x < 0 && x > -4 &&  y < 0  && y>-4)
	{
		printf("nalazite se u oblasti III \n");
	}
	else if (x < 0 && x > -4 &&  y > 0 && y <4)
	{
		printf("nalazite se u oblasti IV \n");
	}
	else
	{
		printf("ne pripadate nigde :( ");
	}
	


	printf("kordinate koje ste upisali su x=%d i y=%d \n", x,y);
	

}
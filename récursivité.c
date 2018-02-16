/*
 ============================================================================
 Name        : récursivité.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fact_rec(int x)
{
	if(x==0 || x==1)return 1;
	else
	{
		return x*fact_rec(x-1);
	}

}

int fact_it(int x)
{
	int s,i;
	s=1;
if (x==0 || x==1) return 1;
else
{
	for(i=1;i<=x;i++)
		s=s*i;

}
return s;

}


int main(void) {
	int x;
	puts("donner x\n");scanf("%d",&x);
	printf("%d\n",fact_rec(x));
	printf("%d",fact_it(x));
	return 0;
}

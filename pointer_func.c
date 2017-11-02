#include<stdio.h>
int max1(int a, int b)
{
	return a>b?a:b;
}

int *max2(int *p1, int *p2){
	return *p1>*p2?p1:p2;
}

int main()
{
	int a = 1919;
	int b = 100;
	int c = max1(a,b);
	printf("max1 return %d\n", c);
	int *d = max2(&a, &b);
	printf("max2 return %d\n", *d);	
}

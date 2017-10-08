#include <stdlib.h>
#include <stdio.h>

#include "max.h"
#include "min.h"

int main(){
	int a,b;
	printf("please input 2 int number: ");
	scanf("%d %d",&a,&b);
	printf("max(%d,%d) = %d\n",a,b,max(a,b));
	printf("min(%d,%d) = %d\n",a,b,min(a,b));
	return 0;
}

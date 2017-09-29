#include <stdio.h>

int main()
{
	int flag = 1;
	int sum = 0;
	int count = 0;
	int i;
	while(flag){
		scanf("%d",&i);
		if(i==0) 
			break;
		sum += i;
		count++;
	}
	printf("%d %d",count,sum);
	return 0;
}

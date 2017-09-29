#include <stdio.h>

int main()
{
	int count,sum;
	float avg;
	scanf("%d %d",&count,&sum);
	if(count!=0){
		avg = sum/count;
		printf("The average is: %f\n",avg);
		return 0;
	}else{
		printf("sum != 0\n");
		return 1;
	}
}

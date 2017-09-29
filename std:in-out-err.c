#include <stdio.h>
/*
	linux regard any outside device as file , when open the device , linux will create 3 files automatically 
	stdin
	stdout
	stderr
*/

int main()
{	
	int a;
	//scanf("please input a int number:\n");
	fprintf(stdout,"please input a int number:\n");
	//scanf("%d",&a);
	fscanf(stdin,"%d",&a);
	if(a<0){
		fprintf(stderr,"the number is not proper .\n");
		return 1;
	}
	return 0;
}

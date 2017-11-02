#include<stdio.h>
void exchange(int *a, int *b);

void exchange(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){
	int a = 100;
	int b = 450;
	exchange(&a,&b);
	printf("a=%d,b=%d\n",a,b);	
	return 0;
}

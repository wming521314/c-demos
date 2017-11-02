#include <stdio.h>
int main(){
	int a = 9; // 00001001
	int b = 5;
	a = a^b;
	b = a^b;
	a = a^b;
	printf("%d\n%d\n",a,b);	
	return 0;
}

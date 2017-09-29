#include <stdlib.h>
#include <stdio.h>

/*
	argc is the mumber of arguments on commend line
	argv is a string array , record  the value of argvments.

*/

int main(int argc, char *argv [])
{
	printf("argc = %d\n",argc);
	int i;
	for(i=0;i<argc;i++){
		printf("argv[%d] = %s\n",i,argv[i]);
	}
	return 0;
}


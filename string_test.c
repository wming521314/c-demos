#include <string.h>
int main(){
	char * str = "abc";
	printf("str = %s\n",str);//abc
	printf("*str = %p\n",str);
	char str1 [] = {'a','b','c'};
	printf("str len = %d\n",strlen(str));//3
	printf("str1 len = %d\n",strlen(str1));//3
	printf("char size = %d\n",sizeof(char));//1
	
	char  str2 [100] = "abcdefg";
	printf("str2  = %s\n",str2);//abcdefg
	printf("str2 len = %d\n",strlen(str2));//7
	
	char *str_arr []={"hahhahashfklhkjhkjhkjhkhkjh","lalal","hieoo"};
	printf("length of str_arr:%d\n",sizeof(str_arr)/sizeof(str_arr[0]));//3
	printf("length of str[0]:%d \n",sizeof(str_arr[0]));//8
	printf("length of str[1]:%d \n",sizeof(str_arr[1]));//8
	printf("length of str[2]:%d \n",sizeof(str_arr[2]));//8
	printf("length of *str[0]:%d \n",sizeof(*str_arr[0]));//1
	int i;
	for(i=0;i<3;i++){
		printf("%s\n",str_arr[i]);
	}
}

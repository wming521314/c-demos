#include <stdio.h>
#include <string.h>
void test1()
{
	char * str = "abc";
	printf("str = %s\n",str);//abc
	printf("*str = %p\n",str);
	char str1 [] = {'a','b','c'};
	printf("str len = %lu\n",strlen(str));//3
	printf("str1 len = %lu\n",strlen(str1));//3
	printf("char size = %lu\n",sizeof(char));//1
	
	char  str2 [100] = "abcdefg";
	printf("str2  = %s\n",str2);//abcdefg
	printf("str2 len = %lu\n",strlen(str2));//7
	
	char *str_arr []={"hahhahashfklhkjhkjhkjhkhkjh","lalal","hieoo"};
	printf("length of str_arr:%lu\n",sizeof(str_arr)/sizeof(str_arr[0]));//3
	printf("length of str[0]:%lu\n",sizeof(str_arr[0]));//8
	printf("length of str[1]:%lu\n",sizeof(str_arr[1]));//8
	printf("length of str[2]:%lu\n",sizeof(str_arr[2]));//8
	printf("length of *str[0]:%lu\n",sizeof(*str_arr[0]));//1
	int i;
	for(i=0;i<3;i++){
		printf("%s\n",str_arr[i]);
	}
}

void test2()
{
	printf("%s\n","abcde");
	printf("%p\n","abcde"); //string pointer is the first char pointer 
	printf("%c\n",*"abcde");
	//*"abcdef" = "z"; //string pointer cannot be revised
	
	char * a = "hello";
	printf("strlen(a) = %lu , sizeof(a) = %lu , sizeof(*a)=%lu\n", strlen(a), sizeof(a), sizeof(*a));
	char str_arr [] = "abcdef";
	printf("strlen(str_arr) = %lu , sizeof(str_arr) = %lu\n", strlen(str_arr), sizeof(str_arr)); //sizeof include \0 , strlen not : only include validate char
}

void str_opr()
{
	char str [] = "abcdef";
	char buf[] = "abc";
	printf("strlen(str) = %lu\n",strlen(str));
	printf("strcat(buf,str) = %s\n",strcat(buf, str));//not recommend , unsafe may error : index out of range
	printf("strncat(buf,str,2) = %s\n",strncat(buf,str,2));
	printf("strcpy(buf,str) = %s\n",strcpy(buf,str));
	printf("strncpy(buf,str,2) = %s\n",strncpy(buf,str,2));
	printf("strcmp(abcd,abcf) = %d\n", strcmp("abcd","abcf"));
	printf("strncmp(abcd,abcf) = %d\n", strncmp("abcd","abcf",3));
}

void str_rw()
{
	//char str [20] = {};//you must declare size , otherwise error segment fault
	//printf("please input words :");
	//scanf("%s",str);
	//scanf read from keyboard is unsafe : it will leave char behind space , at the same time , when input words out of size , it will raise core dumps 	
	//printf("I got your words : %s\n",str);
	
	//fgets is safe
	char buf[10] = {};
	printf("please input string :");
	//gets(buf);
	fgets(buf,10,stdin);
	//fflush(stdin);
	printf("strlen(buf) = %lu\n",strlen(buf));
	int len = strlen(buf);	
	if(len==sizeof(buf)-1){
		buf[len]='\0'; //remove enter char , if len not reach buf size
	}else if(len<sizeof(buf)-1){
		buf[len-1] = '\0';
	}
	printf("fgets got words :%s\n",buf);
}


int main(){
	//test1();
	//test2();
	//str_opr();
	str_rw();
}

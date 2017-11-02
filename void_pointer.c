#include<stdio.h>
void switch_force_test();//void*强制类型转换
void recv_unknown_data(void *p,int type_num);//接收来历不明(数据类型不知道)的数据

void switch_force_test()
{

	char a = 'f';
	void *p = &a;
	printf("%c\n",*(char*)p);//%c需要的是指针所指向的内容
	int b = 7896;
	p = &b;
	printf("%d\n",*(int*)p);//%d需要的是指针所指向的内容
	
	char * str = "akjkljalkllalla";
	printf("%s\n",str);//%s需要的是指针
}
void recv_unknown_data(void *p, int type_num)
{
	if(type_num == 0){
		printf("*p的值是%d\n",*(int*)p);
	}else if(type_num == 1){
		printf("*p的值是c%\n",*(char*)p);
	}else{
		printf("*p的值是%f\n",*(float*)p);
	}
}

int main()
{
	//switch_force_test();

	int a = 999;
	char c = 'k';
	float f = 54878.365f;
	recv_unknown_data(&a,0);
	recv_unknown_data(&c,1);
	recv_unknown_data(&f,2);
	return 0;
}

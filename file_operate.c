#include<stdio.h>
//文件啊操作的相关标准函数
//1.fopen(char *path, char *mode):打开一个文件
//2.fclose:关闭文件
//3.fread/fwrite:向文件读写数据

int main()
{
	FILE *p_file = fopen("test.txt","w");//如果没有会自动创建
	if(!p_file){
		printf("文件打开失败");
		return 0;
	}
	int arr [] = {1,2,3};
	fwrite(arr,sizeof(int),2,p_file);
	fclose(p_file);
	p_file = NULL;
	return 0;
}

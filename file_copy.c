#include<stdio.h>
#include<string.h>
int main()
{
	char buf[128] = {0};//每次读，写的字节数
	int size = 0;	
	FILE *p_src = fopen("abc.txt","rb");
	if(!p_src){
		printf("文件打开失败");
		return 0;
	}
	FILE *p_dest = fopen("des.txt","wb");
	if(!p_dest){
		printf("目的文件打开失败");
		return 0;
	}
	while(size = fread(buf,sizeof(char),sizeof(buf),p_src)){
	//注意第二个sizeof：防止读写不足或者超范围
		printf("%s\n",buf);
		fwrite(buf,sizeof(char),size,p_dest);
		memset(buf, 0, sizeof(buf));//清空缓冲区
	}
	fclose(p_src);
	p_src = NULL;
	fclose(p_dest);
	p_dest = NULL;
	return 0;
}

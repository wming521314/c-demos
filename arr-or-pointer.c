#include <stdio.h>

int a[10] = {1, 3, 4};
 

void print_arr_addr(int *p)
{
	printf("p=%d\n",p);
    printf("&p    = 0x%08x.\n", (unsigned)&p);
    printf("&p[0] = 0x%08x.\n", (unsigned)&p[0]);
}

void print_arr_addr1(int p [])//结果同print_arr_addr
{
	printf("p=%d\n",p);
    printf("&p    = 0x%08x.\n", (unsigned)&p);
    printf("&p[0] = 0x%08x.\n", (unsigned)&p[0]);
}

void print_g_arr_addr(int *p)
{
    printf("&p    = 0x%08x.\n", (unsigned)&p);//这里p作为一个指针它指向的内容是第一个元素的地址（是一个指针的指针）
    printf("&a    = 0x%08x.\n", (unsigned)&a);
    if(&a==p){
        printf("p不是指向数组的指针，而是数组指针的指针\n");
    }

    printf("&p[0] = 0x%08x.\n", (unsigned)&p[0]);  
    printf("&a[0] = 0x%08x.\n", (unsigned)&a[0]);
}

int main()
{
    print_arr_addr(a);
    print_arr_addr1(a);

    print_g_arr_addr(a);
    return 0;
}

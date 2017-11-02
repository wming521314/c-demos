#include <stdio.h>
//指针只能做加减运算:且一般只能是，指针+整数，指针-整数（很容易预见的问题是，加减得出的地址我们是不知道指向什么内容的，所以无法知晓运算后的指针的类型）
int main(){
	int a = 1111;
	int b = 2222;
	int *pa = &a;
	int *pb = &b;
	printf("a地址为：%p\n",&a);
	printf("b地址为：%p\n",&b);
	
	int *pa1 = pa++;	
	printf("pa++的值为：%p\n",pa1);
	printf("pa++所指向的值为：%d\n",*pa1);//得到值就是b的值，由此可以看出连续声明的a,b的地址是连续的
	
	int *p1 = pa + 100;
	printf("pa+100的值为：%p\n",p1);
	printf("pa+100所指向的值为：%d\n",*p1);
	
	
	int *p2 = pb - pa;
	printf("sizeof(pa-pb)=%d\n",sizeof(p2));//return unsigned long
	printf("pb-pa=%p\n", p2);
	printf("*(pb-pa)=%d\n",*p2);
	
	//int *p3 = pa + pb;	
	//printf("pa+pb=%p\n"，p3);
	//printf("*(pa+pb)=%p\n", *p3);
	return 0;
}

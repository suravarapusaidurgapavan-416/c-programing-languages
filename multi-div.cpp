#include<stdio.h>
int main (){
	int a,b,c,d;
	printf("enter first number\n");
	scanf("%d",&a);
	printf("enter second number\n");
	scanf("%d",&b);
	/*printf("enter 2 numbers\n");
	scanf("%d%d,&a,&b");*/
	c=a*b;
	d=a/b;
	printf("multiplication of two numbers is:%d\n",c);
	printf("division of two numbers is:%d",d);
	return 0;
}

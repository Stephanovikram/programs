#include <stdio.h>
#include <conio.h>
int fibo(int);
{
	int b,i;
	printf("\n enter the limit of series");
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
		printf("%d\t",fibo(i));
	}
	printf("\n");
	return 0;
}
int fibo(int n)
{
	if(n==0||n==1)
	return n;
	else
	return(fibo(n-1)+fibo(n-2));
}
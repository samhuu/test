#include <stdio.h> 
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	a[1]=1;
	a[2]=1;
	for (int i=3;i<n+1;i++)
	{
	 a[i]=a[i-1]+a[i-2];
	}
	printf("%d",a[n]);
}

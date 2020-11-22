#include<stdio.h>
#include<string.h>
 
void swap(int *p, int *q)
{
	int m;
	m = *p;
	*p = *q;
	*q = m;
}
 
void sort(int s[], int n)
{
	int i,j,flag=1;
	int ch;
	for(i=0; i<n-1 && flag ==1; i++)
	{
		flag=0;
		for(j=0; j<n-i-1; j++)
		{
			if(s[j] > s[j+1])
			{
				ch = s[j];
				s[j] = s[j+1];
				s[j+1] = ch;
				flag = 1;
			}
		}
	}
 
}
 
int main()
{
	int s[10];
    int len, i, j;
	scanf("%d",&len);
	for (i=0;i<len;i++)
	{
		s[i]=i+1;
	}
	sort(s,len);
	while(1)
	{
		printf("%d\n",s);
		for(i=len-2;i>=0 && s[i]>=s[i+1]; i--)
		{
		}
		if(i<0)
			break;
		for(j=len-1;i<j && s[j]<=s[i];j--)
		{
		}
		
		swap(&s[i], &s[j]);
		i++;
		j=len-1;
		while(i<j)
		{
			swap(&s[i++], &s[j--]);
		}
		
	}
	return 0;
	
}

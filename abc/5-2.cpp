#include<stdio.h>
#include<malloc.h> 
#include <stdlib.h> 
int judge(int n,int m)
{
    int matrix[n][m];
    for(int p=0;p<n;p++)
    for(int q=0;q<m;q++)
    	scanf("%d",&matrix[p][q]);
		
    int i,j,end=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if( i == j && (matrix[i][j]) != 1 )  {
				end=1;
			}
			else if( i != j && (matrix[i][j]) !=0 ) {
				end=1;
			};
		}
	}
	if (end==1)
		printf("NO");
    if (end==0)
        	printf("YES");
	
}
int main()
{
	int n,m;
	
	scanf("%d %d\n",&n,&m);
	if(n!=m)
	{
	printf("NO");
	exit(0);
    }
	judge(n,m);
}

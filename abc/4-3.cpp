#include <stdio.h>
int recurbinary( int *a, int key, int n )
{
    int left = 0; int right = n - 1 ;int mid;
	if (key>a[n-2]&&key<a[n-1])
    return n-1;
    else
    if(key<a[0])
    return 0;
    else

    mid = left + (right - left) / 2;
    int time=0; 
    while( left < right &&time<25 )
    {
        if( a[mid] < key ) 
		{
            left = mid+1;
        }
		else if( a[mid] > key )
		{
            right = mid;
        }
        mid = ( left + right ) / 2;
		time++;    
    }	
	
	if( a[mid-1] <key&&a[mid]>=key )	
	return mid;
}





int main() 
{
	int n,m;
	scanf("%d %d",&n,&m);
	getchar();
    int a[n];
	int i,j;
	int f[m];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);	

	int sub;
	for(i=0;i<m;i++)
	{
	    scanf("%d",&sub);
	    getchar();
	    f[i]=recurbinary(a,sub,n);
	        
		}
	for (i=0;i<m;i++)
	printf("%d\n",f[i]);
	}
	
	
	
	
	
	


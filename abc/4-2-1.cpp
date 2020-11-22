#include<stdio.h>
void print(int a[],int n,int cur)
{
    int i,j;
    if(cur==n)  
    {
       for(i=0;i<n;i++)
       
       printf("%d ",a[i]);
       printf("\n");
    }
    else
    {
       for(j=1;j<=n;j++)
       {
           int ok=1;  
           for(i=0;i<cur;i++)
           {
              if(a[i]==j)
                ok=0;
           } 
           if(ok)
           {
              a[cur]=j;
              print(a,n,cur+1);  
           } 
       }  
    } 
}

int main()
{
    int a[10];
    int n;
    scanf("%d",&n);
    
      print(a,n,0);
    
  return 0;
}

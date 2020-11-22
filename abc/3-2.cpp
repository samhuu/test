#include "stdio.h"
int main()

{int n,m,i,j,p,q,x,y,c;
 
 scanf("%d%d" ,&n,&m);
 int a[n],b[n];
 char order;
 for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   getchar();
 for(p=0;p<m;p++)
 {
 scanf("%c",&order);
   switch(order)
 {
 case 'S': scanf("%d",&x);
 getchar();
 	for(q=0;q<n;q++)
 	a[q]=a[q]+x;
 	break;
 case'M': scanf("%d",&x);
 getchar();
    for(q=0;q<n;q++)
 	a[q]=a[q]*x;
 	break;
 case'D': scanf("%d",&x);
 getchar();
    for(q=0;q<n;q++)
 	a[q]=a[q]/x;
 	break;
case'R': getchar();
for (x=0;x<n;x++)
       b[n-1-x]=a[x];
       for (x=0;x<n;x++)
       a[x]=b[x];
       break;
  case'P':scanf("%d%d",&x,&y);
  getchar();
      j=a[x];
      a[x]=a[y];
      a[y]=j;
      break;
       
 }

 
 
   

 }  
 for(i=0;i<n;i++)
	printf("%d ",a[i]);

}

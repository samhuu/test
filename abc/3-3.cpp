
#include <stdio.h>
#include <stdlib.h>
int main()
{
     int n,m,x,y,i,j;
    scanf("%d%d",&n,&m);
    getchar();
	 char a[n][m];
    for(i=0;i<n;i++)
    {for(j=0;j<m;j++)
    scanf("%c\n",&a[i][j]);
   ;
    
    }
    for(i=0;i<n;i++)
    	for(j=0;j<m;j++)
		{ 
    		if (a[i][j]=='S')
    		{
				x=i;
    			y=j;
    			break; 
			}
    	} 
    char t[100],k;

   while(scanf("\n%c",&k) != EOF)
   {
   	switch(k){
   		case 'E':{
		   if((y+1<m)&&(a[x][y+1]=='.'))
            {
                char u;
                u=a[x][y];
                a[x][y]=a[x][y+1];
                a[x][y+1]=u;
				y=y+1;
            }
           
            break;
        }


        case 'W':{
            if((y-1>=0)&&(a[x][y-1]=='.'))
            {
                char u;
                u=a[x][y];
                a[x][y]=a[x][y-1];
                a[x][y-1]=u;
				y=y-1;
            }
            
            break;
        }

        case 'N':{
            if((x-1>=0)&&(a[x-1][y]=='.'))
            {
                char u;
                u=a[x][y];
                a[x][y]=a[x-1][y];
                a[x-1][y]=u; 
				x=x-1;
            }
           
            break;
        }

		case 'S':{
            if((x+1<n)&&(a[x+1][y]=='.'))
        	{
                char u;
                u=a[x][y];
                a[x][y]=a[x+1][y];
                a[x+1][y]=u;
				x=x+1;
            }
            
            break;
        }
   		default: printf("A");
	   }
   		for(i=0;i<n;i++)
   		{
   			for(j=0;j<m;j++)
        	    printf("%c",a[i][j]);
       		printf("\n");
    	}			
	}
}

    
   

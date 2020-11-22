    #include"iostream"
    #include"stdio.h"
    using namespace std;
    int main()
    {
      int a[100],b[100],n,k,i,j,t;
      for (i=0;i<100;i++) b[i]=i+1;
      cin>>n>>k;
      for (i=0;i<n;i++) cin>>a[i];
      for (i=0;i<n-1;i++)
       for (j=i;j<n;j++)
       {
		   
           if (a[i]>a[j])
           {
               t=a[i];
               a[i]=a[j];
               a[j]=t;
               t=b[i];
               b[i]=b[j];
               b[j]=t;
           }
        } 
        i=0;　　　　　 
      cout<<i-1<<endl; 
	  for (j=0;j<i-1;j++)
	   cout<<b[j]<<endl;
    }

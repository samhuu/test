

#include"iostream"
#include"stdio.h"
using namespace std;
int main()
{   
    int n;
    cin>>n;   
	string player[n],u;
	int score[n];
	int k[n],t[n],i,sss,s1,j;
	for(i=0;i<n;i++)
	{
		k[i]=1;
		t[i]=i;
		cin>>player[i];
		cin>>score[i]; 
	}
	sss=0;
	s1=n+5;
    for(i=0;i<n;i++)
	{
	  if (k[i]==1)
	  for (j=i+1;j<n;j++)
	  {
	  	if (player[j]==player[i])
	  	{
	  		k[j]=0;
	  		t[i]=j;
	  		score[i]=score[i]+score[j];
	    }
	  }	
	}
	for(i=0;i<n;i++)
	{
	  if (score[i]>=sss&&k[i]==1){
	  	if (score[i]>sss)
		{
	  	u=player[i];
	  	sss=score[i];
	  	s1=t[i];
	    } else if (t[i]<s1)
	    {
	  	u=player[i];
	  	sss=score[i];
	  	s1=t[i];
	    }
		}
	}
	cout<<u;
}

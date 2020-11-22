#include <iostream>
 #include <string> 
#include<string.h>
 using namespace std;
  int main() 
{  int i; 
   int max_len=0,q,e;
   int p,blank; 
   string str[1000];
   for(i=0;i<1000;i++)
   {
      getline(cin,str[i]);
      if(strlen(str[i].c_str())>max_len)
      max_len=strlen(str[i].c_str());
      if (strlen(str[i].c_str())==0)
	  {
	    i--;
	    break;
      }
   }
   for(p=0;p<(max_len+2);p++)
   cout<<"*";
   cout<<endl;
   for(p=0;p<=i;p++)
   {cout<<"*";
    blank=0.5*(max_len-strlen(str[p].c_str()));
    if(blank>(max_len-blank-strlen(str[p].c_str())))
	blank=(max_len-blank-strlen(str[p].c_str()));
   	for(q=0;q<blank;q++) 
   	cout<<" ";
   	cout<<str[p];
   	for(q=0;q<(max_len-blank-strlen(str[p].c_str()));q++) 
   	cout<<" ";
   	cout<<"*"<<endl;
   }
   for(p=0;p<(max_len+2);p++)
   cout<<"*";
   cout<<endl;
}


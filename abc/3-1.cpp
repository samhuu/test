#include "stdio.h"

int main(){

int a,b,n1,n2,t;

scanf("%d%d",&n1,&n2);

if(n1<n2)

{

t = n1;

n1 = n2;

n2 = t;

}

a = n1;

b = n2;

while(b!=0){ 

t = a%b;

a=b;

b=t;

}

printf("%d\n",a);

printf("%d\n\n",n1*n2/a);

}


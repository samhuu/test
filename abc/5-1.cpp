#include<stdio.h>
#include<malloc.h>
int main(void)
 { 
	int n; 
	scanf("%d\n",&n);
	char *str=(char *)malloc(n * sizeof(char));
	int i;
   	for(i=0;i<n;i++){
		scanf("%c",(str+i));
	}

    int p=0;
    int l=32;
    char space=(char)l;
    for(i=0;i<n;i++)
    {
    	if (*(str+i)==space)
    	p++;
	};

	if(p==0)
     	printf("NO\n");
	else
		printf("YES\n");
	free(str);
		
}


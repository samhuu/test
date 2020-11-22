    # include <stdio.h>
    #include <string.h>
    int main(void)
    {
        char str[1000]; 

        scanf("%s", str);  
        int i,l=0;
        l=strlen(str);
        
        for(i=l/2-1;i>=0;i--)
        printf("%c",str[i]);
		for(i=l-1;i>=l/2;i--)
        printf("%c",str[i]);
		return 0;
        
    }

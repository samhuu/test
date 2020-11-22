#include<stdio.h>
#include<string.h>
int FormatCheck(char *);
char * SplitByAt(char * ,int);
char * CharsCheck(char *);
#define N 1024
int main()
{
    char str[N],*field;
    memset(str,0x00,N);
    scanf("%s",str);
    field=SplitByAt(str,N);
    if(field==NULL)
    {
        printf("NO\n");
        return -1;
    }
    else if(FormatCheck(str)&&FormatCheck(field))
    {
        printf("YES\n");
        return 0;
    }
    else
    {
        printf("NO\n");
        return -1;
    }
}
/**
 *校验域名/邮箱格式
 */
 int FormatCheck(char *str)
 {
     char *p;
     for(;;)
     {
         p=CharsCheck(str);
         if(p==str)
         {
             return 0;
         }
         else if(*p=='\0')
         {
             return 1;
         }
         else if(*p!='.')
         {
             return 0;
         }
         p++;
         str=p;
     }
 }       
/**
 *校验是否可用@分割为两段,返回域名首地址,不合要求返回NULL
 *参数:str,源字符串,length,长度限制(防越界)
 *函数会用'\0'代替源字符串第一个'@',已完成邮箱,域名分割.
 */
char *SplitByAt(char *str,int length)
{
    char *p=strchr(str,'@');
    if(p!=NULL&&(p-str)<length)
    {
        *p=0;
        p++;
        return p;
    }
    return NULL;
}
/**
 *校验str是否为连续的'a'-'z','A'-'Z','0'-'9'字符
 *返回值:第一个不合要求的字符所处位置
 *例如:str="abc",返回str+3; str="a#bc",返回str+1;
 */
char * CharsCheck(char *str)
{
    while((*str>='a'&&*str<='z')||
        (*str>='A'&&*str<='Z')||
        (*str>='0'&&*str<='9')||
         *str=='_')
    {
        str++;
    }
    return str;
}

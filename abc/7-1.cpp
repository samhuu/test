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
 *У������/�����ʽ
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
 *У���Ƿ����@�ָ�Ϊ����,���������׵�ַ,����Ҫ�󷵻�NULL
 *����:str,Դ�ַ���,length,��������(��Խ��)
 *��������'\0'����Դ�ַ�����һ��'@',���������,�����ָ�.
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
 *У��str�Ƿ�Ϊ������'a'-'z','A'-'Z','0'-'9'�ַ�
 *����ֵ:��һ������Ҫ����ַ�����λ��
 *����:str="abc",����str+3; str="a#bc",����str+1;
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

#include "header.h"


int strstr_l(const char *string, const char* substring)
{
    int i,j;
    for (i = 0; i < strlen(string); i++)
    {
        j = 0;
        if (string[i] == substring[j])
        {
            for (j = 0; j < strlen(substring); j++)
            {
                if (string[i++] != substring[j])
                    break;
            }
            if (j == strlen(substring))
                return i - j;
        }
    }
    return 0;
}

int strstr_2(char *string,char *substring)     
{    
    int len1=strlen(string);    
    int len2=strlen(substring);    
    int i, j;
    for (i=0; i<=len1-len2; i++)
    {    
        for (j=0; j<len2; j++)    
        {    
            if (string[i+j]!=substring[j])    
                break;    
            if (j==len2-1)    
                return i;    
        }  
    }    
    return 0;    
}     


int main()
{
    char *string = "abcdefghijkcdefk";
    char *sub = "cdefk";
    int i = strstr_l(string, sub);
    printf("str: %s\nsub: %s\nret_l %d\nret_2 %d\n", string, sub, i, strstr_2(string, sub));
}

#include "header.h"

int str2int(const char* str)
{
    int sign = 1;
    int start = 0;
    int j = 0;
    int num = 0;
    if (str[0] == '+')
    {
        start = 1;
    }
    else if (str[0] == '-')
    {
        sign = -1;
        start = 1;
    }
    for (j = start; j < strlen(str); j++)
    {
        if (str[j] <= '9' && str[j] >= '0')
        {
            num = num * 10 + str[j] - '0';
        }
    }
    return num * sign;
}

char* strcpy_2(char *dst, const char *src)
{
    if (dst != NULL && src != NULL)
    {
        while ((*dst++ = *src++) != '\0');
        return dst;
    }
    return NULL;
}


int main()
{
    char input[256];
    printf("Please input the number:");
    scanf("%s", input);
    printf("input string is %s, convert int is %d\n", input, str2int(input));
}

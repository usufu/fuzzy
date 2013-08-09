#include "header.h"

typedef enum {false, true} bool;

bool string_contain_2(const char* ls, const char* ss)
{
    char hash[26] = {0};
    int i = 0;
    int num = 0;
    int index = 0;
    for (i = 0; i < strlen(ss); i++)
    {
        index = ss[i] - 'A';
        if (hash[index] == 0)
        {
            hash[index]++;
            num++; // only count the number of character once, even there are show up twice or more.
        }
    }

    for (i = 0; i < strlen(ls); i++)
    {
        index = ls[i] - 'A';
        if (hash[index] == 1)
        {
            hash[index]--;
            num--;
        }
        if (num == 0)
            break;
    }
    if (num == 0)
    {
        return true;
    }
    return false; 
}


bool string_contain(const char* ls, const char* ss)
{
    char hashtable[26] = {0};
    int i = 0;
    int index = 0;
    for (i = 0; i < strlen(ls); i ++)
    {
       index = ls[i] - 'A';
       hashtable[index]++;
    }
    for (i = 0; i < strlen(ss); i ++) 
    {
        index = ss[i] - 'A';
        if (hashtable[index] == 0)
        {
            printf("%c NOT FIND in target string %s!\n", ss[i], ls);
            return false;
        }
    }
    return true;
}

int main(int argc, char* argv)
{
    char *ls = "ABCDEFHHIEGH";
    char *ss = "DDIHM";
    if (string_contain(ls, ss))
    {
        printf("%s contain %s!\n", ls, ss);
    }
    else
    {
        printf("%s NOT contain %s!\n", ls, ss);
    }
    if (string_contain_2(ls, ss))
    {
        printf("%s contain %s!\n", ls, ss);
    }
    else
    {
        printf("%s NOT contain %s!\n", ls, ss);
    }

}

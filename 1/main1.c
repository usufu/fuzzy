#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *input, int start, int end)
{
    while(start < end)
    {
        int temp = input[end];
        input[end] = input[start];
        input[start] = temp;
        start ++;
        end --;
    }
}




void move_left(char *input_string, int num_move)
{
    int len = strlen(input_string);
    num_move = num_move % len;
    
    reverse(input_string, 0, num_move - 1);
    reverse(input_string, num_move, len - 1);
    reverse(input_string, 0, len - 1);
    
}

int main(int argc, char* argv[])
{
    char input_string[256] = {'\0'};
    char * result;
    int  num_move;
    printf("Please input your string:");
    scanf("%s", input_string);
    printf("Please input the number you want to move leftward:");
    scanf("%d", &num_move);
    printf("Your input is \"%s\", move index is %d\n", input_string, num_move);
    move_left(input_string, num_move);
    printf("Result is: %s\n", input_string);
    return 0;
}

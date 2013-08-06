#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* move_left(char input_string[], int num_move)
{
    char * back_string = input_string;
    int length = strlen(input_string);
    input_string += num_move;
    strcat(input_string, back_string);
    input_string[length]='\0';
    printf("Result is: %s\n", input_string);
    return input_string;
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
    result = move_left(input_string, num_move);
    printf("Result is: %s\n", result);
    return 0;
}

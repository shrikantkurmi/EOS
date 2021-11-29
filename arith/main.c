#include<stdio.h>

int main(int argc, char const *argv[])
{
    int result = 0;

    result = add(20,30);
    printf("Addition:%d\n",result);

    result = sub(20,30);
    printf("subtraction:%d\n",result);
    return 0;
}
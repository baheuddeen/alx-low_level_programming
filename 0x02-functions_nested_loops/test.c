#include<stdio.h>

int main(void)
{
    int pos = 16 >> 3; //0b1000
    int neg = -1;

    printf("size of int %li bits \n", sizeof(int)*8);
    printf("num1: %d \nnum2: %d\n", pos, neg);
}

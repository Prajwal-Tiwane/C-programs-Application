#include<stdio.h>

int main()
{
    int const arr[3]={1,2,3};
    int const * const p = arr;

    printf("%d\n",(arr));
    printf("%d\n",&arr);

    return 0;
}
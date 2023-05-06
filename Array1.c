#include<stdio.h>

int main()
{
    int Arr[] = {10,20,30,40,};
    int *p = Arr;
    int *q = Arr+1;
    int ans = *q - *p;

    printf("%d",Arr+1);        // 10


    return 0;
}
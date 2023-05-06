#include<stdio.h>

int main()
{
    int no1=11, no2=21, no3=51;
    int* arr[]={&no1,&no2,&no3};

    // Accessing the values of no1, no2, and no3 using the array
    int val1 = *(arr[0]); // val1 will be 11
    int val2 = *(arr[1]); // val2 will be 21
    int val3 = *(arr[2]); // val3 will be 51

    printf("%d\n,(arr[0])");
    printf("%d\n,(arr[1])");
    printf("%d\n,(arr[2])");    

    return 0;
}

include<stdio.h>

int main()
{
    int No = 11;
    int * iptr = &No;

    char ch = 'A'
    char * cptr = &c;

    double d = 89.89;
    double * dptr = &d;
    
    printf("%d",No);
    printf("%c",ch);
    printf("%f",d);

    printf("%d",&No);
    printf("%d",&ch);
    printf("%d",&d);

    printf("%d",&iptr);
    printf("%d",&cptr);
    printf("%d",&dptr);

    printf("%d",*iptr);
    printf("%c",*cptr);
    printf("%f",*dptr);


    return 0;








}
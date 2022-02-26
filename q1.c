/*Write a C program to read the value of an integer m and
display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.*/

#include<stdio.h>
int main()
{
    int m;
    printf("Enter the Value of M\n");
    scanf("%d",&m);
    if(m>0)
    {
        printf("The value of N is 1");
    }
    else if(m<0)
    {
        printf("The value of N is -1");
    }
    else if(m=0)
    {
        printf("The value OF n is 0");
    }
    return 0;
}
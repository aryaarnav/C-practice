/*Write a C program to accept the height of a person in centimeter and
 categorize the person according to their height
<150 cm   short
>150,<165 average
>165 tall*/
#include<stdio.h>
int main()
{
    float height;
    printf("ENTER THE HEIGHT OF A PERSON IN CENTIMETER \n");
    scanf("%f", &height);
    if(height<150)
    {
        printf("THE PERSON HEIGHT IS SHORT");
    }
    else if(height>150 && height<165)
    {
        printf("THE PERSON HEIGHT IS AVERAGE");
    }
    else
    {
        printf("THE PERSON HEIGHT IS TALL");
    }
    return 0;
}
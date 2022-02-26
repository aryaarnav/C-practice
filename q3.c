/*Write a C program to find the eligibility of admission for a professional course based on the following criteria:
Marks in Maths >=60
Marks in Phy >=50
Marks in Chem>=45
Total in all three subject >=180
or
Total in Math and Physics >=150*/

#include<stdio.h>
int main()
{
    float maths, phy, chem, total, mp ;
    printf("ENTER THE MATHS MARKS \n");
    scanf("%f", &maths);
    printf("ENTER THE PHYSICS MARKS \n");
    scanf("%f", &phy);
    printf("ENTER THE CHEMISTRY MARKS \n");
    scanf("%f", &chem);
    total = maths + phy + chem;
    mp = maths + phy;
    if (maths>=60 && phy>=50 && chem>=45 && total>=180 || mp>=150)
    {
        printf("YOU ARE ELIGIBLE");
    }
    else
    {
        printf("YOU ARE NOT ELIGIBLE");
    }
    return 0;
}
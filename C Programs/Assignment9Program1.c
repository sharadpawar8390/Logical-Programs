// 1) Write a program which accept radius of circle from user and calculate its area.
//    consider a value of PI as 3.14 (Area = PI * Radius * Radius)

#include<stdio.h>


double CircleArea(float fRadius)
{
    float PI = 3.14f;
    double dArea = 0.0;
    dArea = PI * fRadius * fRadius;
    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter number :");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %f\n",dRet);

    return 0;
}
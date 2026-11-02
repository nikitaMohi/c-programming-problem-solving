/*
 Input : 5.3
 Output: 88.2026

 Input: 10.4
 Output: 339.6224

*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//   Function Name  :   CircleArea
//   Input          :   Float 
//   output         :   Flaot
//   Description    :   calculate Area 
//   Date           :   31/10/2026
//   Author         :   Nikita Balasaheb Mohite
//
////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    float iArea = 0.0f;
    float PI = 3.14;

    iArea = PI*fRadius*fRadius;

    return iArea;
    
    
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %lf",dRet);

    return 0;
    
    
}
/*

    Input: 5.3  9.78
    OutPut : 51.834

*/

#include<stdio.h>

 ////////////////////////////////////////////////////////////////////
//
//   Function Name  :   ReacArea
//   Input          :   Float 
//   output         :   Float
//   Description    :   calculate Reactangle Area 
//   Date           :   31/10/2026
//   Author         :   Nikita Balasaheb Mohite
//
////////////////////////////////////////////////////////////////////


double ReactArea(float fWidth, float fHeight)
{
    float fArea = 0.0f;

    fArea = fWidth * fHeight;

    return fArea;

}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width\n");
    scanf("%f",&fValue1);

    
    printf("Enter height\n");
    scanf("%f",&fValue2);

    dRet = ReactArea(fValue1,fValue2);

    printf("Area of Reactangle : %lf",dRet);

    return 0;

}
/*

    Input : 5
    Output: 0.464515

    Input: 7
    Output : 0.650321

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//   Function Name  :   SquareMeter
//   Input          :   Integer 
//   output         :   Double
//   Description    :   calculate 1 Square feet = 0.0929 Square meter 
//   Date           :   31/10/2026
//   Author         :   Nikita Balasaheb Mohite
//
////////////////////////////////////////////////////////////////////

double SquareMeter(int iNo)
{
    float Square = 0.0929;

    Square = iNo * Square;

    return Square;

}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Square meter is : %lf",dRet);

    return 0;

}
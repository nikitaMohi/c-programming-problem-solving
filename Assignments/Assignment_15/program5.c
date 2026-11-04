/*
    Input : 1000  745
    Output : 74.5%     
            
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
//   Function Name  :   Multiply
//   Input          :   Integer 
//   output         :   Integer
//   Description    :   display Multiplication of Three Number
//   Date           :   4/11/2026
//   Author         :   Nikita Balasaheb Mohite
//
///////////////////////////////////////////////////////////////////////////

float Percentage(int iNo1 , int iNo2)
{
   float fper = 0.0f;

   fper = ((float)iNo2 / iNo1) * 100;

   return fper;
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter Total Marks\n");
    scanf("%d",&iValue1);

    printf("Enter marks Obtained\n");
    scanf("%d",&iValue2);


    fRet = Percentage(iValue1,iValue2);

    printf("percentage is : %f\n",fRet);

    return 0;
}


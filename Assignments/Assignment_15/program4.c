/*
    Input : 5   4   7
    Output : 140     

    Input : 5   0   7
    Output :35

    Input : 5   0   0
    Output: 5
            
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

int Multiply(int iNo1 , int iNo2,int iNo3)
{
   int iAns = 0;

   iAns = iNo1 * iNo2 * iNo3;

   return iAns;
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter Three Numbers\n");
    scanf("%d %d %d",&iValue1, &iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf(" Multiplication is : %d\n",iRet);

    return 0;
}


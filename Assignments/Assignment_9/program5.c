/*
Input : 5
Output : -7     (8-15)

Input : -5
Output : -7     (8-15)

Input : 10
Output : 2895   (3840-945)

*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////
//
//   Function Name  :   FcatorialDiff
//   Input          :   integer 
//   output         :   integer
//   Description    :   Display Diffrence Between Even Fcatorial and Odd Fcatorial
//   Date           :   31/10/2026
//   Author         :   Nikita Balasaheb Mohite
//
/////////////////////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;

    }

    int icnt = 0;
    int iFactEven = 1;
    int iFactOdd = 1;

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        if(icnt % 2 == 0)
        {
            iFactEven = iFactEven*icnt;
        }
        else if(icnt % 2 != 0)
        {
            iFactOdd = iFactOdd*icnt;
        }
    }

    return iFactEven - iFactOdd;
    
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet =  FactorialDiff(iValue);

    printf("Fcatorial diffreance is %d",iRet);

    return 0;
}
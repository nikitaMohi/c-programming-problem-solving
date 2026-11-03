/*
    Input: 23  30
    Output : 108

    Input : 10 18
    Output: 70

    Input: 90 18
    Output : Invalid range

*/
#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//   Function Name  :   RangeSum
//   Input          :   Integer 
//   output         :   Integer
//   Description    :   Display sum of that range TWO Number 
//   Date           :   3/11/2026
//   Author         :   Nikita Balasaheb Mohite
//
////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{
    int icnt = 0;
    int iSum = 0;

    for(icnt = iStart; icnt <= iEnd; icnt++)
    {
        if(icnt % 2 == 0)
        {
            iSum = iSum + icnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    if(iValue1 > iValue2)
    {
        printf("Invalid range\n");
    }
    else
    {
        iRet = RangeSumEven(iValue1,iValue2);
        printf("Addition is: %d\n",iRet);
    }

    return 0;
}
